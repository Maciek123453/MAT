//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "math.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button1Click(TObject *Sender)
{
if(Edit1->Text=="")
{
  ShowMessage("Wpisz wyrazenie");


}
else
{
 int length=1;
 int lx=0;
 int pozz[100];
 int ilpoz=0;
 int ild=0;
  AnsiString Nap1[100];
 AnsiString Nap2[100];
 int poz_naw[100];
 int poz_naw2[100];
 int poz1nap[100];
 int poz1nap2[100];
 int poz2nap2[100];
 int poz2nap[100];
 int ilNAW[100];
 int iloNAW=0;
 int iloNAW2=0;
int ilnawias=0;
 ild=0;
int ilnawias3=0;
 do
 {

   if(Edit1->Text[length]=='(')
   {
      poz_naw[ilnawias]=length;
     ilnawias++;

   }
   if(Edit1->Text[length]==')')
   {

         poz_naw2[ilnawias3]=length;
     ilnawias3++;

   }






  length++;
 }
 while(length<=Edit1->Text.Length());
 int ilnawias2=0;
 AnsiString lanc[100];
 do
 {

  lanc[ilnawias2]=Edit1->Text.SubString(poz_naw[ilnawias2]+1,poz_naw2[ilnawias2]-poz_naw[ilnawias2]-1);
  ShowMessage(lanc[ilnawias2]);



 ilnawias2++;
 }
 while(ilnawias2<ilnawias);
  ilnawias2=0;
  length=1;
 do
 {
 if(Edit1->Text[length]=='x')
 {
   lx++;
   pozz[ilpoz]=length;
   ilpoz++;
 }
 if(length<Edit1->Text.Length()-2)
 {
 if((Edit1->Text[length]==')')&&(Edit1->Text[length+1]=='/')&&(Edit1->Text[length+2]=='('))
 {
   ild++;

 }
 }
 if(length<Edit1->Text.Length()-2)
 {
  if((Edit1->Text[length]==')')&&(Edit1->Text[length+1]=='+')&&(Edit1->Text[length+2]=='('))
  {

     ilNAW[iloNAW]=ild+1;
     iloNAW++;
  }
  }


 if(Edit1->Text[length]=='^')
 {

   pozz[ilpoz]=length;
   ilpoz++;

 }
 if(Edit1->Text[length]=='+')
 {

  pozz[ilpoz]=length;
  ilpoz++;

 }

 length++;
 }
 while(length<Edit1->Text.Length());
 int ild2=0;
 AnsiString Lanc[100][100];
 int ilnawi=0;
 do
 {
   do
   {


      Lanc[iloNAW2][ild2]=lanc[ilnawi];



      ilnawi++;
     ild2++;
   }
   while(ild2<ilNAW[iloNAW2]);
   if(ild2==ilNAW[iloNAW2])
   {
     ild2=0;

   }




  iloNAW2++;
 }
 while(iloNAW2<iloNAW);
 iloNAW2=0;
 ild2=0;
 int lengthskll=1;
 int ill=0;
 int ilzn=0;
 int poj_na_znaki[100][100];
 int IL_zn[100];
 do
 {
  do
  {
    if(lanc[ill][lengthskll]=='^')
    {
    poj_na_znaki[ill][ilzn]=lengthskll;
    ilzn++;
    }
    if(lanc[ill][lengthskll]=='+')
    {
    poj_na_znaki[ill][ilzn]=lengthskll;
    ilzn++;
    }
    if(lanc[ill][lengthskll]=='x')
    {
         poj_na_znaki[ill][ilzn]=lengthskll;
    ilzn++;

    }
  lengthskll++;
  }
  while(lengthskll<lanc[ill].Length());
  if(lengthskll==lanc[ill].Length())
  {
  IL_zn[ill]=ilzn;
   ilzn=0;
   lengthskll=1;
  }

 ill++;
 }
 while(ill<iloNAW+ild);
 ill=0;
 ilzn=0;
 int sklpot[50][50];
 int sklprzyx[50][50];
 int illpx=0;
 int ilpote=0;
 int illpx2[100];
 do
 {
  do
  {
   if((lanc[ill][poj_na_znaki[ill][ilzn]]=='^')&&(lanc[ill][poj_na_znaki[ill][ilzn+1]]=='+'))
   {
     sklpot[ill][ilpote]=atoi(lanc[ill].SubString(poj_na_znaki[ill][ilzn]+1,poj_na_znaki[ill][ilzn+1]-poj_na_znaki[ill][ilzn]+1).c_str());
     ilpote++;
   }
   if((lanc[ill][poj_na_znaki[ill][ilzn]]=='x')&&(lanc[ill][poj_na_znaki[ill][ilzn+1]]=='+'))
   {
     sklprzyx[ill][illpx]=atoi(lanc[ill].SubString(poj_na_znaki[ill][ilzn]+1,poj_na_znaki[ill][ilzn+1]-poj_na_znaki[ill][ilzn]+1).c_str());
     illpx++;
   }

   ilzn++;
   }
   while(ilzn<IL_zn[ill]);
   if(ilzn==IL_zn[ill])
   {
   illpx2[ill]=illpx;
   ilzn=0;
   }
 ill++;
 }
 while(ill<iloNAW+ild);
 int Wyn[50][50];
 ill=0;
 int il_sklppx=0;
 do
 {
   do
   {

     Wyn[ill][il_sklppx]=sklprzyx[ill][il_sklppx]*pow(atoi(Edit2->Text.c_str()),sklpot[ill][ilpote]);



    il_sklppx++;
   }
   while(il_sklppx<illpx2[ill]);
   if(il_sklppx==illpx2[ill])
   {
    il_sklppx=0;

   }


  ill++;
 }
 while(ill<iloNAW+ild);
   il_sklppx=0;
 ill=0;
 int SUMAX[100];
 do
 {

  do
  {

  SUMAX[ill]=SUMAX[ill]+Wyn[ill][il_sklppx];

  il_sklppx++;
  }
  while(il_sklppx<illpx2[ill]);
  if(il_sklppx==illpx2[ill])
  {
   il_sklppx=0;
   }
 ill++;
 }
 while(ill<iloNAW+ild);
 int SUMAX2[50][50];
  iloNAW2=0;
  int ils=0;
  ild2=0;
 do
 {
      do
   {


       SUMAX2[iloNAW2][ild2]=SUMAX[ils];



     ils++;
     ild2++;
   }
   while(ild2<ilNAW[iloNAW2]);
   if(ild2==ilNAW[iloNAW2])
   {
     ild2=0;

   }




 iloNAW2++;
 }
 while(iloNAW2<iloNAW);
 iloNAW2=0;
 ild2=0;
 int SUMYDM[50];
 do
 {
  do
  {
    if(ild2==0)
    {
       SUMYDM[iloNAW2]=SUMAX2[iloNAW2][ild2];
    }
    else
    {
    if(SUMAX2[iloNAW2][ild2]!=0)
    {
      SUMYDM[iloNAW2]=SUMYDM[ iloNAW2]/SUMAX2[iloNAW2][ild2];
      }
    }

   ild2++;
   }
   while(ild2<ilNAW[iloNAW2]);
   if(ild2==ilNAW[iloNAW2])
   {
     ild2=0;

   }
   iloNAW2++;
 }
 while(iloNAW2<iloNAW);
 iloNAW2=0;
 int SUMADM=0;
 do
 {
  SUMADM=SUMADM+SUMYDM[iloNAW2];


  iloNAW2++;
 }
 while(iloNAW2<iloNAW);
 ShowMessage(SUMADM);
 ShowMessage(Nap1[0]);
 ShowMessage(Nap2[0]);
 ShowMessage(Nap1[1]);
 ShowMessage(Nap2[1]);
 int ilpoz2=0;
 int sklprzyp[100];
 int skls[100];
 int sklk[100];
 int pot[100];
 int ilpot=0;
 int ilsklk=0;
 int ilskl2=0;
  sklprzyx[100];
   int ilsklpx=0;
 int ilsklprzyx=0;

  ild2=0;
 do
 {




  ild2++;
 }
 while(ild2<ild);
 do
 {
 if(ilpoz2<ilpoz-1)
 {
   if((Edit1->Text[pozz[ilpoz2]]=='^')&&(Edit1->Text[pozz[ilpoz2+1]]=='+'))
   {
     sklprzyp[ilpot]=atoi(Edit1->Text.SubString(pozz[ilpoz2]+1,pozz[ilpoz2+1]+pozz[ilpoz2]-1).c_str());
     ilpot++;

   }
   }
   if((ilpoz2==ilpoz-1)&&(Edit1->Text[pozz[ilpoz2]]=='^'))
   {
       sklprzyp[ilpot]=atoi(Edit1->Text.SubString(pozz[ilpoz2]+1,Edit1->Text.Length()+pozz[ilpoz2]).c_str());
     ilpot++;

   }
   if(ilpoz2==0)
   {
     sklk[ilsklpx]=atoi(Edit1->Text.SubString(0,pozz[0]-1).c_str());
     ilsklpx++;
   }
   if(ilpoz2<ilpoz-1)
   {
   if((ilpoz2>0)&&(Edit1->Text[pozz[ilpoz2]]=='+')&&(Edit1->Text[pozz[ilpoz2+1]]=='x'))
   {
       sklk[ilsklpx]=atoi(Edit1->Text.SubString(pozz[ilpoz2]+1,pozz[ilpoz2+1]-pozz[ilpoz2]-1).c_str());
     ilsklpx++;

   }
   }




    ilpoz2++;
 }
 while(ilpoz2<ilpoz);

 int  ilsklpx2=0;
   int sklw[100];
    do
    {


       sklw[ilsklpx2]=sklk[ilsklpx2]*pow(atoi(Edit2->Text.c_str()),sklprzyp[ilsklpx2]);


     




    ilsklpx2++;
    }
    while(ilsklpx2<ilsklpx);

    ilsklpx2=0;
    int SUMA=0;
    do
    {
    SUMA=SUMA+sklw[ilsklpx2];


    ilsklpx2++;
    }
    while(ilsklpx2<ilsklpx);
   ShowMessage(SUMA);





 if(lx==0)
 {
  ShowMessage("Musi byc wyrazenie z x");
 }
 }










































}
//---------------------------------------------------------------------------

