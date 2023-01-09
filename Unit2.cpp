//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "math.h"
 #include <fstream>
#include <string>
 #include <cstring>
#include <vector>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm2::Button1Click(TObject *Sender)
{
int ilnaw2=0;
           int SUMYM[100];
           int ilnaw3=0;
        AnsiString MNOZ[100];
        int il_nap2=0;
        int Suma_skl=0;
        int IL_ZN[200];
        int iteratornaw3=0;
        AnsiString poj_nagid[100][100];
        int sumamnidz[100][100];
        int poj_na_od[100][100];
        int poj_na_znaki[100];
        int iteratorgp=1;
        int iteratorgd=1;
        int poczatekop[100][100];
        int iteratorop=1;
        int iteratorop2=1;
        int iteratorgdz2=1;
        int iterator_sumidz=1;
        int sumy_nawiasow[100];
        int DODSUMA[100];
        int iterator_dlugosc=1;
        int liczba_znakow=1;
        int sumy_mnozenia_i_dzielenia[100];
        int liczbanaw1=0;
        int liczbanaw2=0;
        int poz_naw1[100];
        int poz_naw2[100];
        float  sumy[50];
        int sumawsz=0;
        int iteratornaw1=0;
        int iteratornaw2=0;
        int liczba_znak[100];
        int iterator=0;
        do
        {
        liczba_znak[iterator]=1;
        iterator++;
        }
        while(iterator<100);
        AnsiString lancuchy[100];
        AnsiString Operacje[100];
        AnsiString wyrazy[100];
        int POJ_NA_ZN[100];
        int pojemnik_na_znaki[100][100];
        AnsiString napisponaw;
        int iterator_znaki=0;
        int iteratorwb2=1;
         int SUMAGW=0;
        int iteratorwb=1;
        int iterator_wyrazy=0;
        AnsiString NAPIS;
        AnsiString litery="aAbBcCdDeEfFgGhHiIjJkKmMnNoOpPrRlLsStTuUwWxXyYzZvVqQ";
        if(Edit1->Text=="")
        {
          ShowMessage("Wpisz cos");
        }
        else
        {
        if((Edit1->Text[2]!='|')&&(Edit1->Text[1]=='|')&&(Edit1->Text[Edit1->Text.Length()]=='|'))
        {
            NAPIS=Edit1->Text.SubString(1,Edit1->Text.Length()-1);
        }
        do
        {
             iteratorwb++;
        }
        while(Edit1->Text[iteratorwb]=='|');
        if(Edit1->Text[1]!='|')
        {
              NAPIS=Edit1->Text;
        }
        if(Edit1->Text[1]=='-')
        {
           NAPIS=Edit1->Text.SubString(1,Edit1->Text.Length());

        }
        iteratorwb2=iteratorwb+1;
        if((Edit1->Text[iteratorwb]!='|')&&(Edit1->Text[1]=='|')&&(Edit1->Text[Edit1->Text.Length()]=='|'))
        {
        do
        {
                 iteratorwb2++;
        }
        while(Edit1->Text[iteratorwb2]!='|');
        if(Edit1->Text[iteratorwb2]=='|')
        {
            NAPIS=Edit1->Text.SubString(iteratorwb,iteratorwb2-iteratorwb);
            ShowMessage(NAPIS);
        }
        }
        int iterator_litery=1;
        int iterator_litery2=1;
        int koniec=0;
        int iterator_znak=1;
        int iterator_znak2=1;
        int pozycja=0;
        int CharReapeat=0;
        int poj_na_min[100];
        AnsiString Napisy[100];
        int il_nap=0;
        int il_min=0;
        int ilnaw=0;
        int suma=0;
        int naw=0;
        int ZNAKI=0;
        int nawiasy[100];
        int NAWIAS=0;
        AnsiString zla_skladnia;
        AnsiString LANCUCHYMNOZ[100];
        int Wlacz1=0;
        int Wlacz2=0;
        int POZ1[100];
        int POZ2[100];
        int ilnawMN=0;
        int ilnawias=0;
        int poj_na_naw[50];
        int ilznakowzm=0;
        int poznawsqrt1[50];
        int ilsqrt=0;
        int ilsqrt2=0;
        int poznawsqrt2[50];
        int s;
        int q;
        int r;
        int t;
        int nawias1;
        int nawias2;
        int sqrt=0;
        int s2;
        int i;
        int n;
        int min=0;
        int CYFRY=0;
        int literki=0;
        int SKLLAN[100];
        int iter_dlugsqrt[50];
             do
             {
             if(iterator_dlugosc>1)
             {
             if((NAPIS[iterator_dlugosc]=='(')&&(NAPIS[iterator_dlugosc-1]=='+'))
             {
                 POZ1[ilnawMN]=iterator_dlugosc;
                 Wlacz1=1;
             }
             }
             if(iterator_dlugosc<NAPIS.Length()-1)
             {
               if((NAPIS[iterator_dlugosc]==')')&&(NAPIS[iterator_dlugosc+1]=='+'))
             {
               POZ2[ilnawMN]=iterator_dlugosc;
               Wlacz2=1;
             }
             }
             if((Wlacz1==1)&&(Wlacz2==1))
             {
             LANCUCHYMNOZ[ilnawMN]=NAPIS.SubString(POZ1[ilnawMN],POZ2[ilnawMN]-POZ1[ilnawMN]+1);
             ShowMessage( LANCUCHYMNOZ[ilnawMN]);
             ilnawMN++;
             Wlacz2=0;
             Wlacz1=0;
             }
             if(iterator_dlugosc>1)
             {
              if((NAPIS[iterator_dlugosc]=='(')&&(NAPIS[iterator_dlugosc-1]=='-'))
              {

                min++;
              }
              }
             if(NAPIS[iterator_dlugosc]=='(')
             {
              poj_na_naw[ilnawias]=iterator_dlugosc;
              ilnawias++;
             poj_na_min[il_min]=iterator_dlugosc;
             il_min++;
             ilnaw++;
             nawiasy[naw]=iterator_dlugosc;
             naw++;
             poz_naw1[iteratornaw1]=iterator_dlugosc;
             iteratornaw1++;

             }
             if(iterator_dlugosc<NAPIS.Length())
             {
             if((NAPIS[iterator_dlugosc]=='(')&&(NAPIS[iterator_dlugosc+1]=='('))
             {
             NAWIAS=1;
             }
             }
             if(NAPIS[iterator_dlugosc]==')')
             {
             poj_na_naw[ilnawias]=iterator_dlugosc;
             ilnawias++;
             poj_na_min[il_min]=iterator_dlugosc;
             il_min++;
             nawiasy[naw]=iterator_dlugosc;
             naw++;
             ilnaw++;
             poz_naw2[iteratornaw2]=iterator_dlugosc;
             iteratornaw2++;
             }
             if(NAPIS[iterator_dlugosc]=='*')
             {
             poj_na_naw[ilnawias]=iterator_dlugosc;
             ilnawias++;
             poj_na_min[il_min]=iterator_dlugosc;
             il_min++;
             }
             if(NAPIS[iterator_dlugosc]=='+')
             {
             ZNAKI++;
             }
             if(NAPIS[iterator_dlugosc]=='-')
             {
             ZNAKI++;
             }
             if(NAPIS[iterator_dlugosc]=='*')
             {
             ZNAKI++;
             }
             if(NAPIS[iterator_dlugosc]=='/')
             {
             ZNAKI++;
             }
             if(NAPIS[iterator_dlugosc]=='(')
             {
               ZNAKI++;

             }
               if(NAPIS[iterator_dlugosc]==')')
             {
               ZNAKI++;

             }
             if(NAPIS[iterator_dlugosc]=='|')
             {
               ilznakowzm++;

             }
             if(NAPIS[iterator_dlugosc]=='^')
             {
               ilznakowzm++;

             }
             if(NAPIS[iterator_dlugosc]=='s')
             {
               s=1;
               s2=1;
             }
             if(NAPIS[iterator_dlugosc]=='i')
             {
               i=1;

             }
             if(NAPIS[iterator_dlugosc]=='n')
             {
               n=1;

             }

             if(NAPIS[iterator_dlugosc]=='q')
             {
              q=1;

             }
             if(NAPIS[iterator_dlugosc]=='r')
             {
              r=1;


             }
             if(NAPIS[iterator_dlugosc]=='t')
             {

              t=1;


             }
             if(NAPIS[iterator_dlugosc]=='(')
             {

              nawias1=1;


             }
              if(NAPIS[iterator_dlugosc]==')')
             {

              nawias2=1;


             }
             if((s2==1)&&(i==1)&&(n==1)&&(nawias1==1)&&(nawias2==1))
             {



             }
             if((nawias2==1)&&(nawias1==1)&&(s==1)&&(q==1)&&(r==1)&&(t==1))
             {
               iter_dlugsqrt[ilsqrt2]=iterator_dlugosc;
               sqrt=1;
               nawias2=0;
               nawias1=0;
               s=0;
               q=0;
               r=0;
               t=0;

             }
             if(iterator_dlugosc<=NAPIS.Length()-3)
             {
              if((NAPIS[iterator_dlugosc]=='s')&&(NAPIS[iterator_dlugosc+1]=='q')&&(NAPIS[iterator_dlugosc+2]=='r')&&(NAPIS[iterator_dlugosc+3]=='t'))
             {
               ilznakowzm++;

             }
             }
              if(iterator_dlugosc<=NAPIS.Length()-4)
             {
              if((NAPIS[iterator_dlugosc]=='s')&&(NAPIS[iterator_dlugosc+1]=='q')&&(NAPIS[iterator_dlugosc+2]=='r')&&(NAPIS[iterator_dlugosc+3]=='t')&&(NAPIS[iterator_dlugosc+4]=='('))
             {
                poznawsqrt1[ilsqrt]=iterator_dlugosc+4;
                ilsqrt++;
             }
             }
               if(iterator_dlugosc<=NAPIS.Length()-5)
             {
              if((NAPIS[iterator_dlugosc]=='s')&&(NAPIS[iterator_dlugosc+1]=='q')&&(NAPIS[iterator_dlugosc+2]=='r')&&(NAPIS[iterator_dlugosc+3]=='t')&&(NAPIS[iterator_dlugosc+4]=='(')&&(sqrt==1))
             {
                poznawsqrt2[ilsqrt2]=iter_dlugsqrt[ilsqrt2];
                ilsqrt2++;

                sqrt=0;
             }
             }
             if(NAPIS[iterator_dlugosc]=='0')
             {
               CYFRY++;

             }
             if(NAPIS[iterator_dlugosc]=='1')
             {
               CYFRY++;

             }
             if(NAPIS[iterator_dlugosc]=='2')
             {
                CYFRY++;

             }
             if(NAPIS[iterator_dlugosc]=='3')
             {
               CYFRY++;

             }
             if(NAPIS[iterator_dlugosc]=='4')
             {
               CYFRY++;


             }
             if(NAPIS[iterator_dlugosc]=='5')
             {
               CYFRY++;

             }
             if(NAPIS[iterator_dlugosc]=='6')
             {
               CYFRY++;

             }
             if(NAPIS[iterator_dlugosc]=='7')
             {
                CYFRY++;

             }
             if(NAPIS[iterator_dlugosc]=='8')
             {
                CYFRY++;


             }
               if(NAPIS[iterator_dlugosc]=='9')
             {
                CYFRY++;


             }
             if(NAPIS[iterator_dlugosc]=='a')
             {
                literki=1;








             }
             if(NAPIS[iterator_dlugosc]=='A')
             {

                literki=1;




             }
             if(NAPIS[iterator_dlugosc]=='b')
             {
               literki=1;







             }
             if(NAPIS[iterator_dlugosc]=='B')
             {


               literki=1;







             }
             if(NAPIS[iterator_dlugosc]=='c')
             {


                literki=1;







             }
             if(NAPIS[iterator_dlugosc]=='C')
             {


                literki=1;







             }
             if(NAPIS[iterator_dlugosc]=='d')
             {


                 literki=1;






             }
             if(NAPIS[iterator_dlugosc]=='D')
             {


                 literki=1;







             }
             if(NAPIS[iterator_dlugosc]=='e')
             {


                 literki=1;









             }
             if(NAPIS[iterator_dlugosc]=='E')
             {


                literki=1;








             }
             if(NAPIS[iterator_dlugosc]=='f')
             {



                literki=1;








             }
             if(NAPIS[iterator_dlugosc]=='F')
             {




                literki=1;








             }
             if(NAPIS[iterator_dlugosc]=='g')
             {



                 literki=1;







             }
              if(NAPIS[iterator_dlugosc]=='G')
             {


                  literki=1;








             }
                if(NAPIS[iterator_dlugosc]=='h')
             {



                  literki=1;







             }
                if(NAPIS[iterator_dlugosc]=='H')
             {



                  literki=1;







             }
                if(NAPIS[iterator_dlugosc]=='i')
             {


                    literki=1;








             }
                 if(NAPIS[iterator_dlugosc]=='I')
             {




                   literki=1;






             }
              if(NAPIS[iterator_dlugosc]=='j')
             {



                    literki=1;







             }
             if(NAPIS[iterator_dlugosc]=='J')
             {


                  literki=1;








             }
               if(NAPIS[iterator_dlugosc]=='k')
             {

                 literki=1;









             }
                if(NAPIS[iterator_dlugosc]=='K')
             {



                literki=1;







             }
              if(NAPIS[iterator_dlugosc]=='m')
             {


                 literki=1;








             }
              if(NAPIS[iterator_dlugosc]=='M')
             {

                literki=1;









             }
                if(NAPIS[iterator_dlugosc]=='n')
             {


                literki=1;








             }
                  if(NAPIS[iterator_dlugosc]=='N')
             {



                 literki=1;







             }
                if(NAPIS[iterator_dlugosc]=='o')
             {


                literki=1;








             }
               if(NAPIS[iterator_dlugosc]=='O')
             {


                literki=1;








             }
                if(NAPIS[iterator_dlugosc]=='p')
             {






                literki=1;




             }
                 if(NAPIS[iterator_dlugosc]=='P')
             {



                 literki=1;







             }
                 if(NAPIS[iterator_dlugosc]=='r')
             {


                 literki=1;








             }
                 if(NAPIS[iterator_dlugosc]=='R')
             {



                 literki=1;







             }
                if(NAPIS[iterator_dlugosc]=='s')
             {




                literki=1;






             }
               if(NAPIS[iterator_dlugosc]=='S')
             {




                 literki=1;






             }
                if(NAPIS[iterator_dlugosc]=='t')
             {

                  literki=1;









             }
                if(NAPIS[iterator_dlugosc]=='T')
             {



                 literki=1;







             }
               if(NAPIS[iterator_dlugosc]=='u')
             {




                   literki=1;






             }
              if(NAPIS[iterator_dlugosc]=='U')
             {


                  literki=1;








             }
              if(NAPIS[iterator_dlugosc]=='w')
             {

                 literki=1;









             }
              if(NAPIS[iterator_dlugosc]=='W')
             {


                 literki=1;








             }
               if(NAPIS[iterator_dlugosc]=='x')
             {


                literki=1;








             }
               if(NAPIS[iterator_dlugosc]=='X')
             {



                 literki=1;







             }
             
               if(NAPIS[iterator_dlugosc]=='y')
             {


                  literki=1;








             }
               if(NAPIS[iterator_dlugosc]=='Y')
             {


                  literki=1;








             }
               if(NAPIS[iterator_dlugosc]=='z')
             {



                 literki=1;







             }
                if(NAPIS[iterator_dlugosc]=='Z')
             {




                  literki=1;






             }
             if(NAPIS[iterator_dlugosc]=='&')
             {
             zla_skladnia="TAK";
             }
             if(NAPIS[iterator_dlugosc]=='?')
             {
             zla_skladnia="TAK";
             }
             if(NAPIS[iterator_dlugosc]=='#')
             {
             zla_skladnia="TAK";
             }
             if(NAPIS[iterator_dlugosc]=='@')
             {
             zla_skladnia="TAK";
             }
             if(NAPIS[iterator_dlugosc]=='%')
             {
             zla_skladnia="TAK";
             }
             if(NAPIS[iterator_dlugosc]=='$')
             {
             zla_skladnia="TAK";
             }
             if(NAPIS[iterator_dlugosc]=='_')
             {
             zla_skladnia="TAK";
             }
             if(NAPIS[iterator_dlugosc]==':')
             {
             zla_skladnia="TAK";
             }
             if(NAPIS[iterator_dlugosc]==';')
             {
             zla_skladnia="TAK";
             }
             if(NAPIS[iterator_dlugosc]=='{')
             {
             zla_skladnia="TAK";
             }
             if(NAPIS[iterator_dlugosc]=='}')
             {
             zla_skladnia="TAK";
             }
             if(NAPIS[iterator_dlugosc]=='{')
             {
             zla_skladnia="TAK";
             }
             if(NAPIS[iterator_dlugosc]=='}')
             {
             zla_skladnia="TAK";
             }
             if(NAPIS[iterator_dlugosc]=='<')
             {
             zla_skladnia="TAK";
             }
             if(NAPIS[iterator_dlugosc]=='>')
             {
             zla_skladnia="TAK";
             }
             if(NAPIS[iterator_dlugosc]==',')
             {
             zla_skladnia="TAK";
             }
             if(NAPIS[iterator_dlugosc]=='"')
             {
             zla_skladnia="TAK";
             }
             if(NAPIS[iterator_dlugosc]=='|')
             {

             }
             if(NAPIS[iterator_dlugosc]=='`')
             {
             zla_skladnia="TAK";
             }
             if(NAPIS[iterator_dlugosc]=='~')
             {
             zla_skladnia="TAK";
             }
             if(iterator_dlugosc<NAPIS.Length())
             {
             if((NAPIS[iterator_dlugosc]=='(')&&(NAPIS[iterator_dlugosc+1]==')'))
             {
             zla_skladnia="TAK";
             }
             }
             if(iterator_dlugosc<NAPIS.Length())
             {

             }
              if((NAPIS[NAPIS.Length()-1]==')')&&(NAPIS[NAPIS.Length()]=='+'))
             {
             zla_skladnia="TAK";
             }
               if((NAPIS[NAPIS.Length()-1]==')')&&(NAPIS[NAPIS.Length()]=='*'))
             {
             zla_skladnia="TAK";
             }
             if((NAPIS[NAPIS.Length()-1]==')')&&(NAPIS[NAPIS.Length()]=='/'))
             {
             zla_skladnia="TAK";
             }
             if(NAPIS[NAPIS.Length()]=='+')
             {
             zla_skladnia="TAK";
             }
             if(NAPIS[NAPIS.Length()]=='/')
             {
             zla_skladnia="TAK";
             }
             if(NAPIS[NAPIS.Length()]=='*')
             {
             zla_skladnia="TAK";
             }
             if(NAPIS[NAPIS.Length()]=='-')
             {
             zla_skladnia="TAK";
             }
             if(iterator_dlugosc<NAPIS.Length())
             {
             if((NAPIS[iterator_dlugosc]=='*')&&(NAPIS[iterator_dlugosc+1]=='*'))
             {
             zla_skladnia="TAK";
             }
             if((NAPIS[iterator_dlugosc]=='+')&&(NAPIS[iterator_dlugosc+1]=='+'))
             {
             zla_skladnia="TAK";
             }
             if((NAPIS[iterator_dlugosc]=='-')&&(NAPIS[iterator_dlugosc+1]=='-'))
             {
             zla_skladnia="TAK";
             }
             if((NAPIS[iterator_dlugosc]=='/')&&(NAPIS[iterator_dlugosc+1]=='/'))
             {
             zla_skladnia="TAK";
             }
             }
             if((iterator_dlugosc<NAPIS.Length())&&(iterator_dlugosc>1))
             {
             if((iterator_dlugosc>1)&&(NAPIS[iterator_dlugosc-1]==')')&&(NAPIS[iterator_dlugosc]=='*')&&(NAPIS[iterator_dlugosc+1]=='('))
             {
             Operacje[iterator_znaki]="Mnozenie";
             iterator_znaki++;
             }
             if((iterator_dlugosc>1)&&(NAPIS[iterator_dlugosc-1]==')')&&(NAPIS[iterator_dlugosc]=='+')&&(NAPIS[iterator_dlugosc+1]=='('))
             {
             Operacje[iterator_znaki]="Dodawanie";
             iterator_znaki++;
             }
             if((iterator_dlugosc>1)&&(NAPIS[iterator_dlugosc-1]==')')&&(NAPIS[iterator_dlugosc]=='/')&&(NAPIS[iterator_dlugosc+1]=='('))
             {
             Operacje[iterator_znaki]="Dzielenie";
             iterator_znaki++;
             }
             if((iterator_dlugosc>1)&&(NAPIS[iterator_dlugosc-1]==')')&&(NAPIS[iterator_dlugosc]=='-')&&(NAPIS[iterator_dlugosc+1]=='('))
             {
             Operacje[iterator_znaki]="Odejmowanie";
             iterator_znaki++;
             }
             }
             iterator_dlugosc++;
             }
             while(iterator_dlugosc<=NAPIS.Length());
             if(literki==0)
             {
              if(CYFRY==0)
             {
             ShowMessage("LALA");
             zla_skladnia="TAK";
             }
             int ilnawias2=0;
             int napispocz;
             int napisws;
             do
             {
             //   if((ilnawias2==0)&&(NAPIS[poj_na_naw[ilnawias2]]=='('))
                {
                 napispocz=atoi(NAPIS.SubString(0,poj_na_naw[ilnawias2]-2).c_str());
                 ShowMessage(napispocz);
                }
           //     if(ilnawias2>1)
                {
           //     if((NAPIS[poj_na_naw[ilnawias2-1]]==')')&&(NAPIS[poj_na_naw[ilnawias2]]=='('))
                {
                   napisws=atoi(NAPIS.SubString(poj_na_naw[ilnawias2-1]+2,poj_na_naw[ilnawias2]-poj_na_naw[ilnawias2-1]-2).c_str());
                    ShowMessage(napisws);

                }
                }

             ilnawias2++;
             }
             while(ilnawias2<ilnawias);
             int poz1[50];
             int poz2[50];
             int pn[50];
              ilsqrt2=0;
                int kr[50];
               int lengthnap=1;
               int ilkr=0;
               do
               {
                if(NAPIS[lengthnap]=='|')
                {
                kr[ilkr]=lengthnap;
                ilkr++;
                }
               lengthnap++;
               }
               while(lengthnap<NAPIS.Length());










             if(ilsqrt!=0)
             {


               do
               {

                 pn[ilsqrt2]=atoi(NAPIS.SubString(poznawsqrt1[ilsqrt2]+1,poznawsqrt2[ilsqrt2]-poznawsqrt1[ilsqrt2]-1).c_str());



               ilsqrt2++;
               }
               while(ilsqrt2<ilsqrt);
               int pn2[50];
               ilsqrt2=0;
              int liczbap=0;
           //     do
         //       {
           //       do
          //        {





           //        liczbap++;
         //         }
        //          while(pow(liczbap,2)!=pn[ilsqrt2]);
        //          if(pow(liczbap,2)==pn[ilsqrt2])
       //           {
       //            ShowMessage(liczbap);
       //            liczbap=0;
       //           }

        //        ilsqrt2++;
        //        }
        //        while(ilsqrt2<ilsqrt-1);
























             }
               if(CYFRY==0)
                 {
                    ShowMessage("Zla skladnia");

                 }
             if(ilznakowzm==0)
             {
             if(CYFRY!=0)
             {
             int ilnawMN2=0;
             int LanMnozLength=1;
             int ilNAWmnoz=0;
             int ilNAWmnoz2=0;
             int poj_na_ilnawmnoz[100];
             int poz1[50][50];
             int poz2[50][50];
             if(ilnawMN!=0)
             {
                 do
                 {
                 //       do
                 //       {
                        //       if(LANCUCHYMNOZ[ilnawMN2][LanMnozLength]=='(')
                          //     {
                          //     poz1[ilnawMN2][ilNAWmnoz]=LanMnozLength;
                          //     ilNAWmnoz++;
                          //     }
                       //        if(LANCUCHYMNOZ[ilnawMN2][LanMnozLength]==')')
                         //      {
                        //       poz2[ilnawMN2][ilNAWmnoz2]=LanMnozLength;
                       //        ilNAWmnoz2++;
                       //        }
                     //   LanMnozLength++;
                     //   }
                  //      while(LanMnozLength<LANCUCHYMNOZ[ilnawMN2].Length());
                   //     if(LanMnozLength==LANCUCHYMNOZ[ilnawMN2].Length())
                     //   {
                     //        poj_na_ilnawmnoz[ilnawMN2]=ilNAWmnoz;
                     //        ilNAWmnoz=0;
                    //         ilNAWmnoz2=0;
                    //         LanMnozLength=1;
                   //     }
                 //   ilnawMN2++;
               //    }
               //    while(ilnawMN2<ilnawMN);
                 AnsiString lancuchymnoz[100];
               //    ilNAWmnoz2=0;
               //    ilnawMN2=0;
               //    do
              //     {
                //        do
                //        {
                //            lancuchymnoz[ilnawMN2+ilNAWmnoz2]=LANCUCHYMNOZ[ilnawMN2].SubString(poz1[ilnawMN2][ilNAWmnoz2],poz2[ilnawMN2][ilNAWmnoz2]-poz1[ilnawMN2][ilNAWmnoz2]);
                //            ShowMessage(lancuchymnoz[ilnawMN2+ilNAWmnoz2]);
                //            ilNAWmnoz2++;
               //         }
              //          while(ilNAWmnoz2<poj_na_ilnawmnoz[ilnawMN2]);
                 //       if(ilNAWmnoz2==poj_na_ilnawmnoz[ilnawMN2])
                 //       {
                 //           ilNAWmnoz2=0;
                 //       }
                 //  ilnawMN2++;
                 //  }
                 //  while(ilnawMN2<ilnawMN);
               //    int ilnawdod=0;
              ////     int lengthnapis=1;
              //     int ilNAW[50];
             //      int NAW=0;
                 //  do
                 //  {
                 //   do
                 //   {
                  //    if(lancuchymnoz[ilnawdod][lengthnapis]==')')
                  //    {
                   //     NAW++;

                  //    }


                 //    lengthnapis++;
                //    }
                //    while(lengthnapis<lancuchymnoz[ilnawdod].Length());
                 //   if(lengthnapis==lancuchymnoz[ilnawdod].Length())
                 //   {
                //    ilNAW[ilnawdod]=NAW;
                //    NAW=0;
                //       lengthnapis=1;

               //     }
               //     ilnawdod++;
               //    }
               //    while(ilnawdod<ilnawMN);
                //   int POJEM[100][100];
               //    int poj_na_zw[100];
             //      int iteratorzw=0;
             //      do
            //       {
             //      poj_na_zw[iteratorzw]=POJEM[100][100];
             //      iteratorzw++;
             //      }
             //      while(iteratorzw<10);
                   int Lengthlan=1;
                   int ilnawMnoz2=0;
                   ilnawMN2=0;
                  int poj_na_zn[100][100];
                  do
                  {
                    do
                    {
                        do
                        {

                     Lengthlan++;
                     }
                      while(Lengthlan<lancuchymnoz[ilnawMN2].Length());
                      if(Lengthlan==lancuchymnoz[ilnawMN2].Length())
                      {
                            Lengthlan=1;
                      }
                      ilnawMnoz2++;
                    }
                    while(ilnawMnoz2<poj_na_ilnawmnoz[ilnawMN2]);
                   if(ilnawMnoz2==poj_na_ilnawmnoz[ilnawMN2])
                    {
                      ilnawMnoz2=0;
                    }
                    ilnawMN2++;
                   }
                  while(ilnawMN2<ilnawMN);

             if(ZNAKI==0)
             {
               ShowMessage(Edit1->Text);
             }
            else
            {
             if(NAWIAS==1)
             {
             int napislength=1;
             int poj_na_zn[100];
             int licz_naw=0;
             do
             {
                  if(Edit1->Text[napislength]=='(')
                  {
                  poj_na_zn[licz_naw]=napislength;
                  licz_naw++;
                  }
                  if(Edit1->Text[napislength]==')')
                  {
                  poj_na_zn[licz_naw]=napislength;
                  licz_naw++;
                  }
              napislength++;
             }
             while(napislength<Edit1->Text.Length());
             int licz_naw2=0;
             int CZUJ1=0;
             int CZUJ2=0;
             int poz1=0;
             int poz2=0;
             int poz3=0;
             do
             {
              if(licz_naw2<licz_naw-1)
              {
             //     if((Edit1->Text[poj_na_zn[licz_naw2]]=='(')&&(Edit1->Text[poj_na_zn[licz_naw2+1]]=='('))
              //    {
              //      CZUJ1=1;
             // //      poz1=poj_na_zn[licz_naw2+1];
             //     }
             //     if((Edit1->Text[poj_na_zn[licz_naw2]]==')')&&(Edit1->Text[poj_na_zn[licz_naw2+1]]==')'))
            //      {
              //      CZUJ2=1;
              //      poz2=poj_na_zn[licz_naw2+1];
             //       poz3=poj_na_zn[licz_naw2+2];
             //     }
              }
                 licz_naw2++;
              }
              while(licz_naw2<licz_naw);
              AnsiString LANWEW;
              AnsiString LAN2;
              if((CZUJ1==1)&&(CZUJ2==1))
              {
                LANWEW=Edit1->Text.SubString(poz1,poz2-poz1);
                ShowMessage(LANWEW);
                LAN2=Edit1->Text.SubString(poz3,Edit1->Text.Length()-poz3+1);
                ShowMessage(LAN2);
              }
              int LengthLan2=1;
              int NAW1=0;
              int NAW2=0;
               do
               {
                    if(LAN2[LengthLan2]=='(')
                    {
                    NAW1++;
                    }
                    if(LAN2[LengthLan2]==')')
                    {
                    NAW2++;
                    }
               LengthLan2++;
               }
               while(LengthLan2<=LAN2.Length());
               if((NAW1==1)&&(NAW2==1))
               {
               }
               else
               {
                int ilosc_naw=0;
                int iterator_length=1;
                int poznaw1[50];
                int poznaw2[50];
                int ilnaw1=0;
                int ilnaw2=0;
                do
                {
                 if(LAN2[iterator_length]=='(')
                 {
                     poznaw1[ilnaw1]=iterator_length;
                     ilnaw1++;
                 }
                 if(LAN2[iterator_length]==')')
                 {
                     poznaw2[ilnaw2]=iterator_length;
                     ilnaw2++;
                 }
                 iterator_length++;
                }
                while(iterator_length<=LAN2.Length());
                int ilnaw3=0;
                AnsiString LAN2WEW[100];
                do
                {
                   LAN2WEW[ilnaw3]=LAN2.SubString(poznaw1[ilnaw3]+1,poznaw2[ilnaw3]-poznaw1[ilnaw3]-1);
                   ilnaw3++;
                }
                while(ilnaw3<ilnaw2);
                ShowMessage(LAN2WEW[0]);
                ShowMessage(LAN2WEW[1]);
                ilnaw3=0;
                int iterator_lan=1;
                int poj_na_zn_lan_wew[100][100];
                int LZ=0;
                int ILZ[100];
                do
                {
                   do
                   {
                       if(LAN2WEW[ilnaw3][iterator_lan]=='+')
                       {
                       poj_na_zn_lan_wew[ilnaw3][LZ]=iterator_lan;
                       LZ++;
                       }
                       if(LAN2WEW[ilnaw3][iterator_lan]=='/')
                       {
                       poj_na_zn_lan_wew[ilnaw3][LZ]=iterator_lan;
                       LZ++;
                       }
                       if(LAN2WEW[ilnaw3][iterator_lan]=='-')
                       {
                       poj_na_zn_lan_wew[ilnaw3][LZ]= iterator_lan;
                       LZ++;
                       }
                       if(LAN2WEW[ilnaw3][iterator_lan]=='*')
                       {
                       poj_na_zn_lan_wew[ilnaw3][LZ]=iterator_lan;
                       LZ++;
                       }
                   iterator_lan++;
                   }
                   while(iterator_lan<LAN2WEW[ilnaw3].Length());
                   if(iterator_lan==LAN2WEW[ilnaw3].Length())
                   {
                   ILZ[ilnaw3]=LZ;
                   LZ=0;
                   iterator_lan=1;
                   }
                   ilnaw3++;
                 }
                 while(ilnaw3<ilnaw2);
                 ilnaw3=0;

                 int Liczb_Zn=0;
                 int sumy_skl[50][50];
                 int plmin=0;
                 int ilplmindod[50];
                 do
                 {
                    do
                    {
                        if((LAN2WEW[ilnaw3][poj_na_zn_lan_wew[ilnaw3][Liczb_Zn]]=='+')&&(Liczb_Zn==0))
                        {
                        sumy_skl[ilnaw3][plmin]=atof(LAN2WEW[ilnaw3].SubString(0,poj_na_zn_lan_wew[ilnaw3][0]-1).c_str());
                        plmin++;
                        }
                        if(((LAN2WEW[ilnaw3][poj_na_zn_lan_wew[ilnaw3][Liczb_Zn]]=='+')&&(Liczb_Zn>0)&&(Liczb_Zn<ILZ[ilnaw3])))
                        {
                        sumy_skl[ilnaw3][plmin]=atof(LAN2WEW[ilnaw3].SubString(poj_na_zn_lan_wew[ilnaw3][Liczb_Zn-1]+1,poj_na_zn_lan_wew[ilnaw3][Liczb_Zn]-poj_na_zn_lan_wew[ilnaw3][Liczb_Zn-1]-1).c_str());
                        plmin++;
                        }
                        if((LAN2WEW[ilnaw3][poj_na_zn_lan_wew[ilnaw3][Liczb_Zn]]=='+')&&(Liczb_Zn==ILZ[ilnaw3]-1))
                        {
                        sumy_skl[ilnaw3][plmin]=atof(LAN2WEW[ilnaw3].SubString(poj_na_zn_lan_wew[ilnaw3][Liczb_Zn]+1,LAN2WEW[ilnaw3].Length()-poj_na_zn_lan_wew[ilnaw3][Liczb_Zn]).c_str());
                        plmin++;
                        }
                        Liczb_Zn++;
                    }
                    while(Liczb_Zn<ILZ[ilnaw3]);
                    if(Liczb_Zn==ILZ[ilnaw3])
                    {
                    ilplmindod[ilnaw3]=plmin;
                    plmin=0;
                    Liczb_Zn=0;
                    }
                    ilnaw3++;
                 }
                 while(ilnaw3<ilnaw2);
                 int ilplmin2=0;
                 int SUMA[50];
                 ilnaw3=0;
                 do
                 {
                     do
                     {
                     SUMA[ilnaw3]=SUMA[ilnaw3]+sumy_skl[ilnaw3][ilplmin2];
                     ilplmin2++;
                     }
                     while(ilplmin2<ilplmindod[ilnaw3]);
                     if(ilplmin2==ilplmindod[ilnaw3])
                     {
                     ilplmin2=0;
                     }
                     ilnaw3++;
                 }
                 while(ilnaw3<ilnaw2);
                 ShowMessage(SUMA[0]);
                 ShowMessage(SUMA[1]);
                 ilnaw3=0;
                 int SUMAMNOZ=0;
                 do
                 {
                    if(ilnaw3==0)
                    {
                    SUMAMNOZ=SUMA[ilnaw3];
                    }
                    else
                    {
                    SUMAMNOZ=SUMAMNOZ*SUMA[ilnaw3];
                    }
                 ilnaw3++;
                 }
                 while(ilnaw3<ilnaw2);
                 ShowMessage(SUMAMNOZ);
                 int iterator_LAN=1;
                 int Pojem_na_Lan[50];
                 int il_lan=0;
                 do
                 {
                  if(LANWEW[iterator_LAN]=='(')
                  {
                  Pojem_na_Lan[il_lan]=iterator_LAN;
                  il_lan++;
                  }
                  if(LANWEW[iterator_LAN]==')')
                  {
                  Pojem_na_Lan[il_lan]=iterator_LAN;
                  il_lan++;
                  }
                iterator_LAN++;
               }
               while(iterator_LAN<LANWEW.Length());
               AnsiString LANCWEW=LANWEW.SubString(Pojem_na_Lan[0],Pojem_na_Lan[il_lan-1]-Pojem_na_Lan[0]+1);
               AnsiString LANKON=LANWEW.SubString(Pojem_na_Lan[il_lan-1]+2,LANWEW.Length()-Pojem_na_Lan[il_lan-1]);
               ShowMessage(LANCWEW);
               ShowMessage(LANKON);
               int lancwewlength=1;
               int NAW1[50];
               int NAW2[50];
               ilnaw1=0;
               ilnaw2=0;
               do
               {
                   if(LANCWEW[lancwewlength]=='(')
                   {
                   NAW1[ilnaw1]=lancwewlength;
                   ilnaw1++;
                   }
                   if(LANCWEW[lancwewlength]==')')
                   {
                   NAW2[ilnaw2]=lancwewlength;
                   ilnaw2++;
                   }
               lancwewlength++;
               }
               while(lancwewlength<=LANCWEW.Length());
               ilnaw3=0;
               AnsiString LAN[100];
               do
               {
               LAN[ilnaw3]=LANCWEW.SubString(NAW1[ilnaw3],NAW2[ilnaw3]-NAW1[ilnaw3]);
               ilnaw3++;
               }
               while(ilnaw3<ilnaw2);
               int Lengthlan=1;
               ilnaw3=0;
               int poj_na_zn[100][100];
               int LZN=0;
               int ILLZN[100];
               do
               {
                  do
                  {
                    if(LAN[ilnaw3][Lengthlan]=='+')
                    {
                    poj_na_zn[ilnaw3][LZN]=Lengthlan;
                    LZN++;
                    }
                    if(LAN[ilnaw3][Lengthlan]=='-')
                    {
                    poj_na_zn[ilnaw3][LZN]=Lengthlan;
                    LZN++;
                    }
                    if(LAN[ilnaw3][Lengthlan]=='*')
                    {
                    poj_na_zn[ilnaw3][LZN]=Lengthlan;
                    LZN++;
                    }
                    if(LAN[ilnaw3][Lengthlan]=='/')
                    {
                    poj_na_zn[ilnaw3][LZN]=Lengthlan;
                    LZN++;
                    }
                   Lengthlan++;
                  }
                  while(Lengthlan<LAN[ilnaw3].Length());
                  if(Lengthlan==LAN[ilnaw3].Length())
                  {
                  ILLZN[ilnaw3]=LZN;
                  LZN=0;
                  Lengthlan=1;
                  }
                  ilnaw3++;
                }
                while(ilnaw3<ilnaw2);
                int LZN2=0;

                int SKLLAN[100][100];
                int PLMIN=0;
                int ILPLMIN[100];

                  do
                  {
                     if((LAN[ilnaw3][poj_na_zn[ilnaw3][LZN2]]=='+')&&(LZN2==0))
                     {
                     SKLLAN[ilnaw3][PLMIN]=atoi(LAN[ilnaw3].SubString(0,poj_na_zn[ilnaw3][LZN2]-1).c_str());
                     PLMIN++;
                     }
                     if((LAN[ilnaw3][poj_na_zn[ilnaw3][LZN2]]=='+')&&(LZN2>0)&&(LZN2<ILLZN[ilnaw3]))
                     {
                     SKLLAN[ilnaw3][PLMIN]=atoi(LAN[ilnaw3].SubString(poj_na_zn[ilnaw3][LZN-1]+1,poj_na_zn[ilnaw3][LZN2]-poj_na_zn[ilnaw3][LZN2-1]-1).c_str());
                     PLMIN++;
                     }
                     if((LAN[ilnaw3][poj_na_zn[ilnaw3][LZN2]]=='+')&&(LZN2==ILLZN[ilnaw3]-1))
                     {
                     SKLLAN[ilnaw3][PLMIN]=atoi(LAN[ilnaw3].SubString(poj_na_zn[ilnaw3][LZN2]+1,LAN[ilnaw3].Length()-poj_na_zn[ilnaw3][LZN2]).c_str());
                     PLMIN++;
                     }
                     LZN2++;
                     }
                     while(LZN2<ILLZN[ilnaw3]);
                     if(LZN2==ILLZN[ilnaw3])
                     {
                     ILPLMIN[ilnaw3]=PLMIN;
                     PLMIN=0;
                     LZN2=0;
                     }
                     ilnaw3++;
                 }
                 while(ilnaw3<ilnaw2);
                 int SUMYLAN[100];
                 ilnaw3=0;
                 int PLMIN2=0;
                 do
                 {
                     do
                     {
                     SUMYLAN[ilnaw3]=SUMYLAN[ilnaw3]+SKLLAN[ilnaw3][PLMIN2];
                     PLMIN2++;
                     }
                     while(PLMIN2<ILPLMIN[ilnaw3]);
                     if(PLMIN2==ILPLMIN[ilnaw3])
                     {
                     PLMIN2=0;
                     }
                     ilnaw3++;
                 }
                 while(ilnaw3<ilnaw2);
                 ilnaw3=0;
                 int SUMAMNOZEN=0;
                 do
                 {
                     if(ilnaw3==0)
                     {
                     SUMAMNOZEN=SUMYLAN[ilnaw3];
                     }
                     else
                     {
                     SUMAMNOZEN=SUMAMNOZEN*SUMYLAN[ilnaw3];
                     }
                 ilnaw3++;
                 }
                 while(ilnaw3<ilnaw2);
                 int POJ_NA_ZN[100];
                 int iterator_lankon=1;
                 int Znaki=0;
                 do
                 {
                       if(LANKON[iterator_lankon]=='+')
                       {
                       POJ_NA_ZN[Znaki]=iterator_lankon;
                       Znaki++;
                       }
                       if(LANKON[iterator_lankon]=='-')
                       {
                       POJ_NA_ZN[Znaki]=iterator_lankon;
                       Znaki++;
                       }
                       if(LANKON[iterator_lankon]=='*')
                       {
                       POJ_NA_ZN[Znaki]=iterator_lankon;
                       Znaki++;
                       }
                       if(LANKON[iterator_lankon]=='/')
                       {
                       POJ_NA_ZN[Znaki]=iterator_lankon;
                       Znaki++;
                       }
                      iterator_lankon++;
                 }
                 while(iterator_lankon<LANKON.Length());
                 int Znaki2=0;
                 int SKLAD[100];
                 do
                 {
                       if((Znaki2==0)&&(LANKON[POJ_NA_ZN[Znaki2]]=='+'))
                       {
                       SKLAD[Znaki2]=atoi(LANKON.SubString(0,POJ_NA_ZN[0]-1).c_str());
                       }
                       if(Znaki2>0)
                       {
                       if((Znaki2<Znaki)&&(Znaki2>0)&&(LANKON[POJ_NA_ZN[Znaki2]]=='+'))
                       {
                       SKLAD[Znaki2]=atoi(LANKON.SubString(POJ_NA_ZN[Znaki2-1]+1,POJ_NA_ZN[Znaki2]-POJ_NA_ZN[Znaki2-1]-1).c_str());
                       }
                       }
                       if((Znaki2==Znaki-1)&&(LANKON[POJ_NA_ZN[Znaki2]]=='+'))
                       {
                       SKLAD[Znaki2]=atoi(LANKON.SubString(POJ_NA_ZN[Znaki2]+1,LANKON.Length()-POJ_NA_ZN[Znaki2]).c_str());
                       }
                 Znaki2++;
                 }
                 while(Znaki2<Znaki);
                 int SUMANAPDOD=0;
                 Znaki2=0;
                 do
                 {
                 SUMANAPDOD=SUMANAPDOD+SKLAD[Znaki2];
                 Znaki2++;
                 }
                 while(Znaki2<Znaki);
                 ShowMessage((SUMANAPDOD+SUMAMNOZEN)*SUMAMNOZ);
                 }
                 int naw2=0;
                 int czuj1=0;
                 int czuj2=0;
                 int Czuj1=0;
                 int Czuj2=0;
                 poz1=0;
                 int IL2=0;
                 poz2=0;
                 AnsiString LANCUCHYDOD[100];
                 AnsiString LANCUCHR[100];
                 int illanc=0;
                 AnsiString LancuchyW[100];
                 int ilosclandod=0;
                 int pozDOD1=0;
                 int pozDOD2=0;
                 if(iteratornaw2!=0)
                 {
                 do
                 {
                 if((naw2>0)&&(naw2<naw-1))
                 {
                      if((NAPIS[nawiasy[naw2-1]]!='(')&&(NAPIS[nawiasy[naw2]]=='(')&&(NAPIS[nawiasy[naw2+1]]=='('))
                      {
                      poz1=nawiasy[naw2];
                      czuj1=1;
                      }
                 }
                 if((naw2>0)&&(naw2<naw-1))
                 {
                     if((NAPIS[nawiasy[naw2-1]]!=')')&&(NAPIS[nawiasy[naw2]]==')')&&(NAPIS[nawiasy[naw2+1]]==')'))
                     {
                     poz2=nawiasy[naw2+1];
                     czuj2=1;
                     }
                     if((NAPIS[nawiasy[naw2]]==')')&&(NAPIS[nawiasy[naw2+1]]==')'))
                     {
                     LANCUCHYDOD[ilosclandod]=NAPIS.SubString(nawiasy[naw2]+2,nawiasy[naw2+1]-nawiasy[naw2]-2);
                     ilosclandod++;
                     }
                 }
                 if((czuj1==1)&&(czuj2==1))
                 {
                 LANCUCHR[illanc]=NAPIS.SubString(poz1,poz2);
                 illanc++;
                 czuj1=0;
                 czuj2=0;
                 }
                 if((Czuj1==1)&&(Czuj2==1))
                 {
                 LancuchyW[illanc]=NAPIS.SubString(pozDOD1,pozDOD2);
                 illanc++;
                 Czuj1=0;
                 Czuj2=0;
                 }
                 naw2++;
                 }
                 while(naw2<naw);
                 int ilosclandod2=0;
                 int iterator_lengthlan=1;
                 int LICZBA_ZNAKOWLAN=0;
                 int POJ_NA_ZN[100][100];
                 int liczba_znakowil[100];
                 do
                 {
                   do
                   {
                         if(LANCUCHYDOD[ilosclandod2][iterator_lengthlan]=='+')
                         {
                         POJ_NA_ZN[ilosclandod2][LICZBA_ZNAKOWLAN]=iterator_lengthlan;
                         LICZBA_ZNAKOWLAN++;
                         }
                         if(LANCUCHYDOD[ilosclandod2][iterator_lengthlan]=='-')
                         {
                         POJ_NA_ZN[ilosclandod2][LICZBA_ZNAKOWLAN]=iterator_lengthlan;
                         LICZBA_ZNAKOWLAN++;
                         }
                         if(LANCUCHYDOD[ilosclandod2][iterator_lengthlan]=='*')
                         {
                         POJ_NA_ZN[ilosclandod2][LICZBA_ZNAKOWLAN]=iterator_lengthlan;
                         LICZBA_ZNAKOWLAN++;
                         }
                         if(LANCUCHYDOD[ilosclandod2][iterator_lengthlan]=='/')
                         {
                         POJ_NA_ZN[ilosclandod2][LICZBA_ZNAKOWLAN]=iterator_lengthlan;
                         LICZBA_ZNAKOWLAN++;
                         }
                    iterator_lengthlan++;
                   }
                   while(iterator_lengthlan<LANCUCHYDOD[ilosclandod2].Length());
                   if(iterator_lengthlan==LANCUCHYDOD[ilosclandod2].Length())
                   {
                     liczba_znakowil[ilosclandod2]=LICZBA_ZNAKOWLAN;
                     LICZBA_ZNAKOWLAN=0;
                     iterator_lengthlan=1;
                   }
                  ilosclandod2++;
                 }
                 while(ilosclandod2<ilosclandod);
                 int LICZBA_ZNAKOWLAN2=0;
                 ilosclandod2=0;
                 int SKLDOD[100][100];
                 int DODSUM[100];
                 do
                  {
                    do
                    {
                       if((LANCUCHYDOD[ilosclandod2][POJ_NA_ZN[ilosclandod2][LICZBA_ZNAKOWLAN2]]=='+')&&(LICZBA_ZNAKOWLAN2==0))
                       {
                       SKLDOD[ilosclandod2][LICZBA_ZNAKOWLAN2]=atof(LANCUCHYDOD[ilosclandod2].SubString(0,POJ_NA_ZN[ilosclandod2][LICZBA_ZNAKOWLAN2]-1).c_str());
                       }
                       if(LICZBA_ZNAKOWLAN2>1)
                       {
                       if((LANCUCHYDOD[ilosclandod2][POJ_NA_ZN[ilosclandod2][LICZBA_ZNAKOWLAN2-1]]=='+')&&(LICZBA_ZNAKOWLAN2>0)&&(LICZBA_ZNAKOWLAN2<liczba_znakowil[ilosclandod2]))
                       {
                       SKLDOD[ilosclandod2][LICZBA_ZNAKOWLAN2]=atof(LANCUCHYDOD[ilosclandod2].SubString(POJ_NA_ZN[ilosclandod2][LICZBA_ZNAKOWLAN2-1]+1,POJ_NA_ZN[ilosclandod2][LICZBA_ZNAKOWLAN2]-POJ_NA_ZN[ilosclandod2][LICZBA_ZNAKOWLAN2-1]-1).c_str());
                       }
                       }
                       if((LANCUCHYDOD[ilosclandod2][POJ_NA_ZN[ilosclandod2][LICZBA_ZNAKOWLAN2]]=='+')&&(LICZBA_ZNAKOWLAN2==0))
                       {
                       DODSUM[ilosclandod2]=atof(LANCUCHYDOD[ilosclandod2].SubString(POJ_NA_ZN[ilosclandod2][LICZBA_ZNAKOWLAN2]+1,POJ_NA_ZN[ilosclandod2][LICZBA_ZNAKOWLAN2+1]-POJ_NA_ZN[ilosclandod2][LICZBA_ZNAKOWLAN2]-1).c_str());
                       }
                       if((LANCUCHYDOD[ilosclandod2][POJ_NA_ZN[ilosclandod2][LICZBA_ZNAKOWLAN2]]=='+')&&(LICZBA_ZNAKOWLAN2==liczba_znakowil[ilosclandod2]-1))
                       {
                       SKLDOD[ilosclandod2][LICZBA_ZNAKOWLAN2]=atof(LANCUCHYDOD[ilosclandod2].SubString(POJ_NA_ZN[ilosclandod2][LICZBA_ZNAKOWLAN2]+1,LANCUCHYDOD[ilosclandod2].Length()-POJ_NA_ZN[ilosclandod2][LICZBA_ZNAKOWLAN2]).c_str());
                       }
                     LICZBA_ZNAKOWLAN2++;
                    }
                    while(LICZBA_ZNAKOWLAN2<liczba_znakowil[ilosclandod2]);
                    if(LICZBA_ZNAKOWLAN2==liczba_znakowil[ilosclandod2])
                    {
                      LICZBA_ZNAKOWLAN2=0;
                    }
                    ilosclandod2++;
                  }
                 while(ilosclandod2<ilosclandod);
                 ilosclandod2=0;
                 LICZBA_ZNAKOWLAN2=0;
                 int SUMY4[100];
                    do
                    {
                        do
                        {
                        SUMY4[ilosclandod2]=SUMY4[ilosclandod2]+SKLDOD[ilosclandod2][LICZBA_ZNAKOWLAN2];
                        LICZBA_ZNAKOWLAN2++;
                        }
                        while(LICZBA_ZNAKOWLAN2<liczba_znakowil[ilosclandod2]);
                        if(LICZBA_ZNAKOWLAN2==liczba_znakowil[ilosclandod2])
                        {
                        LICZBA_ZNAKOWLAN2=0;
                        }
                        ilosclandod2++;
                     }
                     while(ilosclandod2<ilosclandod);
                   ilosclandod2=0;
                   int illanc2=0;
                   AnsiString lancuchywew[100];
                   int iterator_length=1;
                   int poznaw[100];
                   int poznaw2[100];
                   int ilpoz=0;
                   int ilpozE[100];
                   int ilnawEX=0;
                   int il_POZ=0;
                   int ilnawi=0;
                   int illancuch=0;
                   do
                   {
                      if(iterator_length<NAPIS.Length()-1)
                      {
                      if((NAPIS[iterator_length]==')')&&(NAPIS[iterator_length+1]==')'))
                      {
                      illancuch++;
                      }
                      }
                      if(NAPIS[iterator_length]=='(')
                      {
                      poznaw[ilnawi]=iterator_length;
                      ilnawi++;
                      }
                      if(NAPIS[iterator_length]==')')
                      {
                      poznaw[ilnawi]=iterator_length;
                      ilnawi++;
                      }
                    iterator_length++;
                   }
                   while(iterator_length<=NAPIS.Length());
                   int ilnawi2=0;
                   int ilpozycji=0;
                   illanc=0;
                   int poj_il_Poz[100];
                   int IL=0;
                   do
                   {
                   if(ilnawi2<ilnawi-1)
                   {
                      if((NAPIS[poznaw[ilnawi2]]=='(')&&(NAPIS[poznaw[ilnawi2+1]]==')'))
                      {
                          lancuchywew[illanc]=NAPIS.SubString(poznaw[ilnawi2]+1,poznaw[ilnawi2+1]-poznaw[ilnawi2]-1);
                          illanc++;
                          ilpozycji++;
                      }
                      if((NAPIS[poznaw[ilnawi2]]==')')&&(NAPIS[poznaw[ilnawi2+1]]==')'))
                      {
                          poj_il_Poz[IL]=ilpozycji;
                          ShowMessage(poj_il_Poz[IL]);
                          IL++;
                          ilpozycji=0;;
                      }
                      }
                      ilnawi2++;
                   }
                   while(ilnawi2<=ilnawi);
                   int ilpoz2=0;
                   illanc2=0;
                   int poj_na_znaki[100][100];
                   int liczba_znakow=0;
                   int il_znakow[100];
                   int ilosc=illanc2+ilpoz;
                   int ITERATOR_LENGTH=1;
                   int ilnawEX2=0;
                   int ilosc2=0;
                    do
                    {
                    do
                    {
                      do
                      {
                         if(lancuchywew[illanc2][ITERATOR_LENGTH]=='+')
                         {
                         poj_na_znaki[illanc2][liczba_znakow]=ITERATOR_LENGTH;
                         liczba_znakow++;
                         }
                         if(lancuchywew[illanc2][ITERATOR_LENGTH]=='-')
                         {
                         poj_na_znaki[illanc2][liczba_znakow]=ITERATOR_LENGTH;
                         liczba_znakow++;
                         }
                         if(lancuchywew[illanc2][ITERATOR_LENGTH]=='*')
                         {
                         poj_na_znaki[illanc2][liczba_znakow]=ITERATOR_LENGTH;
                         liczba_znakow++;
                         }
                         if(lancuchywew[illanc2][ITERATOR_LENGTH]=='/')
                         {
                         poj_na_znaki[illanc2][liczba_znakow]=ITERATOR_LENGTH;
                         liczba_znakow++;
                         }
                      ITERATOR_LENGTH++;
                      }
                      while(ITERATOR_LENGTH<lancuchywew[illanc2].Length());
                      if(ITERATOR_LENGTH==lancuchywew[illanc2].Length())
                      {
                      il_znakow[illanc2]=liczba_znakow;
                      liczba_znakow=0;
                      ITERATOR_LENGTH=1;
                      }
                      illanc2++;
                   }
                   while(illanc2<illanc);
                   ShowMessage("LALA");
                   int SKL[100][100];
                    int IL2=0;
                   int liczba_znakow2=0;
                   ilnawEX2=0;
                   illanc2=0;
                   ilpoz2=0;
                   int LENGTH[100];
                       do
                       {
                            do
                            {
                            if((lancuchywew[illanc2][poj_na_znaki[illanc2][liczba_znakow2]]=='+')&&(liczba_znakow2==0))
                            {
                              SKL[illanc2][liczba_znakow2]=atof(lancuchywew[illanc2].SubString(0,poj_na_znaki[illanc2][liczba_znakow2]-1).c_str());
                            }
                            if((lancuchywew[illanc2][poj_na_znaki[illanc2][liczba_znakow2]]=='+')&&(liczba_znakow2==0)&&(il_znakow[illanc2]==1))
                            {
                               LENGTH[illanc2]=atof(lancuchywew[illanc2].SubString(poj_na_znaki[illanc2][liczba_znakow2]+1,lancuchywew[illanc2].Length()-poj_na_znaki[illanc2][liczba_znakow2]).c_str());
                            }
                            if((lancuchywew[illanc2][poj_na_znaki[illanc2][liczba_znakow2]]=='+')&&(liczba_znakow2>0)&&(liczba_znakow2<il_znakow[illanc2]))
                            {
                              SKL[illanc2][liczba_znakow2]=atof(lancuchywew[illanc2].SubString(poj_na_znaki[illanc2][liczba_znakow2]+1,poj_na_znaki[illanc2][liczba_znakow2+1]-poj_na_znaki[illanc2][liczba_znakow2]-1).c_str());
                            }
                            if((lancuchywew[illanc2][poj_na_znaki[illanc2][liczba_znakow2]]=='+')&&(liczba_znakow2==il_znakow[illanc2]-1)&&(il_znakow[illanc2]!=1))
                            {
                              SKL[illanc2][liczba_znakow2]=atof(lancuchywew[illanc2].SubString(poj_na_znaki[illanc2][liczba_znakow2]+1,lancuchywew[illanc2].Length()-poj_na_znaki[illanc2][liczba_znakow2]).c_str());
                            }
                            liczba_znakow2++;
                            }
                            while(liczba_znakow2<il_znakow[illanc2]);
                          if(liczba_znakow2==il_znakow[illanc2])
                          {
                          liczba_znakow2=0;
                          }
                          illanc2++;
                        }
                        while(illanc2<illanc);
                        int SUMY3[100];
                        int liczba_znakow3=0;
                        illanc2=0;
                        ilpoz2=0;
                        int liczby[100];
                        IL2=0;
                         do
                         {
                        do
                        {
                        SUMY3[illanc2]=SUMY3[illanc2]+SKL[illanc2][liczba_znakow3]+LENGTH[illanc2];
                        liczba_znakow3++;
                        }
                        while(liczba_znakow3<il_znakow[illanc2]);
                        if(liczba_znakow3==il_znakow[illanc2])
                        {
                           liczba_znakow3=0;
                        }
                        liczby[illanc2]=illanc2;
                        illanc2++;
                        }
                        while(illanc2<illanc);
                        illanc2=0;
                        ilpoz2=0;
                        int POZ[100][100];
                        do
                        {
                          do
                          {
                              POZ[IL2][ilpoz2]=illanc2;
                              ShowMessage(POZ[IL2][ilpoz2]);
                              illanc2++;
                              ilpoz2++;
                          }
                          while(ilpoz2<poj_il_Poz[IL2]);
                          if(ilpoz2==poj_il_Poz[IL2])
                          {
                          ilpoz2=0;
                          }
                          IL2++;
                        }
                        while(IL2<=IL);
                        IL2=0;
                        ilpoz2=0;
                        int SUMY2[100][100];
                        int zmienna=0;
                        int illiczb=0;
                        int liczby2[100];
                        int OBSUM;
                        int liczba=0;
                        do
                        {
                        do
                        {
                          do
                          {
                              SUMY2[IL2][ilpoz2]=SUMY3[POZ[IL2][ilpoz2]];
                              ilpoz2++;
                          }
                          while(ilpoz2<=poj_il_Poz[IL2]);
                          if(ilpoz2==poj_il_Poz[IL2]+1)
                          {
                           ilpoz2=0;
                          }
                         IL2++;
                        }
                        while(IL2<=IL);

                        illanc2=0;
                        ilpoz2=0;

                        int IL3=0;
                        do
                        {

                              if(ilpoz2==0)
                              {
                              SUMYM[IL2]=SUMY2[IL2][ilpoz2];
                              }
                              else
                              {
                              SUMYM[IL2]=SUMYM[IL2]*SUMY2[IL2][ilpoz2];
                              }
                         ilpoz2++;
                        }
                        while(ilpoz2<poj_il_Poz[IL2]);
                        if(ilpoz2==poj_il_Poz[IL2])
                        {
                        ilpoz2=0;
                        }
                        IL2++;
                        }
                        while(IL2<=IL);
                        int SUMYMISKL=0;
                        IL2=0;
                        do
                        {
                           if(IL2==0)
                           {
                           SUMYMISKL=SUMYM[IL2]+SUMY4[IL2]+DODSUM[ilosclandod2];
                           }
                           else
                           {
                           SUMYMISKL=SUMYMISKL*(SUMYM[IL2]+SUMY4[IL2]+DODSUM[IL2]);
                           }
                        IL2++;
                        }
                        while(IL2<IL);

                      illanc=0;

             if(CYFRY==0)
             {
               zla_skladnia="TAK";
             }
             if(iteratornaw1!=iteratornaw2)
             {
             zla_skladnia="TAK";
             }
             if(ilnaw%2==1)
             {
              zla_skladnia="TAK";
             }
             if(zla_skladnia=="TAK")
             {
             ShowMessage("Zla skladnia");
             }
             else
             {
             int illanc=0;
             if(illanc==0)
             {
             if(iteratornaw2==0)
             {
             int liczba_znakowNAW=0;
             int iterator_napis=1;
             int POJ_NA_ZN[100];
                 do
                 {
                     if(Edit1->Text[iterator_napis]=='+')
                     {
                        POJ_NA_ZN[liczba_znakowNAW]=iterator_napis;
                        liczba_znakowNAW++;
                     }
                     if(Edit1->Text[iterator_napis]=='-')
                     {
                        POJ_NA_ZN[liczba_znakowNAW]=iterator_napis;
                        liczba_znakowNAW++;
                     }
                      if(Edit1->Text[iterator_napis]=='*')
                     {
                        POJ_NA_ZN[liczba_znakowNAW]=iterator_napis;
                        liczba_znakowNAW++;
                     }
                     if(Edit1->Text[iterator_napis]=='/')
                     {
                       POJ_NA_ZN[liczba_znakowNAW]=iterator_napis;
                       liczba_znakowNAW++;
                     }
                   iterator_napis++;
                 }
                 while(iterator_napis<Edit1->Text.Length());
                 int SUM_SKL[100];
                 int liczba_znakow2=0;
                 int lplmin=0;
                 do
                 {
                   if(liczba_znakow2==0)
                   {
                       SUM_SKL[lplmin]=atof(Edit1->Text.SubString(0,POJ_NA_ZN[liczba_znakow2]).c_str());
                       lplmin++;
                   }
                   if(liczba_znakow2>0)
                   {
                   if((Edit1->Text[POJ_NA_ZN[liczba_znakow2-1]]=='+')&&(liczba_znakow2>0)&&(liczba_znakow2<liczba_znakowNAW))
                   {
                        SUM_SKL[lplmin]=atof(Edit1->Text.SubString(POJ_NA_ZN[liczba_znakow2-1]+1,POJ_NA_ZN[liczba_znakow2]-POJ_NA_ZN[liczba_znakow2-1]-1).c_str());
                        lplmin++;
                   }
                   }
                   if((Edit1->Text[POJ_NA_ZN[liczba_znakow2]]=='+')&&(liczba_znakow2==liczba_znakowNAW-1))
                   {
                         SUM_SKL[lplmin]=atof(Edit1->Text.SubString(POJ_NA_ZN[liczba_znakow2]+1,Edit1->Text.Length()-POJ_NA_ZN[liczba_znakow2]).c_str());
                         lplmin++;
                   }
                   if((Edit1->Text[POJ_NA_ZN[liczba_znakow2]]=='-')&&(liczba_znakow2>0)&&(liczba_znakow2<liczba_znakowNAW))
                   {
                          SUM_SKL[lplmin]=atof(Edit1->Text.SubString(POJ_NA_ZN[liczba_znakow2],POJ_NA_ZN[liczba_znakow2+1]-POJ_NA_ZN[liczba_znakow2]).c_str());
                          lplmin++;
                   }
                   if((Edit1->Text[POJ_NA_ZN[liczba_znakow2]]=='-')&&(liczba_znakow2==liczba_znakowNAW-1))
                   {
                          SUM_SKL[lplmin]=atof(Edit1->Text.SubString(POJ_NA_ZN[liczba_znakow2],Edit1->Text.Length()-POJ_NA_ZN[liczba_znakow2]+1).c_str());
                          lplmin++;
                   }
                  liczba_znakow2++;
                  }
                  while(liczba_znakow2<liczba_znakowNAW);
                  int lplmin2=0;
                  int SUMAN=0;
                  do
                  {
                       SUMAN=SUMAN+SUM_SKL[lplmin2];
                       lplmin2++;
                  }
                  while(lplmin2<lplmin);
                  ShowMessage(SUMAN);
                  }
                  else
                  {
                  if(min!=0)
                  {
                         AnsiString NAPISPOJ=NAPIS.SubString(poz_naw1[0]+1,poz_naw2[0]-poz_naw1[0]-1);
                         ShowMessage(NAPISPOJ);
                         ShowMessage(SUMAGW);
                         int iterator_length=1;
                         int Poj_na_zn[100];
                         AnsiString minusnaw[100];
                         int il_zn=0;
                         int poj_na_min_naw[100];
                         int ilmin=0;
                         do
                         {
                           if(NAPISPOJ[iterator_length]=='+')
                           {
                           Poj_na_zn[il_zn]=iterator_length;
                           il_zn++;
                           }
                           if(NAPISPOJ[iterator_length]=='-')
                           {
                           Poj_na_zn[il_zn]=iterator_length;
                           il_zn++;
                           }
                           if(iterator_length<NAPISPOJ.Length()-1)
                           {
                           if((NAPISPOJ[iterator_length]=='-')&&(NAPISPOJ[iterator_length+1]=='('))
                           {
                           poj_na_min_naw[ilmin]=iterator_length+1;
                           ilmin++;
                           }
                           }
                           if(NAPISPOJ[iterator_length]=='/')
                           {
                           Poj_na_zn[il_zn]=iterator_length;
                           il_zn++;
                           }
                           if(NAPISPOJ[iterator_length]=='*')
                           {
                           Poj_na_zn[il_zn]=iterator_length;
                           il_zn++;
                           }
                          iterator_length++;
                         }
                         while(iterator_length<NAPISPOJ.Length());
                         int il_min2=0;
                         do
                         {
                         minusnaw[il_min2]=NAPISPOJ.SubString(poj_na_min_naw[il_min2]+1,poj_na_min_naw[il_min2+1]-poj_na_min_naw[il_min2]-1);
                         ShowMessage(minusnaw[il_min2]);
                         il_min2++;
                         }
                         while(il_min2<ilmin);
                         int iterator_NAPIS=1;
                         int il_nap2=0;
                         int Nalez=0;
                         int gw=0;
                             do
                             {
                                 if(NAPISPOJ[iterator_NAPIS]=='*')
                                 {
                                 Nalez=1;
                                 }
                              iterator_NAPIS++;
                              }
                              while(iterator_NAPIS<NAPISPOJ.Length());
                              iterator_NAPIS=1;
                              int ilgwiazdek=0;
                              int poj_na_gw[100];
                              do
                              {
                                if((Edit1->Text[iterator_NAPIS]=='*')&&(iterator_NAPIS>poz_naw2[0]))
                                 {
                                 poj_na_gw[ilgwiazdek]=iterator_NAPIS;
                                 ilgwiazdek++;
                                 gw=1;
                                 }
                                 iterator_NAPIS++;
                              }
                              while(iterator_NAPIS<Edit1->Text.Length());
                               if(gw==1)
                              {
                           int ilgwiazdek2=0;
                           int SUMAMNOZE=0;
                            do
                             {
                             if(Edit1->Text[poj_na_gw[ilgwiazdek2]]=='*')
                             {
                              if(ilgwiazdek2==0)
                               {
                               SUMAMNOZE=atof(Edit1->Text.SubString(poj_na_gw[ilgwiazdek2]+1,poj_na_gw[ilgwiazdek2+1]-poj_na_gw[ilgwiazdek2]-1).c_str());
                               }
                               else
                               {
                               if(ilgwiazdek2==ilgwiazdek-1)
                               {
                               SUMAMNOZE=SUMAMNOZE*atof(Edit1->Text.SubString(poj_na_gw[ilgwiazdek2]+1,Edit1->Text.Length()-poj_na_gw[ilgwiazdek2]).c_str());
                               }
                               else
                               {
                                  SUMAMNOZE=SUMAMNOZE*atof(Edit1->Text.SubString(poj_na_gw[ilgwiazdek2]+1,poj_na_gw[ilgwiazdek2+1]-poj_na_gw[ilgwiazdek2]-1).c_str());
                               }
                               }
                           }
                            ilgwiazdek2++;
                            }
                            while(ilgwiazdek2<ilgwiazdek);
                         int il_zn2=0;
                         int skl[100];
                         int ilplmin=0;
                         int sumamnozidz[100];
                         int il_summnoz=0;
                         int DODSUM=0;
                        int ilgwdz=0;
                        do
                         {
                              if((NAPISPOJ[Poj_na_zn[il_zn2]]=='+')&&(il_zn2==0))
                              {
                              skl[ilplmin]=atof(NAPISPOJ.SubString(0,Poj_na_zn[il_zn2]).c_str());
                              ilplmin++;
                              }
                              if((NAPISPOJ[Poj_na_zn[il_zn2]]=='+')&&(il_zn2>0)&&(il_zn2<il_zn))
                              {
                              skl[ilplmin]=atof(NAPISPOJ.SubString(Poj_na_zn[il_zn2-1]+1,Poj_na_zn[il_zn2]-Poj_na_zn[il_zn2-1]-1).c_str());
                              ilplmin++;
                              }
                              if((NAPISPOJ[Poj_na_zn[il_zn2]]=='+')&&(il_zn2==il_zn-1))
                              {
                              skl[ilplmin]=atof(NAPISPOJ.SubString(Poj_na_zn[il_zn2]+1,NAPISPOJ.Length()-Poj_na_zn[il_zn2]).c_str());
                              ilplmin++;
                              }
                              if((NAPISPOJ[Poj_na_zn[il_zn2]]=='-')&&(il_zn2>0)&&(il_zn2<il_zn))
                              {
                              skl[ilplmin]=atof(NAPISPOJ.SubString(Poj_na_zn[il_zn2],Poj_na_zn[il_zn2+1]-Poj_na_zn[il_zn2]).c_str());
                              ilplmin++;
                              }
                             if((NAPISPOJ[Poj_na_zn[il_zn2]]=='-')&&(il_zn2==il_zn-1))
                              {
                             skl[ilplmin]=atof(NAPISPOJ.SubString(Poj_na_zn[il_zn2],NAPISPOJ.Length()-Poj_na_zn[il_zn2]+1).c_str());
                             ilplmin++;
                              }
                             if((NAPISPOJ[Poj_na_zn[il_zn2]]=='*')&&(il_zn2==0))
                              {
                              sumamnozidz[il_summnoz]=atof(NAPISPOJ.SubString(0,Poj_na_zn[il_zn2]).c_str());
                             ilgwdz++;
                              }
                              if((NAPISPOJ[Poj_na_zn[il_zn2]]=='*')&&(ilgwdz!=0)&&(il_zn2>0))
                              {
                              sumamnozidz[il_summnoz]= sumamnozidz[il_summnoz]*atof(NAPISPOJ.SubString(Poj_na_zn[il_zn2]+1,Poj_na_zn[il_zn2+1]-Poj_na_zn[il_zn2]-1).c_str());
                             ilgwdz++;
                              }
                              if((NAPISPOJ[Poj_na_zn[il_zn2]]=='*')&&(ilgwdz==0)&&(il_zn2>0))
                              {
                             sumamnozidz[il_summnoz]=atof(NAPISPOJ.SubString(Poj_na_zn[il_zn2]+1,Poj_na_zn[il_zn2+1]-Poj_na_zn[il_zn2]-1).c_str());
                              ilgwdz++;
                              }
                             if((NAPISPOJ[Poj_na_zn[il_zn2]]=='*')&&(ilgwdz==0)&&(il_zn2==il_zn-1))
                              {
                              sumamnozidz[il_summnoz]=sumamnozidz[il_summnoz]*atof(NAPISPOJ.SubString(Poj_na_zn[il_zn2]+1,NAPISPOJ.Length()-Poj_na_zn[il_zn2]).c_str());
                              ilgwdz++;
                              }
                              if((NAPISPOJ[Poj_na_zn[il_zn2]]=='/')&&(il_zn2==0))
                              {
                              sumamnozidz[il_summnoz]=atof(NAPISPOJ.SubString(0,Poj_na_zn[il_zn2]).c_str());
                             ilgwdz++;
                             }
                              if((NAPISPOJ[Poj_na_zn[il_zn2]]=='/')&&(ilgwdz!=0)&&(il_zn2>0))
                              {
                              sumamnozidz[il_summnoz]= sumamnozidz[il_summnoz]/(atof(NAPISPOJ.SubString(Poj_na_zn[il_zn2]+1,Poj_na_zn[il_zn2+1]-Poj_na_zn[il_zn2]-1).c_str()));
                              ilgwdz++;
                              }
                              if((NAPISPOJ[Poj_na_zn[il_zn2]]=='/')&&(ilgwdz==0)&&(il_zn2==il_zn-1))
                              {
                              sumamnozidz[il_summnoz]= sumamnozidz[il_summnoz]/(atof(NAPISPOJ.SubString(Poj_na_zn[il_zn2]+1,NAPISPOJ.Length()-Poj_na_zn[il_zn2]-1).c_str()));
                              ilgwdz++;
                             }
                              if((NAPISPOJ[Poj_na_zn[il_zn2]]=='/')&&(ilgwdz==0)&&(il_zn2>0))
                              {
                             sumamnozidz[il_summnoz]=atof(NAPISPOJ.SubString(Poj_na_zn[il_zn2]+1,Poj_na_zn[il_zn2+1]-Poj_na_zn[il_zn2]-1).c_str());
                             ilgwdz++;
                              }
                              if(il_zn2>0)
                             {
                            if((NAPISPOJ[Poj_na_zn[il_zn2]]!='/')&&(NAPISPOJ[Poj_na_zn[il_zn2]]!='*')&&(NAPISPOJ[Poj_na_zn[il_zn2-1]]!='-')&&(NAPISPOJ[Poj_na_zn[il_zn2-1]]!='+'))
                              {
                              il_summnoz++;
                              ilgwdz=0;
                              }
                              }
                          il_zn2++;
                         }
                         while(il_zn2<il_zn);
                         int il_summnoz2=0;
                        int sumamnoz=0;
                         do
                         {
                            sumamnoz=sumamnoz+sumamnozidz[il_summnoz2];
                             il_summnoz2++;
                        }
                        while(il_summnoz2<=il_summnoz);
                        ShowMessage(sumamnoz);
                         int ilplmin2=0;
                         int SUMA=0;
                         do
                         {
                            SUMA=SUMA+skl[ilplmin2];
                            ilplmin2++;
                         }
                        while(ilplmin2<ilplmin);
                         if(SUMAMNOZE!=0)
                         {
                         ShowMessage((SUMA+DODSUM)*SUMAMNOZE);
                         }
                         else
                        {
                         ShowMessage(SUMA+DODSUM);
                         }
                         }
                     ShowMessage("LALka");
                }
                else
                {
                int skl_namn[100];
                int  il_min2=0;
                int ilskl=0;
                int iterator_naw3=0;
                do
                {
                if(iterator_naw3<iteratornaw2-1)
                {
                   if((NAPIS[poz_naw2[iterator_naw3]]==')')&&(NAPIS[poz_naw1[iterator_naw3+1]]=='('))
                   {
                   Napisy[iterator_naw3]=NAPIS.SubString(poz_naw2[iterator_naw3]+1,poz_naw1[iterator_naw3+1]-poz_naw2[iterator_naw3]-1);
                   il_nap++;
                   }
                }
                iterator_naw3++;
                }
                while(iterator_naw3<iteratornaw2);
                do
                {
                    if((NAPIS[poj_na_min[0]]=='*')&&(ilskl==0))
                    {
                    skl_namn[ilskl]=atof(NAPIS.SubString(0,poj_na_min[0]-1).c_str());
                    ilskl++;
                    }
                    if(il_min2<il_min-1)
                    {
                    if((NAPIS[poj_na_min[il_min2]]=='*')&&(NAPIS[poj_na_min[il_min2+1]]=='*'))
                    {
                    skl_namn[ilskl]=atof(NAPIS.SubString(poj_na_min[il_min2]+1,poj_na_min[il_min2+1]-poj_na_min[il_min2]-1).c_str());
                    ShowMessage(skl_namn[ilskl]);
                    ilskl++;
                    }
                    }
                    if(il_min>0)
                    {
                    if(NAPIS[poj_na_min[il_min-1]]=='*')
                    {
                    skl_namn[ilskl]=atof(NAPIS.SubString(poj_na_min[il_min2]+1,NAPIS.Length()-poj_na_min[il_min2]).c_str());
                    ShowMessage(skl_namn[ilskl]);
                    }
                    }
                 il_min2++;
               }
               while(il_min2<il_min);
               int SUMAGW=0;
               int il_skl2=0;
               if(il_min>0)
               {
               if(NAPIS[poj_na_min[il_min-1]]=='*')
               {
                    do
                    {
                    if(il_skl2==0)
                    {
                       SUMAGW=skl_namn[0];
                    }
                    else
                    {
                      SUMAGW=SUMAGW*skl_namn[il_skl2];
                    }
                    il_skl2++;
                    }
                    while(il_skl2<=ilskl);
               }
               }
               else
               {
                    do
                    {
                    if(il_skl2==0)
                    {
                    SUMAGW=skl_namn[0];
                    }
                    else
                    {
                    SUMAGW=SUMAGW*skl_namn[il_skl2];
                    }
                    il_skl2++;
                    }
                    while(il_skl2<ilskl);

                    int il_nap2=0;
                    int iterator_NAPIS=1;
                    AnsiString MNOZ[100];
                    do
                    {
                         do
                         {
                          if(Napisy[il_nap2][iterator_NAPIS]=='*')
                          {
                          MNOZ[il_nap2]="Mnozenie";
                          }
                         iterator_NAPIS++;
                         }
                         while(iterator_NAPIS<Napisy[il_nap2].Length());
                         if(iterator_NAPIS==Napisy[il_nap2].Length() )
                         {
                         iterator_NAPIS=1;
                         }
                         il_nap2++;
                    }
                    while(il_nap2<il_nap);
                    int pojemnik_na_znaki[100][100];
                    int iteratornaw3=0;
                    if((iteratornaw1!=0)&&(iteratornaw2!=0))
                    {
                    if(iteratornaw1==iteratornaw2)
                    {
                    int pojemnik_na_znakidod[100];

                    if(illanc==0)
                    {
                     lancuchy[iteratornaw3]=NAPIS.SubString(poz_naw1[iteratornaw3]+1,poz_naw2[iteratornaw3]-poz_naw1[iteratornaw3]-1);

                    }
                    else
                    {

                    }
                    }
             iteratornaw3++;
             }
             while(iteratornaw3<iteratornaw2);
             NAPIS=NAPIS.SubString(poz_naw1[0],poz_naw2[iteratornaw2-1]);
             napisponaw=Edit1->Text.SubString(poz_naw2[iteratornaw2-1]+2,Edit1->Text.Length()-poz_naw2[iteratornaw2-1]-1);
             iteratornaw3=0;
             int lengthnap=1;
             int poj_na_ZN[50][50];
             int il_zn2=0;
             int il_ilzn2[100];
             do
             {
               do
               {
                 if(iteratornaw3<iteratornaw2)
                 {
                if(lancuchy[iteratornaw3][lengthnap]=='+')
                 {
                   poj_na_ZN[iteratornaw3][il_zn2]=lengthnap;
                   il_zn2++;

                 }
                 if(lancuchy[iteratornaw3][lengthnap]=='*')
                 {



                 }
                 if(lancuchy[iteratornaw3][lengthnap]=='/')
                 {




                 }
                 if(lancuchy[iteratornaw3][lengthnap]=='-')
                 {



                 }
                 }
               lengthnap++;
               }
               while(lengthnap<lancuchy[iteratornaw3].Length());
               if(lengthnap==lancuchy[iteratornaw3].Length())
               {
                 il_ilzn2[iteratornaw3]=il_zn2;
                 il_zn2=0;
                 lengthnap=1;

               }
             iteratornaw3++;
             }
             while(iteratornaw3<iteratornaw2);
             int poj_na_skl[50][50];
             iteratornaw3=0;
             il_zn2=0;
             int LENGTH[100];
             do
             {
              do
             {
                  if(il_zn2==0)
                  {
                    poj_na_skl[iteratornaw3][il_zn2]=atoi(lancuchy[iteratornaw3].SubString(0,poj_na_ZN[iteratornaw3][il_zn2]-1).c_str());
                  }
                  if((il_zn2==il_ilzn2[iteratornaw3]-1)&&(il_zn2==0))
                  {
                   LENGTH[iteratornaw3]=atoi(lancuchy[iteratornaw3].SubString(poj_na_ZN[iteratornaw3][il_zn2]+1,lancuchy[iteratornaw3].Length()-poj_na_ZN[iteratornaw3][il_zn2]).c_str());

                 }








              il_zn2++;
              }
              while(il_zn2<il_ilzn2[iteratornaw3]);
              if(il_zn2==il_ilzn2[iteratornaw3])
              {
               il_zn2=0;

              }




            iteratornaw3++;
            }
             while(iteratornaw3<iteratornaw2);
             iteratornaw3=0;
             il_zn2=0;
             int sumy_skl[100];
             do
             {
               do
               {
                  sumy_skl[iteratornaw3]=sumy_skl[iteratornaw3]+poj_na_skl[iteratornaw3][il_zn2]+LENGTH[iteratornaw3];
                  ShowMessage(sumy_skl[iteratornaw3]);



               il_zn2++;
               }
               while(il_zn2<il_ilzn2[iteratornaw3]);
               if(il_zn2==il_ilzn2[iteratornaw3])
               {
               il_zn2=0;

               }
              iteratornaw3++;
             }
             while(iteratornaw3<iteratornaw2);
             int ilnawias=0;
             int ilnawMN2=0;
             int SUMY[100];
             int ilnawias2=0;
             do
             {
                do
                {
                  if(ilnawias!=0)
                  {
                  SUMY[ilnawMN2]=SUMY[ilnawMN2]*sumy_skl[ilnawias2];
                  }
                  else
                  {
                   SUMY[ilnawMN2]=sumy_skl[ilnawias2];
                  }

                ilnawias++;
                ilnawias2++;
                }
                while(ilnawias<poj_na_ilnawmnoz[ilnawMN2]);
                if(ilnawias==poj_na_ilnawmnoz[ilnawMN2])
                {
                   ilnawias=0;


                }
                ilnawMN2++;
              }
              while(ilnawMN2<ilnawMN);

             //    ShowMessage(SUMY[0]);
             //    ShowMessage(SUMY[1]);
                  ilnawMN2=0;
                 int SUMA=0;
                 do
                 {
                  if(ilnawMN2==0)
                  {
                  SUMA=SUMY[ilnawMN2];
                  }
                  if(ilnawMN2!=0)
                  {
                     SUMA=SUMA+SUMY[ilnawMN2];
                  }



                 ilnawMN2++;
                 }
                 while(ilnawMN2<ilnawMN);
                 int lengthnapponaw=1;
                 int ilpl=0;
                 do
                 {
                 if(napisponaw[lengthnapponaw]=='+')
                 {
                  ilpl++;

                 }


                 lengthnapponaw++;
                 }
                 while(lengthnapponaw<napisponaw.Length());
                    ShowMessage(SUMA);

                    if(ilpl==0)
                    {
                     ShowMessage(SUMA+atoi(napisponaw.c_str())+napispocz+napisws);

                    }





             ShowMessage(napisponaw);
             }
             if(napisponaw=="")
             {
             iteratornaw2=0;
             AnsiString napisywb[100];
             int sumamnozidz[100];
             do
             {
             sumamnidz[iteratornaw2][iterator_sumidz]=1;
             iterator_sumidz++;
             }
             while(iterator_sumidz<100);
             do
             {
             poj_na_od[iteratornaw2][iteratorgp]=1;
             iteratorgp++;
             }
             while(iteratorgp<=300);
             do
             {
             poczatekop[iteratornaw2][iteratorop]=1;
             iteratorop++;
             }
             while(iteratorop<=200);
             int POJ_NA_ZN[100];
             liczba_znakow=0;
             iterator_dlugosc=1;
             iteratornaw2=0;
             do
             {
             do
             {

             if(lancuchy[iteratornaw2][iterator_dlugosc]=='*')
             {
             pojemnik_na_znaki[iteratornaw2][liczba_znakow]=iterator_dlugosc;
             liczba_znakow++;
             }
             if(lancuchy[iteratornaw2][iterator_dlugosc]=='-')
             {
             pojemnik_na_znaki[iteratornaw2][liczba_znakow]=iterator_dlugosc;
             liczba_znakow++;
             }
             if(lancuchy[iteratornaw2][iterator_dlugosc]=='/')
             {
             pojemnik_na_znaki[iteratornaw2][liczba_znakow]=iterator_dlugosc;
             liczba_znakow++;
             }
             if(lancuchy[iteratornaw2][iterator_dlugosc]=='+')
             {
             pojemnik_na_znaki[iteratornaw2][liczba_znakow]=iterator_dlugosc;
             liczba_znakow++;
             }
             if(lancuchy[iteratornaw2][iterator_dlugosc]=='/')
             {

             }

             iterator_dlugosc++;
             }
             while(iterator_dlugosc<lancuchy[iteratornaw2].Length());
             if(iterator_dlugosc==lancuchy[iteratornaw2].Length())
             {
             IL_ZN[iteratornaw2]=liczba_znakow;
             liczba_znakow=0;
             iterator_dlugosc=1;
             }
             iteratornaw2++;
             }
             while(iteratornaw2<iteratornaw3);
             int liczba_znakow2=0;
             iteratornaw2=0;
             int iteratorGWD=1;
             do
             {
             if(IL_ZN[iteratornaw2]!=0)
             {
             do
             {
                if((iteratorgdz2==1)&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2]]=='*')&&(iteratorGWD==1))
                {
                sumamnidz[iteratornaw2][iteratorgdz2]=atof(lancuchy[iteratornaw2].SubString(0,pojemnik_na_znaki[iteratornaw2][liczba_znakow2]).c_str())*atof(lancuchy[iteratornaw2].SubString(pojemnik_na_znaki[iteratornaw2][liczba_znakow2]+1,pojemnik_na_znaki[iteratornaw2][liczba_znakow2+1]-pojemnik_na_znaki[iteratornaw2][liczba_znakow2]-1).c_str());
                }
                if((iteratorgdz2==1)&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2]]=='/')&&(iteratorGWD==1))
                {
                sumamnidz[iteratornaw2][iteratorgdz2]=atof(lancuchy[iteratornaw2].SubString(0,pojemnik_na_znaki[iteratornaw2][liczba_znakow2]).c_str())/(atof(lancuchy[iteratornaw2].SubString(pojemnik_na_znaki[iteratornaw2][liczba_znakow2]+1,pojemnik_na_znaki[iteratornaw2][liczba_znakow2+1]-pojemnik_na_znaki[iteratornaw2][liczba_znakow2]-1).c_str()));
                }
                if(liczba_znakow2>1)
                {
                if((iteratorGWD==1)&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2]]=='*')&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]]!='*')&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]]!='/'))
                {
                sumamnidz[iteratornaw2][iteratorgdz2]=atof(lancuchy[iteratornaw2].SubString(pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]+1,pojemnik_na_znaki[iteratornaw2][liczba_znakow2]-pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]-1).c_str())*atof(lancuchy[iteratornaw2].SubString(pojemnik_na_znaki[iteratornaw2][liczba_znakow2]+1,pojemnik_na_znaki[iteratornaw2][liczba_znakow2+1]-pojemnik_na_znaki[iteratornaw2][liczba_znakow2]-1).c_str());
                ShowMessage(sumamnidz[iteratornaw2][iteratorgdz2]);
                }
                }
                if(liczba_znakow2>1)
                {
                if((iteratorGWD==1)&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2]]=='/')&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]]!='*')&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]]!='/'))
                {
                sumamnidz[iteratornaw2][iteratorgdz2]=atof(lancuchy[iteratornaw2].SubString(pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]+1,pojemnik_na_znaki[iteratornaw2][liczba_znakow2]-pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]-1).c_str())/atof(lancuchy[iteratornaw2].SubString(pojemnik_na_znaki[iteratornaw2][liczba_znakow2]+1,pojemnik_na_znaki[iteratornaw2][liczba_znakow2+1]-pojemnik_na_znaki[iteratornaw2][liczba_znakow2]-1).c_str());
                }
                }
                if(liczba_znakow2>1)
                {
                if((liczba_znakow2<liczba_znakow-1)&&(iteratorGWD>1)&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2]]=='*')&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]]!='+')&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]]!='-'))
                {
                sumamnidz[iteratornaw2][iteratorgdz2]=sumamnidz[iteratornaw2][iteratorgdz2]*atof(lancuchy[iteratornaw2].SubString(pojemnik_na_znaki[iteratornaw2][liczba_znakow2]+1,pojemnik_na_znaki[iteratornaw2][liczba_znakow2+1]-pojemnik_na_znaki[iteratornaw2][liczba_znakow2]-1).c_str());
                }
                if((liczba_znakow2<liczba_znakow-1)&&(iteratorGWD>1)&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2]]=='/')&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]]!='+')&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]]!='-'))
                {
                sumamnidz[iteratornaw2][iteratorgdz2]=sumamnidz[iteratornaw2][iteratorgdz2]/atof(lancuchy[iteratornaw2].SubString(pojemnik_na_znaki[iteratornaw2][liczba_znakow2]+1,pojemnik_na_znaki[iteratornaw2][liczba_znakow2+1]-pojemnik_na_znaki[iteratornaw2][liczba_znakow2]-1).c_str());
                }
                if(liczba_znakow2>1)
                {
                if((liczba_znakow2>1)&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]]!='-')&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]]!='+')&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2]]!='*')&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2]]!='/'))
                {
             ShowMessage(sumamnidz[iteratornaw2][iteratorgdz2]);
             sumy_mnozenia_i_dzielenia[iteratornaw2]=sumy_mnozenia_i_dzielenia[iteratornaw2]+sumamnidz[iteratornaw2][iteratorgdz2];
             iteratorGWD=1;
             iteratorgdz2++;
             }

             }
             if(liczba_znakow2==liczba_znakow-1)
             {
             ShowMessage(sumamnidz[iteratornaw2][iteratorgdz2]);
             sumamnidz[iteratornaw2][iteratorgdz2]=sumamnidz[iteratornaw2][iteratorgdz2]*atof(lancuchy[iteratornaw2].SubString(pojemnik_na_znaki[iteratornaw2][liczba_znakow2]+1,lancuchy[iteratornaw2].Length()-pojemnik_na_znaki[iteratornaw2][liczba_znakow2]).c_str());
             ShowMessage(lancuchy[iteratornaw2].SubString(pojemnik_na_znaki[iteratornaw2][liczba_znakow2]+1,lancuchy[iteratornaw2].Length()-pojemnik_na_znaki[iteratornaw2][liczba_znakow2]));
             }
             if(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2]]=='*')
             {
             iteratorGWD++;
             }
             if(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2]]=='/')
             {
             iteratorGWD++;
             }
     liczba_znakow2++;
     }
     while(liczba_znakow2<IL_ZN[iteratornaw2]);

     if(liczba_znakow2==IL_ZN[iteratornaw2])
     {
     if(liczba_znakow2>1)
     {
          if(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]]=='*')
          {
            sumy_mnozenia_i_dzielenia[iteratornaw2]=sumy_mnozenia_i_dzielenia[iteratornaw2]+sumamnidz[iteratornaw2][iteratorgdz2];
          }

          iteratorGWD=1;

          iterator_dlugosc=1;
          liczba_znakow=0;
          liczba_znakow2=0;
          iteratorop2=1;
          iteratorgdz2=1;
          }
          iteratornaw2++;
          }
     }
     while(iteratornaw2<iteratornaw3);
    }
    else
    {
      iterator_dlugosc=1;
      int liczba_znakow=0;
      int iteratornaw2=0;
      do
      {
      do
      {
      if(lancuchy[iteratornaw2][iterator_dlugosc]=='*')
      {
          pojemnik_na_znaki[iteratornaw2][liczba_znakow]=iterator_dlugosc;
          liczba_znakow++;
      }
      if(lancuchy[iteratornaw2][iterator_dlugosc]=='-')
      {
          pojemnik_na_znaki[iteratornaw2][liczba_znakow]=iterator_dlugosc;
          liczba_znakow++;
      }
      if(lancuchy[iteratornaw2][iterator_dlugosc]=='/')
      {
          pojemnik_na_znaki[iteratornaw2][liczba_znakow]=iterator_dlugosc;
          liczba_znakow++;
      }
     if(lancuchy[iteratornaw2][iterator_dlugosc]=='+')
     {
          pojemnik_na_znaki[iteratornaw2][liczba_znakow]=iterator_dlugosc;
          liczba_znakow++;
     }
     if(lancuchy[iteratornaw2][iterator_dlugosc]=='/')
     {

     }
     iterator_dlugosc++;
     }
     while(iterator_dlugosc<lancuchy[iteratornaw2].Length());
     if(iterator_dlugosc==lancuchy[iteratornaw2].Length())
     {
     IL_ZN[iteratornaw2]=liczba_znakow;
     liczba_znakow=0;
     iterator_dlugosc=1;
     }
     iteratornaw2++;
   }
   while(iteratornaw2<iteratornaw3);
   int iterator_napisponaw=1;
   int pojEM_na_znaki[100];
   int liczba_Znak=0;
        do
        {
           if(napisponaw[iterator_napisponaw]=='+')
           {
           pojEM_na_znaki[liczba_Znak]=iterator_napisponaw;
           liczba_Znak++;
           }
           if(napisponaw[iterator_napisponaw]=='/')
           {
           pojEM_na_znaki[liczba_Znak]=iterator_napisponaw;
           liczba_Znak++;
           }
           if(napisponaw[iterator_napisponaw]=='-')
           {
           pojEM_na_znaki[liczba_Znak]=iterator_napisponaw;
           liczba_Znak++;
           }
           if(napisponaw[iterator_napisponaw]=='*')
           {
           pojEM_na_znaki[liczba_Znak]=iterator_napisponaw;
           liczba_Znak++;
           }
          iterator_napisponaw++;
         }
         while(iterator_napisponaw<napisponaw.Length());
         int liczba_Znak2=0;
         int SKL[100];
         int Ilplmin=0;
         do
         {
                  if((napisponaw[pojEM_na_znaki[liczba_Znak2]]=='+')&&(liczba_Znak2==0))
                  {
                  SKL[Ilplmin]=atof(napisponaw.SubString(0,pojEM_na_znaki[liczba_Znak2]-1).c_str());
                  Ilplmin++;
                  }
                  if((napisponaw[pojEM_na_znaki[liczba_Znak2]]=='+')&&(liczba_Znak2>0)&&(liczba_Znak2<liczba_Znak))
                  {
                  SKL[Ilplmin]=atof(napisponaw.SubString(pojEM_na_znaki[liczba_Znak2-1]+1,pojEM_na_znaki[liczba_Znak2]-pojEM_na_znaki[liczba_Znak2-1]-1).c_str());
                  Ilplmin++;
                  }
                  if((napisponaw[pojEM_na_znaki[liczba_Znak2]]=='+')&&(liczba_Znak2==liczba_Znak-1))
                  {
                  SKL[Ilplmin]=atof(napisponaw.SubString(pojEM_na_znaki[liczba_Znak2]+1,napisponaw.Length()-pojEM_na_znaki[liczba_Znak2]).c_str());
                  Ilplmin++;
                  }
                  if((napisponaw[pojEM_na_znaki[liczba_Znak2]]=='-')&&(liczba_Znak2>0)&&(liczba_Znak2<liczba_Znak))
                  {
                  SKL[Ilplmin]=atof(napisponaw.SubString(pojEM_na_znaki[liczba_Znak2],pojEM_na_znaki[liczba_Znak2+1]-pojEM_na_znaki[liczba_Znak2]).c_str());
                  Ilplmin++;
                  }
                  if((napisponaw[pojEM_na_znaki[liczba_Znak2]]=='-')&&(liczba_Znak2==liczba_Znak-1))
                  {
                  SKL[Ilplmin]=atof(napisponaw.SubString(pojEM_na_znaki[liczba_Znak2],napisponaw.Length()-pojEM_na_znaki[liczba_Znak2]+1).c_str());
                  Ilplmin++;
                  }

          liczba_Znak2++;
         }
         while(liczba_Znak2<liczba_Znak);
         int Ilplmin2=0;
         do
         {
         Suma_skl=Suma_skl+SKL[Ilplmin2];
         Ilplmin2++;
         }
        while(Ilplmin2<Ilplmin);

   iteratornaw2=1;
   iterator_dlugosc=1;
   int liczba_znakowite=1;
   do
   {
       iteratornaw2++;
   }
   while(iteratornaw2<iteratornaw3);
   int drugiiteratornaw2=0;
   int liczba_znakowEX=0;
   int LENGTH[100];
   do
   {
                 if(IL_ZN[drugiiteratornaw2]!=0)
                 {
                 do
                 {
                 if(liczba_znakowEX< IL_ZN[drugiiteratornaw2])
                 {
                 if((liczba_znakowEX==0)&&(lancuchy[drugiiteratornaw2][pojemnik_na_znaki[drugiiteratornaw2][liczba_znakowEX]]!='/')&&(lancuchy[drugiiteratornaw2][pojemnik_na_znaki[drugiiteratornaw2][liczba_znakowEX]]!='*'))
                 {
                     sumy[drugiiteratornaw2]=sumy[drugiiteratornaw2]+atof(lancuchy[drugiiteratornaw2].SubString(0,pojemnik_na_znaki[drugiiteratornaw2][0]-1).c_str());
                 }
                 }
                 if(liczba_znakowEX< IL_ZN[drugiiteratornaw2]-1)
                 {
                 if ((IL_ZN[drugiiteratornaw2]!=1)&&(liczba_znakowEX==0)&&(lancuchy[drugiiteratornaw2][pojemnik_na_znaki[drugiiteratornaw2][liczba_znakowEX+1]]!='/')&&(lancuchy[drugiiteratornaw2][pojemnik_na_znaki[drugiiteratornaw2][liczba_znakowEX+1]]!='*'))
                 {
                    DODSUMA[drugiiteratornaw2]=atof(lancuchy[drugiiteratornaw2].SubString(pojemnik_na_znaki[drugiiteratornaw2][0]+1,pojemnik_na_znaki[drugiiteratornaw2][1]-pojemnik_na_znaki[drugiiteratornaw2][0]-1).c_str());
                 }
                 }
                 if(liczba_znakowEX< IL_ZN[drugiiteratornaw2]-1)
                 {
                 if((liczba_znakowEX>0)&&(lancuchy[drugiiteratornaw2][pojemnik_na_znaki[drugiiteratornaw2][liczba_znakowEX]]=='+')&&(lancuchy[drugiiteratornaw2][pojemnik_na_znaki[drugiiteratornaw2][liczba_znakowEX+1]]!='*')&&(lancuchy[drugiiteratornaw2][pojemnik_na_znaki[drugiiteratornaw2][liczba_znakowEX+1]]!='/'))
                 {
                     sumy[drugiiteratornaw2]=sumy[drugiiteratornaw2]+atof(lancuchy[drugiiteratornaw2].SubString(pojemnik_na_znaki[drugiiteratornaw2][liczba_znakowEX]+1,pojemnik_na_znaki[drugiiteratornaw2][liczba_znakowEX+1]-pojemnik_na_znaki[drugiiteratornaw2][liczba_znakowEX]).c_str());
                 }
                 }
              //   LENGTH[drugiiteratornaw2]=atof(lancuchy[drugiiteratornaw2].SubString(pojemnik_na_znaki[drugiiteratornaw2][poj_na_znaki[drugiiteratornaw2]-1]+1,lancuchy[drugiiteratornaw2].Length()-pojemnik_na_znaki[drugiiteratornaw2][poj_na_znaki[drugiiteratornaw2]-1]).c_str());
             //    if(liczba_znakowEX< IL_ZN[drugiiteratornaw2]-1)
             //    {
             //    if(lancuchy[drugiiteratornaw2][pojemnik_na_znaki[drugiiteratornaw2][liczba_znakowEX]]=='+')
            //     {
            //
            //     }
           //      }
            //     if((liczba_znakowEX>1)&&(liczba_znak[drugiiteratornaw2]<poj_na_znaki[drugiiteratornaw2])&&(lancuchy[drugiiteratornaw2][pojemnik_na_znaki[drugiiteratornaw2][liczba_znakowEX]]=='-'))
             //    {
            //          sumy[drugiiteratornaw2]=sumy[drugiiteratornaw2]+atof(lancuchy[drugiiteratornaw2].SubString(pojemnik_na_znaki[drugiiteratornaw2][liczba_znak[drugiiteratornaw2]],pojemnik_na_znaki[drugiiteratornaw2][liczba_znak[drugiiteratornaw2]+1]-pojemnik_na_znaki[iteratornaw2][liczba_znak[drugiiteratornaw2]]+1).c_str());
           //      }
             //    if((liczba_znakowEX==poj_na_znaki[drugiiteratornaw2]-1)&&(lancuchy[drugiiteratornaw2][pojemnik_na_znaki[drugiiteratornaw2][liczba_znakowEX]]=='-'))
               //  {
             //         sumy[drugiiteratornaw2]=sumy[drugiiteratornaw2]+atof(lancuchy[drugiiteratornaw2].SubString(pojemnik_na_znaki[drugiiteratornaw2][liczba_znak[drugiiteratornaw2]],lancuchy[drugiiteratornaw2].Length()-pojemnik_na_znaki[drugiiteratornaw2][liczba_znak[drugiiteratornaw2]]+1).c_str());
              //   }
                 liczba_znakowEX++;
                 }
                 while(liczba_znakowEX< IL_ZN[drugiiteratornaw2]);
                 }
                 else
                 {
                 sumy_nawiasow[drugiiteratornaw2]=atoi(lancuchy[drugiiteratornaw2].c_str());
                 }
                 if(liczba_znakowEX== IL_ZN[drugiiteratornaw2])
                 {
                 liczba_znakowEX=0;
                 }
                 if(IL_ZN[drugiiteratornaw2]!=0)
                 {
                 sumy_nawiasow[drugiiteratornaw2]=sumy[drugiiteratornaw2]+sumy_mnozenia_i_dzielenia[drugiiteratornaw2]+DODSUMA[drugiiteratornaw2]+LENGTH[drugiiteratornaw2];
                 }
                 drugiiteratornaw2++;
   }
   while(drugiiteratornaw2<iteratornaw2);

   iteratornaw2=0;
   int il_nap3=0;
   do
   {
       if(MNOZ[il_nap3]=="Mnozenie")
       {
       sumawsz=sumy_nawiasow[il_nap3+1]*sumy_nawiasow[il_nap3];
       }
       else
       {
       if(MNOZ[il_nap3]=="Mnozenie")
       {
       sumawsz=sumawsz*sumy_nawiasow[il_nap3+1];
       }
       }
    il_nap3++;
   }
   while(il_nap3<il_nap2);
   do
   {
   if(iteratornaw2==0)
   {
        if(Operacje[iteratornaw2]=="Mnozenie")
        {
        sumawsz=sumy_nawiasow[iteratornaw2+1]*sumy_nawiasow[iteratornaw2];
        }
        if(Operacje[iteratornaw2]=="Dzielenie")
        {
        sumawsz=sumy_nawiasow[iteratornaw2+1]/sumy_nawiasow[iteratornaw2];
        }
        if(Operacje[iteratornaw2]=="Dodawanie")
        {
        sumawsz=sumy_nawiasow[iteratornaw2+1]+sumy_nawiasow[iteratornaw2];
        }
        if(Operacje[iteratornaw2]=="Odejmowanie")
        {
        sumawsz=sumy_nawiasow[iteratornaw2+1]-sumy_nawiasow[iteratornaw2];
        }
        }
        else
        {
        if(Operacje[iteratornaw2]=="Odejmowanie")
        {
        sumawsz=sumawsz-sumy_nawiasow[iteratornaw2+1];
        }
        if(Operacje[iteratornaw2]=="Dodawanie")
        {
        sumawsz=sumawsz+sumy_nawiasow[iteratornaw2+1];
        }
        if(Operacje[iteratornaw2]=="Dzielenie")
        {
        sumawsz=sumawsz/sumy_nawiasow[iteratornaw2+1];
        }
        if(Operacje[iteratornaw2]=="Mnozenie")
        {
        sumawsz=sumawsz*sumy_nawiasow[iteratornaw2+1];
        }
        }
        iteratornaw2++;
       }
       while(iteratornaw2<iterator_znaki);
       ShowMessage(sumawsz+Suma_skl);
             }
              }


              }

             }
             }
             else
             {
             int iterator_length_napis=1;
             int lz=0;
             int pojem_na_znaki[100];
             do
             {
                if(napisponaw[iterator_length_napis]=='+')
                {
                   pojem_na_znaki[lz]=iterator_length_napis;
                   lz++;
                }
                 if(napisponaw[iterator_length_napis]=='-')
                {
                     pojem_na_znaki[lz]=iterator_length_napis;
                     lz++;
                }
                if(napisponaw[iterator_length_napis]=='*')
                {
                      pojem_na_znaki[lz]=iterator_length_napis;
                      lz++;
                }
                 if(napisponaw[iterator_length_napis]=='/')
                {
                    pojem_na_znaki[lz]=iterator_length_napis;
                    lz++;
                }
               iterator_length_napis++;
             }
             while(iterator_length_napis<napisponaw.Length());
             int suma_skl[100];
             int lz2=0;
             int ilplmin=0;
             do
             {
                 if((napisponaw[pojem_na_znaki[lz2]]=='+')&&(lz2==0))
                 {
                    suma_skl[ilplmin]=atof(napisponaw.SubString(0,pojem_na_znaki[lz2]).c_str());
                    ilplmin++;
                 }
                 if((napisponaw[pojem_na_znaki[lz2]]=='+')&&(lz2>0)&&(lz2<lz))
                 {
                     suma_skl[ilplmin]=atof(napisponaw.SubString(pojem_na_znaki[lz2]+1,pojem_na_znaki[lz2+1]-pojem_na_znaki[lz2]-1).c_str());
                     ilplmin++;
                 }
                 if((napisponaw[pojem_na_znaki[lz2]]=='+')&&(lz2==lz-1))
                 {
                     suma_skl[ilplmin]=atof(napisponaw.SubString(pojem_na_znaki[lz2]+1,napisponaw.Length()-pojem_na_znaki[lz2]).c_str());
                     ilplmin++;
                 }
                 if((napisponaw[pojem_na_znaki[lz2]]=='-')&&(lz2>0)&&(lz2<lz))
                 {
                     suma_skl[ilplmin]=atof(napisponaw.SubString(pojem_na_znaki[lz2],pojem_na_znaki[lz2+1]-pojem_na_znaki[lz2]).c_str());
                     ilplmin++;
                 }
                 if((napisponaw[pojem_na_znaki[lz2]]=='-')&&(lz2==lz-1))
                 {
                     suma_skl[ilplmin]=atof(napisponaw.SubString(pojem_na_znaki[lz2],napisponaw.Length()-pojem_na_znaki[lz2]+1).c_str());
                     ilplmin++;
                 }
               lz2++;
             }
             while(lz2<lz);
             int ilplmin2=0;
             do
             {
                suma=suma+suma_skl[ilplmin2];
                ilplmin2++;
             }
             while(ilplmin2<ilplmin);
             ShowMessage(suma);
     iteratornaw2=0;
     AnsiString poj_nagid[100][100];
     iterator_dlugosc=1;
     int poj_na_od[100][100];
     int poj_na_znaki[100];
     int iteratorgp=1;
     int iteratorgd=1;
     int poczatekop[100][100];
     int iteratorop=1;
     int iteratorop2=1;
     int iteratorgdz2=1;
     int iterator_sumidz=1;
     int sumamnidz[100][100];
     AnsiString napisywb[100];
     int sumamnozidz[100];
     do
     {
        sumamnidz[iteratornaw2][iterator_sumidz]=1;
        iterator_sumidz++;
     }
     while(iterator_sumidz<100);
     do
     {
        poj_na_od[iteratornaw2][iteratorgp]=1;
        iteratorgp++;
     }
     while(iteratorgp<=300);
     do
     {
         poczatekop[iteratornaw2][iteratorop]=1;
         iteratorop++;
     }
     while(iteratorop<=200);
     if(IL_ZN[iteratornaw2]!=0)
     {
     do
     {
     do
     {
     if(lancuchy[iteratornaw2][iterator_dlugosc]=='*')
     {
          pojemnik_na_znaki[iteratornaw2][liczba_znakow]=iterator_dlugosc;
          liczba_znakow++;
     }
     if(lancuchy[iteratornaw2][iterator_dlugosc]=='-')
     {
          pojemnik_na_znaki[iteratornaw2][liczba_znakow]=iterator_dlugosc;
          liczba_znakow++;
     }
     if(lancuchy[iteratornaw2][iterator_dlugosc]=='/')
     {
          pojemnik_na_znaki[iteratornaw2][liczba_znakow]=iterator_dlugosc;
          liczba_znakow++;
     }
     if(lancuchy[iteratornaw2][iterator_dlugosc]=='+')
     {
          pojemnik_na_znaki[iteratornaw2][liczba_znakow]=iterator_dlugosc;
          liczba_znakow++;
     }
     if(lancuchy[iteratornaw2][iterator_dlugosc]=='/')
     {
          poj_na_od[iteratornaw2][iteratorgd]++;
     }
     iterator_dlugosc++;
     }
     while(iterator_dlugosc<lancuchy[iteratornaw2].Length());
     int liczba_znakow2=1;
     int iteratorGWD=1;
     do
     {
     if((iteratorgdz2==1)&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2]]=='*')&&(iteratorGWD==1))
     {
         sumamnidz[iteratornaw2][iteratorgdz2]=atof(lancuchy[iteratornaw2].SubString(0,pojemnik_na_znaki[iteratornaw2][liczba_znakow2]).c_str())*atof(lancuchy[iteratornaw2].SubString(pojemnik_na_znaki[iteratornaw2][liczba_znakow2]+1,pojemnik_na_znaki[iteratornaw2][liczba_znakow2+1]-pojemnik_na_znaki[iteratornaw2][liczba_znakow2]-1).c_str());
     }
     if((iteratorgdz2==1)&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2]]=='/')&&(iteratorGWD==1))
     {
        sumamnidz[iteratornaw2][iteratorgdz2]=atof(lancuchy[iteratornaw2].SubString(0,pojemnik_na_znaki[iteratornaw2][liczba_znakow2]).c_str())/(atof(lancuchy[iteratornaw2].SubString(pojemnik_na_znaki[iteratornaw2][liczba_znakow2]+1,pojemnik_na_znaki[iteratornaw2][liczba_znakow2+1]-pojemnik_na_znaki[iteratornaw2][liczba_znakow2]-1).c_str()));
     }
     if(liczba_znakow2>1)
     {
     if((iteratorGWD==1)&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2]]=='*')&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]]!='*')&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]]!='/'))
     {
         sumamnidz[iteratornaw2][iteratorgdz2]=atof(lancuchy[iteratornaw2].SubString(pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]+1,pojemnik_na_znaki[iteratornaw2][liczba_znakow2]-pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]-1).c_str())*atof(lancuchy[iteratornaw2].SubString(pojemnik_na_znaki[iteratornaw2][liczba_znakow2]+1,pojemnik_na_znaki[iteratornaw2][liczba_znakow2+1]-pojemnik_na_znaki[iteratornaw2][liczba_znakow2]-1).c_str());
         ShowMessage(sumamnidz[iteratornaw2][iteratorgdz2]);
     }
     }
     if(liczba_znakow2>1)
     {
     if((iteratorGWD==1)&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2]]=='/')&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]]!='*')&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]]!='/'))
     {
          sumamnidz[iteratornaw2][iteratorgdz2]=atof(lancuchy[iteratornaw2].SubString(pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]+1,pojemnik_na_znaki[iteratornaw2][liczba_znakow2]-pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]-1).c_str())/atof(lancuchy[iteratornaw2].SubString(pojemnik_na_znaki[iteratornaw2][liczba_znakow2]+1,pojemnik_na_znaki[iteratornaw2][liczba_znakow2+1]-pojemnik_na_znaki[iteratornaw2][liczba_znakow2]-1).c_str());
     }
     }
     if((liczba_znakow2<liczba_znakow-1)&&(iteratorGWD>1)&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2]]=='*')&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]]!='+')&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]]!='-'))
     {
          sumamnidz[iteratornaw2][iteratorgdz2]=sumamnidz[iteratornaw2][iteratorgdz2]*atof(lancuchy[iteratornaw2].SubString(pojemnik_na_znaki[iteratornaw2][liczba_znakow2]+1,pojemnik_na_znaki[iteratornaw2][liczba_znakow2+1]-pojemnik_na_znaki[iteratornaw2][liczba_znakow2]-1).c_str());
     }
     if((liczba_znakow2<liczba_znakow-1)&&(iteratorGWD>1)&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2]]=='/')&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]]!='+')&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]]!='-'))
     {
          sumamnidz[iteratornaw2][iteratorgdz2]=sumamnidz[iteratornaw2][iteratorgdz2]/atof(lancuchy[iteratornaw2].SubString(pojemnik_na_znaki[iteratornaw2][liczba_znakow2]+1,pojemnik_na_znaki[iteratornaw2][liczba_znakow2+1]-pojemnik_na_znaki[iteratornaw2][liczba_znakow2]-1).c_str());
     }
     if((liczba_znakow2>1)&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]]!='-')&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]]!='+')&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2]]!='*')&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2]]!='/'))
     {
          ShowMessage(sumamnidz[iteratornaw2][iteratorgdz2]);
          sumy_mnozenia_i_dzielenia[iteratornaw2]=sumy_mnozenia_i_dzielenia[iteratornaw2]+sumamnidz[iteratornaw2][iteratorgdz2];
          iteratorGWD=1;
          iteratorgdz2++;
     }
    if(liczba_znakow2==liczba_znakow-1)
     {
          ShowMessage(sumamnidz[iteratornaw2][iteratorgdz2]);
          sumamnidz[iteratornaw2][iteratorgdz2]=sumamnidz[iteratornaw2][iteratorgdz2]*atof(lancuchy[iteratornaw2].SubString(pojemnik_na_znaki[iteratornaw2][liczba_znakow2]+1,lancuchy[iteratornaw2].Length()-pojemnik_na_znaki[iteratornaw2][liczba_znakow2]).c_str());
          ShowMessage(lancuchy[iteratornaw2].SubString(pojemnik_na_znaki[iteratornaw2][liczba_znakow2]+1,lancuchy[iteratornaw2].Length()-pojemnik_na_znaki[iteratornaw2][liczba_znakow2]));
     }
     if(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2]]=='*')
     {
          iteratorGWD++;
     }
     if(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2]]=='/')
     {
          iteratorGWD++;
     }
     liczba_znakow2++;
     }
     while(liczba_znakow2<liczba_znakow);
     if((iterator_dlugosc==lancuchy[iteratornaw2].Length())&&(liczba_znakow2==liczba_znakow))
     {
          if(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow-1]]=='*')
          {
            sumy_mnozenia_i_dzielenia[iteratornaw2]=sumy_mnozenia_i_dzielenia[iteratornaw2]+sumamnidz[iteratornaw2][iteratorgdz2];
          }
          iteratorGWD=1;
          poj_na_znaki[iteratornaw2]=liczba_znakow2;
          iterator_dlugosc=1;
          liczba_znakow=1;
          liczba_znakow2=1;
          iteratorop2=1;
          iteratorgdz2=1;
      }
     iteratornaw2++;
   }
   while(iteratornaw2<iteratornaw3);

   iteratornaw2=1;
   iterator_dlugosc=1;
   int liczba_znakowite=1;
   do
   {
       iteratornaw2++;
   }
   while(iteratornaw2<iteratornaw3);
   int drugiiteratornaw2=0;
   int liczba_znakowEX=0;
   int LENGTH[100];
   do
   {
   if(IL_ZN[drugiiteratornaw2]!=0)
   {
                 do
                 {
                 if(liczba_znakowEX<poj_na_znaki[drugiiteratornaw2])
                 {
                 if((liczba_znakowEX==0)&&(lancuchy[drugiiteratornaw2][pojemnik_na_znaki[drugiiteratornaw2][liczba_znakowEX]]!='/')&&(lancuchy[drugiiteratornaw2][pojemnik_na_znaki[drugiiteratornaw2][liczba_znakowEX]]!='*'))
                 {
                     sumy[drugiiteratornaw2]=sumy[drugiiteratornaw2]+atof(lancuchy[drugiiteratornaw2].SubString(0,pojemnik_na_znaki[drugiiteratornaw2][1]-1).c_str());
                 }
                 }
                 if(liczba_znakowEX<poj_na_znaki[drugiiteratornaw2]-1)
                 {
                 if ((lancuchy[drugiiteratornaw2][1]!='/')&&(lancuchy[drugiiteratornaw2][pojemnik_na_znaki[drugiiteratornaw2][1]]!='/')&&(lancuchy[drugiiteratornaw2][pojemnik_na_znaki[drugiiteratornaw2][1]]!='*')&&(liczba_znakowEX==1)&&(lancuchy[drugiiteratornaw2][pojemnik_na_znaki[drugiiteratornaw2][liczba_znakowEX+1]]!='/')&&(lancuchy[drugiiteratornaw2][pojemnik_na_znaki[drugiiteratornaw2][liczba_znakowEX+1]]!='*'))
                 {
                    DODSUMA[drugiiteratornaw2]=atof(lancuchy[drugiiteratornaw2].SubString(pojemnik_na_znaki[drugiiteratornaw2][1]+1,pojemnik_na_znaki[drugiiteratornaw2][2]-pojemnik_na_znaki[drugiiteratornaw2][1]-1).c_str());
                 }
                 }
                 if(liczba_znakowEX<poj_na_znaki[drugiiteratornaw2]-1)
                 {
                 if((liczba_znakowEX>1)&&(lancuchy[drugiiteratornaw2][pojemnik_na_znaki[drugiiteratornaw2][liczba_znakowEX]]=='+')&&(lancuchy[drugiiteratornaw2][pojemnik_na_znaki[drugiiteratornaw2][liczba_znakowEX+1]]!='*')&&(lancuchy[drugiiteratornaw2][pojemnik_na_znaki[drugiiteratornaw2][liczba_znakowEX+1]]!='/'))
                 {
                     sumy[drugiiteratornaw2]=sumy[drugiiteratornaw2]+atof(lancuchy[drugiiteratornaw2].SubString(pojemnik_na_znaki[drugiiteratornaw2][liczba_znakowEX]+1,pojemnik_na_znaki[drugiiteratornaw2][liczba_znakowEX+1]-pojemnik_na_znaki[drugiiteratornaw2][liczba_znakowEX]).c_str());
                 }
                 }
                 if(liczba_znakowEX==poj_na_znaki[drugiiteratornaw2]-1)
                 {
                 if(lancuchy[drugiiteratornaw2][pojemnik_na_znaki[drugiiteratornaw2][liczba_znakowEX]]=='+')
                 {
                      sumy[drugiiteratornaw2]=sumy[drugiiteratornaw2]+atof(lancuchy[drugiiteratornaw2].SubString(pojemnik_na_znaki[drugiiteratornaw2][liczba_znakowEX]+1,lancuchy[drugiiteratornaw2].Length()-pojemnik_na_znaki[drugiiteratornaw2][liczba_znakowEX]).c_str());
                 }
                 }
                 if(liczba_znakowEX<poj_na_znaki[drugiiteratornaw2]-1)
                 {
                 if(lancuchy[drugiiteratornaw2][pojemnik_na_znaki[drugiiteratornaw2][liczba_znakowEX]]=='+')
                 {

                 }
                 }
                 if(liczba_znakowEX==poj_na_znaki[drugiiteratornaw2]-1)
                 {
                    LENGTH[drugiiteratornaw2]=atof(lancuchy[drugiiteratornaw2].SubString(pojemnik_na_znaki[drugiiteratornaw2][liczba_znakowEX]+1,lancuchy[drugiiteratornaw2].Length()-pojemnik_na_znaki[drugiiteratornaw2][liczba_znakowEX]).c_str());
                 }
                 if((liczba_znakowEX>1)&&(liczba_znak[drugiiteratornaw2]<poj_na_znaki[drugiiteratornaw2])&&(lancuchy[drugiiteratornaw2][pojemnik_na_znaki[drugiiteratornaw2][liczba_znakowEX]]=='-'))
                 {
                      sumy[drugiiteratornaw2]=sumy[drugiiteratornaw2]+atof(lancuchy[drugiiteratornaw2].SubString(pojemnik_na_znaki[drugiiteratornaw2][liczba_znak[drugiiteratornaw2]],pojemnik_na_znaki[drugiiteratornaw2][liczba_znak[drugiiteratornaw2]+1]-pojemnik_na_znaki[iteratornaw2][liczba_znak[drugiiteratornaw2]]+1).c_str());
                 }
                 if((liczba_znakowEX==poj_na_znaki[drugiiteratornaw2]-1)&&(lancuchy[drugiiteratornaw2][pojemnik_na_znaki[drugiiteratornaw2][liczba_znakowEX]]=='-'))
                 {
                      sumy[drugiiteratornaw2]=sumy[drugiiteratornaw2]+atof(lancuchy[drugiiteratornaw2].SubString(pojemnik_na_znaki[drugiiteratornaw2][liczba_znak[drugiiteratornaw2]],lancuchy[drugiiteratornaw2].Length()-pojemnik_na_znaki[drugiiteratornaw2][liczba_znak[drugiiteratornaw2]]+1).c_str());
                 }
                 liczba_znakowEX++;
                 }
                 while(liczba_znakowEX<poj_na_znaki[drugiiteratornaw2]);
                 }
                 if(IL_ZN[drugiiteratornaw2]==0)
                 {
                    sumy_nawiasow[drugiiteratornaw2]=atoi(lancuchy[drugiiteratornaw2].c_str());
                 }
                 else
                 {
                    sumy_nawiasow[drugiiteratornaw2]=sumy[drugiiteratornaw2]+sumy_mnozenia_i_dzielenia[drugiiteratornaw2]+DODSUMA[drugiiteratornaw2]+LENGTH[drugiiteratornaw2];
                 }
                 if(liczba_znakowEX==poj_na_znaki[drugiiteratornaw2])
                 {
                 liczba_znakowEX=0;
                 }
                 drugiiteratornaw2++;
   }
   while(drugiiteratornaw2<iteratornaw2);
   iteratornaw2=0;
   int il_nap3=0;
   do
   {
       if(MNOZ[il_nap3]=="Mnozenie")
       {
       sumawsz=sumy_nawiasow[il_nap3+1]*sumy_nawiasow[il_nap3];
       }
       else
       {
       if(MNOZ[il_nap3]=="Mnozenie")
       {
       sumawsz=sumawsz*sumy_nawiasow[il_nap3+1];
       }
       }
    il_nap3++;
   }
   while(il_nap3<il_nap2);
   do
   {
   if(iteratornaw2==0)
   {
        if(Operacje[iteratornaw2]=="Mnozenie")
        {
        sumawsz=sumy_nawiasow[iteratornaw2+1]*sumy_nawiasow[iteratornaw2];
        }
        if(Operacje[iteratornaw2]=="Dzielenie")
        {
        sumawsz=sumy_nawiasow[iteratornaw2+1]/sumy_nawiasow[iteratornaw2];
        }
        if(Operacje[iteratornaw2]=="Dodawanie")
        {
        sumawsz=sumy_nawiasow[iteratornaw2+1]+sumy_nawiasow[iteratornaw2];
        }
        if(Operacje[iteratornaw2]=="Odejmowanie")
        {
        sumawsz=sumy_nawiasow[iteratornaw2+1]-sumy_nawiasow[iteratornaw2];
        }
        }
        else
        {
        if(Operacje[iteratornaw2]=="Odejmowanie")
        {
        sumawsz=sumawsz-sumy_nawiasow[iteratornaw2+1];
        }
        if(Operacje[iteratornaw2]=="Dodawanie")
        {
        sumawsz=sumawsz+sumy_nawiasow[iteratornaw2+1];
        }
        if(Operacje[iteratornaw2]=="Dzielenie")
        {
        sumawsz=sumawsz/sumy_nawiasow[iteratornaw2+1];
        }
        if(Operacje[iteratornaw2]=="Mnozenie")
        {
        sumawsz=sumawsz*sumy_nawiasow[iteratornaw2+1];
        }
        }
        iteratornaw2++;
   }
   while(iteratornaw2<iterator_znaki);



   sumy_nawiasow[0]=0;
   sumy_nawiasow[1]=0;
   sumy_nawiasow[2]=0;
   sumy_nawiasow[3]=0;
   sumy_nawiasow[4]=0;
   sumy_mnozenia_i_dzielenia[0]=0;
   sumy_mnozenia_i_dzielenia[1]=0;
   sumy_mnozenia_i_dzielenia[2]=0;
   sumy_mnozenia_i_dzielenia[3]=0;
   sumy_mnozenia_i_dzielenia[4]=0;
   sumy_mnozenia_i_dzielenia [5]=0;
   sumy[0]=0;
   sumy[1]=0;
   sumy[2]=0;
   sumy[3]=0;
   sumy[4]=0;
   sumy[5]=0;
   }
   }
   }
   }
   }
   }
   else
   {
      int lengthnapis1=1;
      int lita;
      int lz=0;
      int a=0;
      int b=0;
      int c=0;
      int d=0;
      int e=0;
      int f=0;
      int g=0;
      int h=0;
      int i=0;
      int j=0;
      int k=0;
      int m=0;
      int n=0;
      int o=0;
      int p=0;
      int r=0;
      int s=0;
      int t=0;
      int u=0;
      int w=0;
      int x=0;
      int y=0;
      int z=0;
      int poj_na_znakl[100];
      int poj_na_zn[100];
      int ilzn=0;
      do
      {
         if(Edit1->Text[lengthnapis1]=='a')
         {


            poj_na_znakl[lz]=lengthnapis1;
            lz++;




         }
          if(Edit1->Text[lengthnapis1]=='b')
         {


            poj_na_znakl[lz]=lengthnapis1;
            lz++;




         }
            if(Edit1->Text[lengthnapis1]=='c')
         {


            poj_na_znakl[lz]=lengthnapis1;
            lz++;




         }
            if(Edit1->Text[lengthnapis1]=='d')
         {


            poj_na_znakl[lz]=lengthnapis1;
            lz++;




         }
              if(Edit1->Text[lengthnapis1]=='e')
         {


            poj_na_znakl[lz]=lengthnapis1;
            lz++;




         }
                if(Edit1->Text[lengthnapis1]=='f')
         {


            poj_na_znakl[lz]=lengthnapis1;
            lz++;




         }
               if(Edit1->Text[lengthnapis1]=='g')
         {


            poj_na_znakl[lz]=lengthnapis1;
            lz++;




         }
               if(Edit1->Text[lengthnapis1]=='h')
         {


            poj_na_znakl[lz]=lengthnapis1;
            lz++;




         }
              if(Edit1->Text[lengthnapis1]=='i')
         {


            poj_na_znakl[lz]=lengthnapis1;
            lz++;




         }
           if(Edit1->Text[lengthnapis1]=='j')
         {


            poj_na_znakl[lz]=lengthnapis1;
            lz++;




         }
           if(Edit1->Text[lengthnapis1]=='k')
         {


            poj_na_znakl[lz]=lengthnapis1;
            lz++;




         }
         
           if(Edit1->Text[lengthnapis1]=='m')
         {


            poj_na_znakl[lz]=lengthnapis1;
            lz++;




         }
           if(Edit1->Text[lengthnapis1]=='n')
         {


            poj_na_znakl[lz]=lengthnapis1;
            lz++;




         }

           if(Edit1->Text[lengthnapis1]=='o')
         {


            poj_na_znakl[lz]=lengthnapis1;
            lz++;




         }
           if(Edit1->Text[lengthnapis1]=='p')
         {


            poj_na_znakl[lz]=lengthnapis1;
            lz++;




         }
          if(Edit1->Text[lengthnapis1]=='r')
         {


            poj_na_znakl[lz]=lengthnapis1;
            lz++;




         }
            if(Edit1->Text[lengthnapis1]=='s')
         {


            poj_na_znakl[lz]=lengthnapis1;
            lz++;




         }
            if(Edit1->Text[lengthnapis1]=='t')
         {


            poj_na_znakl[lz]=lengthnapis1;
            lz++;




         }
               if(Edit1->Text[lengthnapis1]=='u')
         {


            poj_na_znakl[lz]=lengthnapis1;
            lz++;




         }
             if(Edit1->Text[lengthnapis1]=='w')
         {


            poj_na_znakl[lz]=lengthnapis1;
            lz++;




         }
             if(Edit1->Text[lengthnapis1]=='x')
         {


            poj_na_znakl[lz]=lengthnapis1;
            lz++;




         }
            if(Edit1->Text[lengthnapis1]=='w')
         {


            poj_na_znakl[lz]=lengthnapis1;
            lz++;




         }
           if(Edit1->Text[lengthnapis1]=='y')
         {


            poj_na_znakl[lz]=lengthnapis1;
            lz++;




         }
          if(Edit1->Text[lengthnapis1]=='z')
         {


            poj_na_znakl[lz]=lengthnapis1;
            lz++;




         }
         if(Edit1->Text[lengthnapis1]=='+')
         {
          poj_na_znakl[lz]=lengthnapis1;
            lz++;
            poj_na_zn[ilzn]=lengthnapis1;
            ilzn++;









         }





      lengthnapis1++;
      }
      while(lengthnapis1<Edit1->Text.Length());
      int  sklada[100];
      int skladb[100];
      int skladc[100];
      int skladd[100];
      int sklade[100];
      int skladf[100];
      int skladg[100];
      int skladh[100];
      int skladi[100];
      int skladj[100];
      int skladk[100];
      int skladm[100];
      int skladn[100];
      int sklado[100];
      int skladp[100];
      int skladr[100];
      int sklads[100];
      int skladt[100];
      int skladu[100];
      int skladw[100];
      int skladx[100];
      int sklady[100];
      int skladz[100];
      int sklada2[100];
      int skladb2[100];
      int skladc2[100];
      int skladd2[100];
      int sklade2[100];
      int skladf2[100];
      int skladg2[100];
      int skladh2[100];
      int skladi2[100];
      int skladj2[100];
      int skladk2[100];
      int skladm2[100];
      int skladn2[100];
      int sklado2[100];
      int skladp2[100];
      int skladr2[100];
      int sklads2[100];
      int skladt2[100];
      int skladu2[100];
      int skladw2[100];
      int skladx2[100];
      int sklady2[100];
      int skladz2[100];
      int ilzn2=0;
      int lengthskl=1;
      AnsiString skl[100];
      AnsiString NAPISK;
      NAPISK=Edit1->Text.SubString(0,poj_na_zn[0]-1);
    int  NAPISKL=NAPISK.Length();
      ShowMessage( NAPISK);
      do
      {
        if(ilzn2==0)
        {

          skl[ilzn2]=Edit1->Text.SubString(0,poj_na_zn[0]-1);


        }
        if((ilzn2>0)&&(ilzn2<ilzn-1))
        {



         skl[ilzn2]=Edit1->Text.SubString(poj_na_zn[ilzn2]+1,poj_na_zn[ilzn2+1]-poj_na_zn[ilzn2]-1);




        }
        if(ilzn2==ilzn-1)
        {


         skl[ilzn2]=Edit1->Text.SubString(poj_na_zn[ilzn2]+1,Edit1->Text.Length()-poj_na_zn[ilzn2]);





        }
       ilzn2++;
      }
      while(ilzn2<ilzn);
      ilzn2=0;
      int lengthnap=1;
      a=0;
      do
      {
         do
         {
           if(ilzn2<ilzn)
           {
          if(skl[ilzn2][lengthnap]=='a')
          {

            a++;



          }
          if(skl[ilzn2][lengthnap]=='b')
          {

            b++;



          }
          if(skl[ilzn2][lengthnap]=='c')
          {

            c++;



          }
          if(skl[ilzn2][lengthnap]=='d')
          {

            d++;



          }
          if(skl[ilzn2][lengthnap]=='e')
          {

            e++;



          }
            if(skl[ilzn2][lengthnap]=='f')
          {

            f++;



          }
            if(skl[ilzn2][lengthnap]=='g')
          {

            g++;



          }
            if(skl[ilzn2][lengthnap]=='h')
          {

            h++;



          }
            if(skl[ilzn2][lengthnap]=='i')
          {

            i++;



          }
           if(skl[ilzn2][lengthnap]=='j')
          {

            j++;



          }
           if(skl[ilzn2][lengthnap]=='k')
          {

            k++;



          }
           if(skl[ilzn2][lengthnap]=='m')
          {

            m++;



          }
            if(skl[ilzn2][lengthnap]=='n')
          {

            n++;



          }
          if(skl[ilzn2][lengthnap]=='o')
          {

            o++;



          }
          if(skl[ilzn2][lengthnap]=='r')
          {

            r++;



          }
          if(skl[ilzn2][lengthnap]=='s')
          {

            s++;



          }
          if(skl[ilzn2][lengthnap]=='t')
          {

            t++;



          }
           if(skl[ilzn2][lengthnap]=='u')
          {

            u++;



          }
            if(skl[ilzn2][lengthnap]=='w')
          {

            w++;



          }
           if(skl[ilzn2][lengthnap]=='x')
          {

            x++;



          }
            if(skl[ilzn2][lengthnap]=='y')
          {

            y++;



          }
           if(skl[ilzn2][lengthnap]=='z')
          {

            z++;



          }

           }



         lengthnap++;
         }
         while(lengthnap<=skl[ilzn2].Length());
         if(lengthnap==skl[ilzn2].Length()+1)
         {
           sklada[ilzn2]=a;
           skladb[ilzn2]=b;
             skladc[ilzn2]=c;
           skladd[ilzn2]=d;
             sklade[ilzn2]=e;
           skladf[ilzn2]=f;
             skladg[ilzn2]=g;
           skladh[ilzn2]=h;
             skladi[ilzn2]=i;
           skladj[ilzn2]=j;
             skladk[ilzn2]=k;

             skladm[ilzn2]=m;
           skladn[ilzn2]=n;
             sklado[ilzn2]=o;
           skladp[ilzn2]=p;
             skladr[ilzn2]=r;
           sklads[ilzn2]=s;
             skladt[ilzn2]=t;
           skladu[ilzn2]=u;
             skladw[ilzn2]=w;
           skladx[ilzn2]=x;
            sklady[ilzn2]=y;
           skladz[ilzn2]=z;
           a=0;
           b=0;
           c=0;
           d=0;
           e=0;
           f=0;
           g=0;
           h=0;
           i=0;
           j=0;
           k=0;

           m=0;
           n=0;
           o=0;
           p=0;
           r=0;
           s=0;
           t=0;
           u=0;
           w=0;
           x=0;
           y=0;
           z=0;

           lengthnap=1;





         }





      ilzn2++;
      }
      while(ilzn2<=ilzn);
      ilzn2=0;
     int ilzn2d=0;
      int ill[100];
      AnsiString LICZ[100];
      do
      {
        do
        {
          if((ilzn2d==0)&&(sklada[ilzn2]==sklada[ilzn2d]))
          {
               sklada2[ilzn2]=1+ill[ilzn2];
               ill[ilzn2]++;
          }
          if((ilzn2d==0)&&(skladb[ilzn2]==skladb[ilzn2d]))
          {

              sklada2[ilzn2]=1+ill[ilzn2];
               ill[ilzn2]++;





          }
          if((ilzn2d==0)&&(skladc[ilzn2]==skladc[ilzn2d]))
          {



                sklada2[ilzn2]=1+ill[ilzn2];
               ill[ilzn2]++;







          }
          if((ilzn2d==0)&&(skladd[ilzn2]==skladd[ilzn2d]))
          {

                 sklada2[ilzn2]=1+ill[ilzn2];
               ill[ilzn2]++;







          }
          if((ilzn2d==0)&&(sklade[ilzn2]==sklade[ilzn2d]))
          {

                 sklada2[ilzn2]=1+ill[ilzn2];
               ill[ilzn2]++;






          }
          if((ilzn2d==0)&&(skladf[ilzn2]==skladf[ilzn2d]))
          {


                sklada2[ilzn2]=1+ill[ilzn2];
               ill[ilzn2]++;






          }
          if((ilzn2d==0)&&(skladg[ilzn2]==skladg[ilzn2d]))
          {

                sklada2[ilzn2]=1+ill[ilzn2];
               ill[ilzn2]++;







          }
          if((ilzn2d==0)&&(skladh[ilzn2]==skladh[ilzn2d]))
          {


                 sklada2[ilzn2]=1+ill[ilzn2];
               ill[ilzn2]++;










          }
          if((ilzn2d==0)&&(skladi[ilzn2]==skladi[ilzn2d]))
          {

                sklada2[ilzn2]=1+ill[ilzn2];
               ill[ilzn2]++;










          }
          if((ilzn2d==0)&&(skladj[ilzn2]==skladj[ilzn2d]))
          {



                 sklada2[ilzn2]=1+ill[ilzn2];
               ill[ilzn2]++;









          }
          if((ilzn2d==0)&&(skladk[ilzn2]==skladk[ilzn2d]))
          {


                sklada2[ilzn2]=1+ill[ilzn2];
               ill[ilzn2]++;









          }
          if((ilzn2d==0)&&(skladm[ilzn2]==skladm[ilzn2d]))
          {


                sklada2[ilzn2]=1+ill[ilzn2];
               ill[ilzn2]++;













          }
          if((ilzn2d==0)&&(skladn[ilzn2]==skladn[ilzn2d]))
          {




                   sklada2[ilzn2]=1+ill[ilzn2];
               ill[ilzn2]++;
















          }


            if((ilzn2d==0)&&(sklado[ilzn2]==sklado[ilzn2d]))
          {

                   sklada2[ilzn2]=1+ill[ilzn2];
               ill[ilzn2]++;



















          }
             if((ilzn2d==0)&&(skladp[ilzn2]==skladp[ilzn2d]))
          {


                  sklada2[ilzn2]=1+ill[ilzn2];
               ill[ilzn2]++;


















          }
          if((ilzn2d==0)&&(skladr[ilzn2]==skladr[ilzn2d]))
          {

                   sklada2[ilzn2]=1+ill[ilzn2];
               ill[ilzn2]++;



















          }
           if((ilzn2d==0)&&(sklads[ilzn2]==sklads[ilzn2d]))
          {

                       sklada2[ilzn2]=1+ill[ilzn2];
               ill[ilzn2]++;



















          }
           if((ilzn2d==0)&&(skladt[ilzn2]==skladt[ilzn2d]))
          {





                   sklada2[ilzn2]=1+ill[ilzn2];
               ill[ilzn2]++;















          }
          if((ilzn2d==0)&&(skladu[ilzn2]==skladu[ilzn2d]))
          {




                     sklada2[ilzn2]=1+ill[ilzn2];
               ill[ilzn2]++;
















          }
          if((ilzn2d==0)&&(skladw[ilzn2]==skladw[ilzn2d]))
          {

                   sklada2[ilzn2]=1+ill[ilzn2];
               ill[ilzn2]++;



















          }
           if((ilzn2d==0)&&(skladx[ilzn2]==skladx[ilzn2d]))
          {

                   sklada2[ilzn2]=1+ill[ilzn2];
               ill[ilzn2]++;



















          }
           if((ilzn2d==0)&&(sklady[ilzn2]==sklady[ilzn2d]))
          {



                     sklada2[ilzn2]=1+ill[ilzn2];
               ill[ilzn2]++;

















          }
           if((ilzn2d==0)&&(skladz[ilzn2]==skladz[ilzn2d]))
          {

                    sklada2[ilzn2]=1+ill[ilzn2];
               ill[ilzn2]++;



















          }




          if((ilzn2d!=0)&&(sklada[ilzn2]==sklada[ilzn2d]))
          {
               sklada2[ilzn2]=1+ill[ilzn2];
               LICZ[ilzn2]=IntToStr(sklada[ilzn2])+IntToStr(sklada[ilzn2d]);
               ill[ilzn2]++;
          }
           if((ilzn2d!=0)&&(skladb[ilzn2]==skladb[ilzn2d]))
          {
               sklada2[ilzn2]=1+ill[ilzn2];
               LICZ[ilzn2]=IntToStr(sklada[ilzn2])+IntToStr(sklada[ilzn2d]);
               ill[ilzn2]++;
          }
           if((ilzn2d!=0)&&(skladc[ilzn2]==skladc[ilzn2d]))
          {
               sklada2[ilzn2]=1+ill[ilzn2];
               LICZ[ilzn2]=IntToStr(sklada[ilzn2])+IntToStr(sklada[ilzn2d]);
               ill[ilzn2]++;
          }
           if((ilzn2d!=0)&&(skladd[ilzn2]==skladd[ilzn2d]))
          {
               sklada2[ilzn2]=1+ill[ilzn2];
               LICZ[ilzn2]=IntToStr(sklada[ilzn2])+IntToStr(sklada[ilzn2d]);
               ill[ilzn2]++;
          }
           if((ilzn2d!=0)&&(sklade[ilzn2]==sklade[ilzn2d]))
          {
               sklada2[ilzn2]=1+ill[ilzn2];
               LICZ[ilzn2]=IntToStr(sklada[ilzn2])+IntToStr(sklada[ilzn2d]);
               ill[ilzn2]++;
          }
           if((ilzn2d!=0)&&(skladf[ilzn2]==skladf[ilzn2d]))
          {
               sklada2[ilzn2]=1+ill[ilzn2];
               LICZ[ilzn2]=IntToStr(sklada[ilzn2])+IntToStr(sklada[ilzn2d]);
               ill[ilzn2]++;
          }
           if((ilzn2d!=0)&&(skladg[ilzn2]==skladg[ilzn2d]))
          {
               sklada2[ilzn2]=1+ill[ilzn2];
               LICZ[ilzn2]=IntToStr(sklada[ilzn2])+IntToStr(sklada[ilzn2d]);
               ill[ilzn2]++;
          }
           if((ilzn2d!=0)&&(skladh[ilzn2]==skladh[ilzn2d]))
          {
               sklada2[ilzn2]=1+ill[ilzn2];
               LICZ[ilzn2]=IntToStr(sklada[ilzn2])+IntToStr(sklada[ilzn2d]);
               ill[ilzn2]++;
          }
           if((ilzn2d!=0)&&(skladi[ilzn2]==skladi[ilzn2d]))
          {
               sklada2[ilzn2]=1+ill[ilzn2];
               LICZ[ilzn2]=IntToStr(sklada[ilzn2])+IntToStr(sklada[ilzn2d]);
               ill[ilzn2]++;
          }
           if((ilzn2d!=0)&&(skladj[ilzn2]==skladj[ilzn2d]))
          {
               sklada2[ilzn2]=1+ill[ilzn2];
               LICZ[ilzn2]=IntToStr(sklada[ilzn2])+IntToStr(sklada[ilzn2d]);
               ill[ilzn2]++;
          }
           if((ilzn2d!=0)&&(skladk[ilzn2]==skladk[ilzn2d]))
          {
               sklada2[ilzn2]=1+ill[ilzn2];
               LICZ[ilzn2]=IntToStr(sklada[ilzn2])+IntToStr(sklada[ilzn2d]);
               ill[ilzn2]++;
          }
           if((ilzn2d!=0)&&(skladm[ilzn2]==skladm[ilzn2d]))
          {
               sklada2[ilzn2]=1+ill[ilzn2];
               LICZ[ilzn2]=IntToStr(sklada[ilzn2])+IntToStr(sklada[ilzn2d]);
               ill[ilzn2]++;
          }
           if((ilzn2d!=0)&&(skladn[ilzn2]==skladn[ilzn2d]))
          {
               sklada2[ilzn2]=1+ill[ilzn2];
               LICZ[ilzn2]=IntToStr(sklada[ilzn2])+IntToStr(sklada[ilzn2d]);
               ill[ilzn2]++;
          }
            if((ilzn2d!=0)&&(sklado[ilzn2]==sklado[ilzn2d]))
          {
               sklada2[ilzn2]=1+ill[ilzn2];
               LICZ[ilzn2]=IntToStr(sklada[ilzn2])+IntToStr(sklada[ilzn2d]);
               ill[ilzn2]++;
          }
           if((ilzn2d!=0)&&(sklado[ilzn2]==sklado[ilzn2d]))
          {
               sklada2[ilzn2]=1+ill[ilzn2];
               LICZ[ilzn2]=IntToStr(sklada[ilzn2])+IntToStr(sklada[ilzn2d]);
               ill[ilzn2]++;
          }
           if((ilzn2d!=0)&&(sklado[ilzn2]==sklado[ilzn2d]))
          {
               sklada2[ilzn2]=1+ill[ilzn2];
               LICZ[ilzn2]=IntToStr(sklada[ilzn2])+IntToStr(sklada[ilzn2d]);
               ill[ilzn2]++;
          }
         if((ilzn2d!=0)&&(skladp[ilzn2]==skladp[ilzn2d]))
          {
               sklada2[ilzn2]=1+ill[ilzn2];
               LICZ[ilzn2]=IntToStr(sklada[ilzn2])+IntToStr(sklada[ilzn2d]);
               ill[ilzn2]++;
          }
           if((ilzn2d!=0)&&(skladr[ilzn2]==skladr[ilzn2d]))
          {
               sklada2[ilzn2]=1+ill[ilzn2];
               LICZ[ilzn2]=IntToStr(sklada[ilzn2])+IntToStr(sklada[ilzn2d]);
               ill[ilzn2]++;
          }
             if((ilzn2d!=0)&&(sklads[ilzn2]==sklads[ilzn2d]))
          {
               sklada2[ilzn2]=1+ill[ilzn2];
               LICZ[ilzn2]=IntToStr(sklada[ilzn2])+IntToStr(sklada[ilzn2d]);
               ill[ilzn2]++;
          }
           if((ilzn2d!=0)&&(skladt[ilzn2]==skladt[ilzn2d]))
          {
               sklada2[ilzn2]=1+ill[ilzn2];
               LICZ[ilzn2]=IntToStr(sklada[ilzn2])+IntToStr(sklada[ilzn2d]);
               ill[ilzn2]++;
          }
          
             if((ilzn2d!=0)&&(skladu[ilzn2]==skladu[ilzn2d]))
          {
               sklada2[ilzn2]=1+ill[ilzn2];
               LICZ[ilzn2]=IntToStr(sklada[ilzn2])+IntToStr(sklada[ilzn2d]);
               ill[ilzn2]++;
          }
           if((ilzn2d!=0)&&(skladw[ilzn2]==skladw[ilzn2d]))
          {
               sklada2[ilzn2]=1+ill[ilzn2];
               LICZ[ilzn2]=IntToStr(sklada[ilzn2])+IntToStr(sklada[ilzn2d]);
               ill[ilzn2]++;
          }
           if((ilzn2d!=0)&&(skladx[ilzn2]==skladx[ilzn2d]))
          {
               sklada2[ilzn2]=1+ill[ilzn2];
               LICZ[ilzn2]=IntToStr(sklada[ilzn2])+IntToStr(sklada[ilzn2d]);
               ill[ilzn2]++;
          }
           if((ilzn2d!=0)&&(sklady[ilzn2]==sklady[ilzn2d]))
          {
               sklada2[ilzn2]=1+ill[ilzn2];
               LICZ[ilzn2]=IntToStr(sklada[ilzn2])+IntToStr(sklada[ilzn2d]);
               ill[ilzn2]++;
          }
          if((ilzn2d!=0)&&(skladz[ilzn2]==skladz[ilzn2d]))
          {
               sklada2[ilzn2]=1+ill[ilzn2];
               LICZ[ilzn2]=IntToStr(sklada[ilzn2])+IntToStr(sklada[ilzn2d]);
               ill[ilzn2]++;
          }
        ilzn2d++;
        }
        while(ilzn2d<=ilzn);
        if(ilzn2d==ilzn+1)
        {
            LICZ[ilzn2]=IntToStr(sklada[ilzn2])+IntToStr(sklada2[ilzn2]);
          ilzn2d=0;

        }


      ilzn2++;
      }
      while(ilzn2<=ilzn);
      ilzn2=0;
      AnsiString sklad[100];
      int ilra=0;
      do
      {
          if(sklada[ilzn2]==NAPISKL)
          {
          sklad[ilzn2]=AnsiString(sklada2[ilzn2]+1)+"a^"+AnsiString(sklada[ilzn2]);
          }
          else
          {
              sklad[ilzn2]=AnsiString(sklada2[ilzn2])+"a^"+AnsiString(sklada[ilzn2]);

          }
          
          if(sklada[ilzn2]==NAPISKL)
          {
          sklad[ilzn2]=AnsiString(sklada2[ilzn2]+1)+"b^"+AnsiString(skladb[ilzn2]);
          }
          else
          {
              sklad[ilzn2]=AnsiString(sklada2[ilzn2])+"b^"+AnsiString(skladb[ilzn2]);

          }
             if(sklada[ilzn2]==NAPISKL)
          {
          sklad[ilzn2]=AnsiString(sklada2[ilzn2]+1)+"c^"+AnsiString(skladc[ilzn2]);
          }
          else
          {
              sklad[ilzn2]=AnsiString(sklada2[ilzn2])+"c^"+AnsiString(skladc[ilzn2]);

          }
             if(sklada[ilzn2]==NAPISKL)
          {
          sklad[ilzn2]=AnsiString(sklada2[ilzn2]+1)+"d^"+AnsiString(skladd[ilzn2]);
          }
          else
          {
              sklad[ilzn2]=AnsiString(sklada2[ilzn2])+"d^"+AnsiString(skladd[ilzn2]);

          }
             if(sklada[ilzn2]==NAPISKL)
          {
          sklad[ilzn2]=AnsiString(sklada2[ilzn2]+1)+"e^"+AnsiString(sklade[ilzn2]);
          }
          else
          {
              sklad[ilzn2]=AnsiString(sklada2[ilzn2])+"e^"+AnsiString(sklade[ilzn2]);

          }
            if(sklada[ilzn2]==NAPISKL)
          {
          sklad[ilzn2]=AnsiString(sklada2[ilzn2]+1)+"f^"+AnsiString(skladf[ilzn2]);
          }
          else
          {
              sklad[ilzn2]=AnsiString(sklada2[ilzn2])+"f^"+AnsiString(skladf[ilzn2]);

          }
            if(sklada[ilzn2]==NAPISKL)
          {
          sklad[ilzn2]=AnsiString(sklada2[ilzn2]+1)+"g^"+AnsiString(skladg[ilzn2]);
          }
          else
          {
              sklad[ilzn2]=AnsiString(sklada2[ilzn2])+"g^"+AnsiString(skladg[ilzn2]);

          }
           if(sklada[ilzn2]==NAPISKL)
          {
          sklad[ilzn2]=AnsiString(sklada2[ilzn2]+1)+"h^"+AnsiString(skladh[ilzn2]);
          }
          else
          {
              sklad[ilzn2]=AnsiString(sklada2[ilzn2])+"h^"+AnsiString(skladh[ilzn2]);

          }
           if(sklada[ilzn2]==NAPISKL)
          {
          sklad[ilzn2]=AnsiString(sklada2[ilzn2]+1)+"i^"+AnsiString(skladi[ilzn2]);
          }
          else
          {
              sklad[ilzn2]=AnsiString(sklada2[ilzn2])+"i^"+AnsiString(skladi[ilzn2]);

          }
            if(sklada[ilzn2]==NAPISKL)
          {
          sklad[ilzn2]=AnsiString(sklada2[ilzn2]+1)+"j^"+AnsiString(skladj[ilzn2]);
          }
          else
          {
              sklad[ilzn2]=AnsiString(sklada2[ilzn2])+"j^"+AnsiString(skladj[ilzn2]);

          }
          if(sklada[ilzn2]==NAPISKL)
          {
          sklad[ilzn2]=AnsiString(sklada2[ilzn2]+1)+"k^"+AnsiString(skladk[ilzn2]);
          }
          else
          {
              sklad[ilzn2]=AnsiString(sklada2[ilzn2])+"k^"+AnsiString(skladk[ilzn2]);

          }
           if(sklada[ilzn2]==NAPISKL)
          {
          sklad[ilzn2]=AnsiString(sklada2[ilzn2]+1)+"m^"+AnsiString(skladm[ilzn2]);
          }
          else
          {
              sklad[ilzn2]=AnsiString(sklada2[ilzn2])+"m^"+AnsiString(skladm[ilzn2]);

          }
           if(sklada[ilzn2]==NAPISKL)
          {
          sklad[ilzn2]=AnsiString(sklada2[ilzn2]+1)+"n^"+AnsiString(skladn[ilzn2]);
          }
          else
          {
              sklad[ilzn2]=AnsiString(sklada2[ilzn2])+"n^"+AnsiString(skladn[ilzn2]);

          }
            if(sklada[ilzn2]==NAPISKL)
          {
          sklad[ilzn2]=AnsiString(sklada2[ilzn2]+1)+"o^"+AnsiString(sklado[ilzn2]);
          }
          else
          {
              sklad[ilzn2]=AnsiString(sklada2[ilzn2])+"o^"+AnsiString(sklado[ilzn2]);

          }
            if(sklada[ilzn2]==NAPISKL)
          {
          sklad[ilzn2]=AnsiString(sklada2[ilzn2]+1)+"p^"+AnsiString(skladp[ilzn2]);
          }
          else
          {
              sklad[ilzn2]=AnsiString(sklada2[ilzn2])+"p^"+AnsiString(skladp[ilzn2]);

          }
           if(sklada[ilzn2]==NAPISKL)
          {
          sklad[ilzn2]=AnsiString(sklada2[ilzn2]+1)+"r^"+AnsiString(skladr[ilzn2]);
          }
          else
          {
              sklad[ilzn2]=AnsiString(sklada2[ilzn2])+"r^"+AnsiString(skladr[ilzn2]);

          }
            if(sklada[ilzn2]==NAPISKL)
          {
          sklad[ilzn2]=AnsiString(sklada2[ilzn2]+1)+"s^"+AnsiString(sklads[ilzn2]);
          }
          else
          {
              sklad[ilzn2]=AnsiString(sklada2[ilzn2])+"s^"+AnsiString(sklads[ilzn2]);

          }
           if(sklada[ilzn2]==NAPISKL)
          {
          sklad[ilzn2]=AnsiString(sklada2[ilzn2]+1)+"t^"+AnsiString(skladt[ilzn2]);
          }
          else
          {
              sklad[ilzn2]=AnsiString(sklada2[ilzn2])+"t^"+AnsiString(skladt[ilzn2]);

          }
            if(sklada[ilzn2]==NAPISKL)
          {
          sklad[ilzn2]=AnsiString(sklada2[ilzn2]+1)+"u^"+AnsiString(skladu[ilzn2]);
          }
          else
          {
              sklad[ilzn2]=AnsiString(sklada2[ilzn2])+"u^"+AnsiString(skladu[ilzn2]);

          }
           if(sklada[ilzn2]==NAPISKL)
          {
          sklad[ilzn2]=AnsiString(sklada2[ilzn2]+1)+"w^"+AnsiString(skladw[ilzn2]);
          }
          else
          {
              sklad[ilzn2]=AnsiString(sklada2[ilzn2])+"w^"+AnsiString(skladw[ilzn2]);

          }
          if(sklada[ilzn2]==NAPISKL)
          {
          sklad[ilzn2]=AnsiString(sklada2[ilzn2]+1)+"x^"+AnsiString(skladx[ilzn2]);
          }
          else
          {
              sklad[ilzn2]=AnsiString(sklada2[ilzn2])+"x^"+AnsiString(skladx[ilzn2]);

          }
            if(sklada[ilzn2]==NAPISKL)
          {
          sklad[ilzn2]=AnsiString(sklada2[ilzn2]+1)+"y^"+AnsiString(sklady[ilzn2]);
          }
          else
          {
              sklad[ilzn2]=AnsiString(sklada2[ilzn2])+"y^"+AnsiString(sklady[ilzn2]);

          }
          if(sklada[ilzn2]==NAPISKL)
          {
          sklad[ilzn2]=AnsiString(sklada2[ilzn2]+1)+"z^"+AnsiString(skladz[ilzn2]);
          }
          else
          {
              sklad[ilzn2]=AnsiString(sklada2[ilzn2])+"z^"+AnsiString(skladz[ilzn2]);

          }
          ilra++;






      ilzn2++;
      }
      while(ilzn2<ilzn);
      ilzn2=0;
      AnsiString LANCUCHC;
      AnsiString LANCUCHC2;
      AnsiString Lancp;
      AnsiString lancuch="";
      ilzn2=0;

      do
      {
        lancuch.Insert(sklad[ilzn2],lancuch.Length());

        ilzn2++;
      }
      while(ilzn2<ilzn);
      ShowMessage(lancuch);
      int liczb1[100];
      int liczb2[100];
      int pozskl[50][50];
      ilzn2=0;
       lengthskl=1;
      int ilsk=0;
      int ilsklex[100];
      do
      {
        do
        {
          if(sklad[ilzn2][lengthskl]=='x')
          {
            pozskl[ilzn2][ilsk]=lengthskl;
            ilsk++;
          }
          if(sklad[ilzn2][lengthskl]=='^')
          {
             pozskl[ilzn2][ilsk]=lengthskl;
            ilsk++;

          }
          lengthskl++;
        }
        while(lengthskl<sklad[ilzn2].Length());
        if(lengthskl==sklad[ilzn2].Length())
        {
         lengthskl=1;
         ilsklex[ilzn2]=ilsk;
         ilsk=0;
        }

      ilzn2++;
      }
      while(ilzn2<ilzn);
      ilzn2=0;

      do
      {
       liczb1[ilzn2]=atoi(sklad[ilzn2].SubString(1,pozskl[ilzn2][0]-1).c_str());
       liczb2[ilzn2]=atoi(sklad[ilzn2].SubString(pozskl[ilzn2][ilsklex[ilzn2]]+1,sklad[ilzn2].Length()-pozskl[ilzn2][ilsklex[ilzn2]]).c_str());


       ilzn2++;
      }
      while(ilzn2<ilzn);
      ilzn2=0;
      int illl=0;
      int ilpow=0;
      int illanc=0;
      AnsiString lanc[100];
      int pozlen[100];
      int pozlen2[100];
      do
      {







       LANCUCHC=LANCUCHC+sklad[ilzn2]+"+";


       lanc[ilzn2]=LANCUCHC;


      ilzn2++;
      }
      while(ilzn2<ilzn-1);
      int lengthlanc=1;
      int ilpl=0;
      int poj_na_ZN[100];
     int il_ZNA=0;
      do
      {
       if(LANCUCHC[lengthlanc]=='+')
       {
           poj_na_ZN[il_ZNA]=lengthlanc;
           il_ZNA++;

       }


       lengthlanc++;
      }
      while(lengthlanc<LANCUCHC.Length());
      ilzn2=0;
      int ilskl=0;
      int ilskl2=0;
     AnsiString Replace="";
      int ilr=0;
      int ilskl3=0;
      int ilp=0;
      AnsiString sklad3[100];
      int ilskl2d=0;
      int il_ZNA2=0;

      do
      {
        do
        {

           if(sklad3[ilskl]==sklad[ilskl2d])
           {
               Replace="TAK";
               ShowMessage("LOLO");

           }

         ilskl++;
        }
        while(ilskl<ilskl2d+1);
        if(ilskl==ilskl2d+1)
        {
        ilr=ilskl2d;
             sklad3[ilskl2d]=sklad[ilskl2d];
            AnsiString SKLAD[100];
             int ilsklad=0;
             int ilskl2dd=0;
              ilskl2dd=ilskl2d+1;
          if(Replace=="TAK")
          {
              do
              {
              if(il_ZNA2<il_ZNA)
              {
                if((LANCUCHC.Pos("^"+ilskl2dd)>poj_na_ZN[il_ZNA2])&&(LANCUCHC.Pos("^"+ilskl2dd)<poj_na_ZN[il_ZNA2+1]))
                {
                  SKLAD[ilsklad]=LANCUCHC.SubString(poj_na_ZN[il_ZNA2]+1,poj_na_ZN[il_ZNA2+1]-poj_na_ZN[il_ZNA2]-1);
                  ilsklad++;
                }
                }
               il_ZNA2++;
              }
              while(il_ZNA2<il_ZNA);
         
               if(il_ZNA2==il_ZNA)
               {

               ilskl3=0;
               LANCUCHC.Delete(poj_na_ZN[ilp],poj_na_ZN[ilp+1]-poj_na_ZN[ilp]);
               LANCUCHC.Insert(SKLAD[ilsklad-1],poj_na_ZN[ilp]-1);
               ilp++;
               ilskl2d++;
              ilr=0;
              Replace="";
              il_ZNA2=0;
              }
             }
          }
         ilskl=0;



         ilskl2++;
       ilzn2++;
      }
      while(ilzn2<ilzn-1);
            //     LANCUCHC.Delete(poj_na_ZN[ilskl2d]+1,LANCUCHC.Length()-poj_na_ZN[ilskl2d]);
      ShowMessage(LANCUCHC);
       int liczba1=600;
      int liczba2=600;
      skladn[100];
       skladn2[100];
       ilskl=0;
      ilzn2=0;
      AnsiString TAK;
      AnsiString Lanp="";
      int pos1;
      int pos2;




      int lengthlancuch=1;
       poj_na_ZN[100];
      int il_znak=0;
      do
      {

       if(LANCUCHC[lengthlancuch]=='+')
       {
         poj_na_ZN[il_znak]=lengthlancuch;
         il_znak++;
       }




       lengthlancuch++;
      }
      while(lengthlancuch<LANCUCHC.Length());
      AnsiString SKL[100];
     int il_Znak2=0;
      do
      {
       if(il_Znak2==0)
       {
       SKL[il_Znak2]=LANCUCHC.SubString(0,poj_na_ZN[il_Znak2]-1);
       }
       if(il_Znak2==il_znak-1)
       {
          SKL[il_Znak2]=LANCUCHC.SubString(poj_na_ZN[il_Znak2]+1,LANCUCHC.Length()-poj_na_ZN[il_Znak2]);

       }
       if((il_Znak2>0)&&(il_Znak2<il_znak))
       {
               SKL[il_Znak2]=LANCUCHC.SubString(poj_na_ZN[il_Znak2]+1,poj_na_ZN[il_Znak2+1]-poj_na_ZN[il_Znak2]-1);


       }
      il_Znak2++;
      }
      while(il_Znak2<il_znak);
      il_Znak2=0;
    int  il_znak2d=0;
      AnsiString SKL2[100];
      int con=0;
       ilskl2=0;


      AnsiString LANCUCHOS;
      int ilskl2dod=0;
      int ilskl2dod2=0;
      AnsiString Sklad[50][50];
      AnsiString Pojem[100];
      int ilnie=0;
       p=0;
    

      ilzn2=0;
     AnsiString Lanc2;









      int length=1;
      a=0;

      int lz2=0;
      do
      {

       









      if(lz2<lz-1)
      {
        if((poj_na_znakl[lz2+1]-poj_na_znakl[lz2]==1)&&(Edit1->Text[poj_na_znakl[lz2+1]]=='a'))
        {
          a=a+1;




        }
        }
        if((poj_na_znakl[lz2]==1)&&(Edit1->Text[poj_na_znakl[lz2]]=='a'))
        {


          a=a+1;





        }
        if(lz2<lz-1)
        {
        if((poj_na_znakl[lz2+1]-poj_na_znakl[lz2]!=1)&&(Edit1->Text[poj_na_znakl[lz2+1]]=='a'))
        {



            a=a+atoi(Edit1->Text.SubString(poj_na_znakl[lz2]+1,poj_na_znakl[lz2+1]-poj_na_znakl[lz2]-1).c_str());






        }
         }


      lz2++;
      }
      while(lz2<lz);



         ShowMessage(AnsiString(a)+"a");




   }









    }
    }

   















//---------------------------------------------------------------------------





void __fastcall TForm2::Button2Click(TObject *Sender)
{
       int lit;










   if((Edit2->Text=="")&&(Edit3->Text!=""))
   {
      ShowMessage("Wpisz wyrazenie po lewej stonie");


   }
  if((Edit2->Text!="")&&(Edit3->Text!=""))
  {
      int dltext=1;
      int liczbaa=0;
      int liczbab=0;
      int liczbac=0;
      int liczbad=0;
      int liczbae=0;
      int liczbaf=0;
      int liczbag=0;
      int liczbah=0;
      int liczbai=0;
      int liczbaj=0;
      int liczbak=0;
      int liczbam=0;
      int liczban=0;
      int liczbao=0;
      int liczbal=0;
      int liczbap=0;
      int liczbar=0;
      int liczbas=0;
      int liczbat=0;
      int liczbau=0;
      int liczbaw=0;
      int liczbax=0;
      int liczbay=0;
      int liczbaz=0;
      int liczbp=0;
      int poj_na_zn[100];
      int il=0;
      do
      {
      if(Edit2->Text[dltext]=='^')
      {
        liczbp++;



      }
      if(Edit2->Text[dltext]=='+')
      {
        poj_na_zn[il]=dltext;
         il++;

      }
        if(Edit2->Text[dltext]=='a')
        {

         liczbaa=1;
         poj_na_zn[il]=dltext;
         il++;
        }
         if(Edit2->Text[dltext]=='b')
        {
          liczbab=1;
           poj_na_zn[il]=dltext;
         il++;
        }
         if(Edit2->Text[dltext]=='c')
        {
          liczbac=1;
           poj_na_zn[il]=dltext;
         il++;
        }
         if(Edit2->Text[dltext]=='d')
        {
           liczbad=1;
           poj_na_zn[il]=dltext;
         il++;
        }
         if(Edit2->Text[dltext]=='e')
        {
            liczbae=1;
             poj_na_zn[il]=dltext;
         il++;
        }
         if(Edit2->Text[dltext]=='f')
        {
             liczbaf=1;
             poj_na_zn[il]=dltext;
         il++;
        }
         if(Edit2->Text[dltext]=='g')
        {
            liczbag=1;
             poj_na_zn[il]=dltext;
         il++;
        }
         if(Edit2->Text[dltext]=='h')
        {
             liczbah=1;
              poj_na_zn[il]=dltext;
         il++;
        }
         if(Edit2->Text[dltext]=='i')
        {
             liczbai=1;
              poj_na_zn[il]=dltext;
         il++;
        }
         if(Edit2->Text[dltext]=='j')
        {
              liczbaj=1;
              poj_na_zn[il]=dltext;
         il++;
        }
         if(Edit2->Text[dltext]=='k')
        {
             liczbak=1;
              poj_na_zn[il]=dltext;
         il++;
        }
         if(Edit2->Text[dltext]=='l')
        {
              liczbal=1;
              poj_na_zn[il]=dltext;
         il++;
        }
         if(Edit2->Text[dltext]=='m')
        {
              liczbam=1;
                poj_na_zn[il]=dltext;
         il++;
        }
         if(Edit2->Text[dltext]=='n')
        {
              liczban=1;
               poj_na_zn[il]=dltext;
         il++;
        }
         if(Edit2->Text[dltext]=='o')
        {
              liczbao=1;
               poj_na_zn[il]=dltext;
         il++;
        }
          if(Edit2->Text[dltext]=='p')
        {
              liczbap=1;
               poj_na_zn[il]=dltext;
         il++;
        }
         if(Edit2->Text[dltext]=='r')
        {
                liczbar=1;
                 poj_na_zn[il]=dltext;
         il++;
        }
         if(Edit2->Text[dltext]=='s')
        {
                liczbas=1;
                 poj_na_zn[il]=dltext;
         il++;
        }
          if(Edit2->Text[dltext]=='t')
        {
              liczbat=1;
               poj_na_zn[il]=dltext;
         il++;
        }
         if(Edit2->Text[dltext]=='u')
        {
                liczbau=1;
                poj_na_zn[il]=dltext;
         il++;
        }
         if(Edit2->Text[dltext]=='w')
        {
                 liczbaw=1;
                poj_na_zn[il]=dltext;
         il++;
        }
          if(Edit2->Text[dltext]=='x')
        {
               liczbax=1;
               poj_na_zn[il]=dltext;
         il++;
        }
         if(Edit2->Text[dltext]=='y')
        {
               liczbay=1;
               poj_na_zn[il]=dltext;
         il++;
        }
         if(Edit2->Text[dltext]=='z')
        {
               liczbaz=1;
               poj_na_zn[il]=dltext;
         il++;
        }
      dltext++;
      }
      while(dltext<Edit2->Text.Length());
      int dltex2=1;
         int il3=0;
         dltext=1;
          int poj_na_zn2[100];
          int il2=0;
      do
      {
      if(Edit3->Text[dltex2]=='^')
      {
        liczbp++;



      }
      if(Edit3->Text[dltex2]=='+')
      {
        poj_na_zn2[il2]=dltex2;
         il2++;

      }
        if(Edit3->Text[dltex2]=='a')
        {

         liczbaa=1;
         poj_na_zn2[il2]=dltex2;
         il2++;
        }
         if(Edit3->Text[dltex2]=='b')
        {
          liczbab=1;
            poj_na_zn2[il2]=dltex2;
         il2++;
        }
         if(Edit3->Text[dltex2]=='c')
        {
          liczbac=1;
            poj_na_zn2[il2]=dltex2;
         il2++;
        }
         if(Edit3->Text[dltex2]=='d')
        {
           liczbad=1;
             poj_na_zn2[il2]=dltex2;
         il2++;
        }
         if(Edit3->Text[dltex2]=='e')
        {
            liczbae=1;
              poj_na_zn2[il2]=dltex2;
         il2++;
        }
         if(Edit3->Text[dltex2]=='f')
        {
             liczbaf=1;
               poj_na_zn2[il2]=dltex2;
         il2++;
        }
         if(Edit3->Text[dltex2]=='g')
        {
            liczbag=1;
              poj_na_zn2[il2]=dltex2;
         il2++;
        }
         if(Edit3->Text[dltex2]=='h')
        {
             liczbah=1;
               poj_na_zn2[il2]=dltex2;
         il2++;
        }
         if(Edit3->Text[dltex2]=='i')
        {
             liczbai=1;
              poj_na_zn2[il2]=dltex2;
         il2++;
        }
         if(Edit3->Text[dltex2]=='j')
        {
              liczbaj=1;
               poj_na_zn2[il2]=dltex2;
         il2++;
        }
         if(Edit3->Text[dltex2]=='k')
        {
             liczbak=1;
               poj_na_zn2[il2]=dltex2;
         il2++;
        }
         if(Edit3->Text[dltex2]=='l')
        {
              liczbal=1;
                poj_na_zn2[il2]=dltex2;
         il2++;
        }
         if(Edit3->Text[dltex2]=='m')
        {
              liczbam=1;
                poj_na_zn2[il2]=dltex2;
         il2++;
        }
         if(Edit3->Text[dltex2]=='n')
        {
              liczban=1;
                poj_na_zn2[il2]=dltex2;
         il2++;
        }
         if(Edit3->Text[dltex2]=='o')
        {
              liczbao=1;
                poj_na_zn2[il2]=dltex2;
         il2++;
        }
          if(Edit3->Text[dltex2]=='p')
        {
              liczbap=1;
                poj_na_zn2[il2]=dltex2;
         il2++;
        }
         if(Edit3->Text[dltex2]=='r')
        {
                liczbar=1;
                  poj_na_zn2[il2]=dltex2;
         il2++;
        }
         if(Edit3->Text[dltex2]=='s')
        {
                liczbas=1;
                 poj_na_zn2[il2]=dltex2;
         il2++;
        }
          if(Edit3->Text[dltex2]=='t')
        {
              liczbat=1;
                poj_na_zn2[il2]=dltex2;
         il2++;
        }
         if(Edit3->Text[dltex2]=='u')
        {
                liczbau=1;
                 poj_na_zn2[il2]=dltex2;
         il2++;
        }
         if(Edit3->Text[dltex2]=='w')
        {
                 liczbaw=1;
                   poj_na_zn2[il2]=dltex2;
         il2++;
        }
          if(Edit3->Text[dltex2]=='x')
        {
               liczbax=1;
                 poj_na_zn2[il2]=dltex2;
         il2++;
        }
         if(Edit3->Text[dltex2]=='y')
        {
               liczbay=1;
                 poj_na_zn2[il2]=dltex2;
         il2++;
        }
         if(Edit3->Text[dltex2]=='z')
        {
               liczbaz=1;
                 poj_na_zn2[il2]=dltex2;
         il2++;
        }




















       dltex2++;
      }
      while(dltex2<Edit3->Text.Length());
      il3=1;
      int skla[100];
      int sklb[100];
      int sklc[100];
      int skld[100];
      int skle[100];
      int sklf[100];
      int sklg[100];
      int sklh[100];
      int skli[100];
      int sklj[100];
      int sklk[100];
      int sklm[100];
      int skln[100];
      int sklo[100];
      int sklp[100];
      int sklr[100];
      int skls[100];
      int sklt[100];
      int sklu[100];
      int sklw[100];
      int sklx[100];
      int skly[100];
      int sklz[100];
      int skll[100];
      int ila=0;
      int ilb=0;
      int ilc=0;
      int ild=0;
      int ile=0;
      int ilf=0;
      int ilg=0;
      int ilh=0;
      int ili=0;
      int ilj=0;
      int ilk=0;
      int ilm=0;
      int iln=0;
      int ilo=0;
      int ilp=0;
      int ilr=0;
      int ill=0;
      int ils=0;
      int ilt=0;
      int ilu=0;
      int ilw=0;
      int ilx=0;
      int ily=0;
      int ilz=0;
      do
      {
        if(il2>0)
        {
        if((Edit2->Text[poj_na_zn[il2-1]]=='+')&&(Edit2->Text[poj_na_zn[il2]]=='a'))
        {
           skla[ila]=atoi(Edit2->Text.SubString(poj_na_zn[il2-1]+1,poj_na_zn[il2]-poj_na_zn[il2-1]-1).c_str());
           ila++;
        }
         if((Edit2->Text[poj_na_zn[il2-1]]=='+')&&(Edit2->Text[poj_na_zn[il2]]=='b'))
        {
           sklb[ilb]=atoi(Edit2->Text.SubString(poj_na_zn[il2-1]+1,poj_na_zn[il2]-poj_na_zn[il2-1]-1).c_str());
           ilb++;
        }
         if((Edit2->Text[poj_na_zn[il2-1]]=='+')&&(Edit2->Text[poj_na_zn[il2]]=='c'))
        {
           sklc[ilc]=atoi(Edit2->Text.SubString(poj_na_zn[il2-1]+1,poj_na_zn[il2]-poj_na_zn[il2-1]-1).c_str());
           ilc++;
        }
         if((Edit2->Text[poj_na_zn[il2-1]]=='+')&&(Edit2->Text[poj_na_zn[il2]]=='d'))
        {
           skld[ild]=atoi(Edit2->Text.SubString(poj_na_zn[il2-1]+1,poj_na_zn[il2]-poj_na_zn[il2-1]-1).c_str());
           ild++;
        }
         if((Edit2->Text[poj_na_zn[il2-1]]=='+')&&(Edit2->Text[poj_na_zn[il2]]=='e'))
        {
           skle[ile]=atoi(Edit2->Text.SubString(poj_na_zn[il2-1]+1,poj_na_zn[il2]-poj_na_zn[il2-1]-1).c_str());
           ile++;
        }
        if((Edit2->Text[poj_na_zn[il2-1]]=='+')&&(Edit2->Text[poj_na_zn[il2]]=='f'))
        {
           sklf[ilf]=atoi(Edit2->Text.SubString(poj_na_zn[il2-1]+1,poj_na_zn[il2]-poj_na_zn[il2-1]-1).c_str());
           ilf++;
        }
         if((Edit2->Text[poj_na_zn[il2-1]]=='+')&&(Edit2->Text[poj_na_zn[il2]]=='g'))
        {
           sklg[ilg]=atoi(Edit2->Text.SubString(poj_na_zn[il2-1]+1,poj_na_zn[il2]-poj_na_zn[il2-1]-1).c_str());
           ilg++;
        }
         if((Edit2->Text[poj_na_zn[il2-1]]=='+')&&(Edit2->Text[poj_na_zn[il2]]=='h'))
        {
           sklh[ilh]=atoi(Edit2->Text.SubString(poj_na_zn[il2-1]+1,poj_na_zn[il2]-poj_na_zn[il2-1]-1).c_str());
           ilh++;
        }
         if((Edit2->Text[poj_na_zn[il2-1]]=='+')&&(Edit2->Text[poj_na_zn[il2]]=='i'))
        {
           skli[ili]=atoi(Edit2->Text.SubString(poj_na_zn[il2-1]+1,poj_na_zn[il2]-poj_na_zn[il2-1]-1).c_str());
           ili++;
        }
         if((Edit2->Text[poj_na_zn[il2-1]]=='+')&&(Edit2->Text[poj_na_zn[il2]]=='j'))
        {
           sklj[ilj]=atoi(Edit2->Text.SubString(poj_na_zn[il2-1]+1,poj_na_zn[il2]-poj_na_zn[il2-1]-1).c_str());
           ilj++;
        }
         if((Edit2->Text[poj_na_zn[il2-1]]=='+')&&(Edit2->Text[poj_na_zn[il2]]=='k'))
        {
           sklk[ilk]=atoi(Edit2->Text.SubString(poj_na_zn[il2-1]+1,poj_na_zn[il2]-poj_na_zn[il2-1]-1).c_str());
           ilk++;
        }
         if((Edit2->Text[poj_na_zn[il2-1]]=='+')&&(Edit2->Text[poj_na_zn[il2]]=='l'))
        {
           skll[ill]=atoi(Edit2->Text.SubString(poj_na_zn[il2-1]+1,poj_na_zn[il2]-poj_na_zn[il2-1]-1).c_str());
           ill++;
        }
         if((Edit2->Text[poj_na_zn[il2-1]]=='+')&&(Edit2->Text[poj_na_zn[il2]]=='m'))
        {
           sklm[ilm]=atoi(Edit2->Text.SubString(poj_na_zn[il2-1]+1,poj_na_zn[il2]-poj_na_zn[il2-1]-1).c_str());
           ilm++;
        }
          if((Edit2->Text[poj_na_zn[il2-1]]=='+')&&(Edit2->Text[poj_na_zn[il2]]=='n'))
        {
           skln[iln]=atoi(Edit2->Text.SubString(poj_na_zn[il2-1]+1,poj_na_zn[il2]-poj_na_zn[il2-1]-1).c_str());
           iln++;
        }
        if((Edit2->Text[poj_na_zn[il2-1]]=='+')&&(Edit2->Text[poj_na_zn[il2]]=='o'))
        {
           sklo[ilo]=atoi(Edit2->Text.SubString(poj_na_zn[il2-1]+1,poj_na_zn[il2]-poj_na_zn[il2-1]-1).c_str());
           ilo++;
        }
         if((Edit2->Text[poj_na_zn[il2-1]]=='+')&&(Edit2->Text[poj_na_zn[il2]]=='p'))
        {
           sklp[ilp]=atoi(Edit2->Text.SubString(poj_na_zn[il2-1]+1,poj_na_zn[il2]-poj_na_zn[il2-1]-1).c_str());
           ilp++;
        }
          if((Edit2->Text[poj_na_zn[il2-1]]=='+')&&(Edit2->Text[poj_na_zn[il2]]=='r'))
        {
           sklr[ilr]=atoi(Edit2->Text.SubString(poj_na_zn[il2-1]+1,poj_na_zn[il2]-poj_na_zn[il2-1]-1).c_str());
           ilr++;
        }
         if((Edit2->Text[poj_na_zn[il2-1]]=='+')&&(Edit2->Text[poj_na_zn[il2]]=='s'))
        {
           skls[ils]=atoi(Edit2->Text.SubString(poj_na_zn[il2-1]+1,poj_na_zn[il2]-poj_na_zn[il2-1]-1).c_str());
           ils++;
        }
         if((Edit2->Text[poj_na_zn[il2-1]]=='+')&&(Edit2->Text[poj_na_zn[il2]]=='t'))
        {
           sklt[ilt]=atoi(Edit2->Text.SubString(poj_na_zn[il2-1]+1,poj_na_zn[il2]-poj_na_zn[il2-1]-1).c_str());
           ilt++;
        }
          if((Edit2->Text[poj_na_zn[il2-1]]=='+')&&(Edit2->Text[poj_na_zn[il2]]=='u'))
        {
           sklu[ilu]=atoi(Edit2->Text.SubString(poj_na_zn[il2-1]+1,poj_na_zn[il2]-poj_na_zn[il2-1]-1).c_str());
           ilu++;
        }
        if((Edit2->Text[poj_na_zn[il2-1]]=='+')&&(Edit2->Text[poj_na_zn[il2]]=='w'))
        {
           sklw[ilw]=atoi(Edit2->Text.SubString(poj_na_zn[il2-1]+1,poj_na_zn[il2]-poj_na_zn[il2-1]-1).c_str());
           ilw++;
        }
         if((Edit2->Text[poj_na_zn[il2-1]]=='+')&&(Edit2->Text[poj_na_zn[il2]]=='x'))
        {
           sklx[ilx]=atoi(Edit2->Text.SubString(poj_na_zn[il2-1]+1,poj_na_zn[il2]-poj_na_zn[il2-1]-1).c_str());
           ilx++;
        }
          if((Edit2->Text[poj_na_zn[il2-1]]=='+')&&(Edit2->Text[poj_na_zn[il2]]=='y'))
        {
           skly[ily]=atoi(Edit2->Text.SubString(poj_na_zn[il2-1]+1,poj_na_zn[il2]-poj_na_zn[il2-1]-1).c_str());
           ily++;
        }
         if((Edit2->Text[poj_na_zn[il2-1]]=='+')&&(Edit2->Text[poj_na_zn[il2]]=='z'))
        {
           sklz[ilz]=atoi(Edit2->Text.SubString(poj_na_zn[il2-1]+1,poj_na_zn[il2]-poj_na_zn[il2-1]-1).c_str());
           ilz++;
        }
        }
      il3++;
      }
      while(il3<il);
      int skla2[100];
      int sklb2[100];
      int sklc2[100];
      int skld2[100];
      int skle2[100];
      int sklf2[100];
      int sklg2[100];
      int sklh2[100];
      int skli2[100];
      int sklj2[100];
      int sklk2[100];
      int sklm2[100];
      int skln2[100];
      int sklo2[100];
      int sklp2[100];
      int sklr2[100];
      int skls2[100];
      int sklt2[100];
      int sklu2[100];
      int sklw2[100];
      int sklx2[100];
      int skly2[100];
      int sklz2[100];
      int il4=1;
      int ila2=0;
      il2=1;
      int ilb2=0;
      int ilc2=0;
      int ild2=0;
      int ile2=0;
      int ilf2=0;
      int ilg2=0;
      int ilh2=0;
      int ili2=0;
      int ilj2=0;
      int ilk2=0;
      int ilm2=0;
      int iln2=0;
      int ilo2=0;
      int ilp2=0;
      int ilr2=0;
      int ils2=0;
      int ilt2=0;
      int ilu2=0;
      int ilw2=0;
      int ilx2=0;
      int ily2=0;
      int ilz2=0;
      if(liczbaa==1)
      {
      do
      {

      if(il4>0)
      {
       if((Edit3->Text[poj_na_zn2[il4-1]]=='+')&&(Edit3->Text[poj_na_zn2[il4]]=='a'))
        {
        skla2[ila2]=atoi(Edit3->Text.SubString(poj_na_zn2[il4-1]+1,poj_na_zn2[il4]-poj_na_zn2[il4-1]-1).c_str());
           ila2++;
          }
          }

       il4++;
      }
      while(il4<il2);
      }

       if(liczbab==1)
      {
      do
      {

      if(il4>0)
      {
       if((Edit3->Text[poj_na_zn2[il4-1]]=='+')&&(Edit3->Text[poj_na_zn2[il4]]=='b'))
        {
        sklb2[ilb2]=atoi(Edit3->Text.SubString(poj_na_zn2[il4-1]+1,poj_na_zn2[il4]-poj_na_zn2[il4-1]-1).c_str());
           ilb2++;
          }
          }

       il4++;
      }
      while(il4<il2);
      }

       if(liczbac==1)
      {
      do
      {

      if(il4>0)
      {
       if((Edit3->Text[poj_na_zn2[il4-1]]=='+')&&(Edit3->Text[poj_na_zn2[il4]]=='c'))
        {
        sklc2[ilc2]=atoi(Edit3->Text.SubString(poj_na_zn2[il4-1]+1,poj_na_zn2[il4]-poj_na_zn2[il4-1]-1).c_str());
           ilc2++;
          }
          }

       il4++;
      }
      while(il4<il3);
      }

       if(liczbad==1)
      {
      do
      {

      if(il4>0)
      {
       if((Edit3->Text[poj_na_zn2[il4-1]]=='+')&&(Edit3->Text[poj_na_zn2[il4]]=='d'))
        {
        skld2[ild2]=atoi(Edit3->Text.SubString(poj_na_zn2[il4-1]+1,poj_na_zn2[il4]-poj_na_zn2[il4-1]-1).c_str());
           ild2++;
          }
          }

       il4++;
      }
      while(il4<il3);
      }

        if(liczbae==1)
      {
      do
      {

      if(il4>0)
      {
       if((Edit3->Text[poj_na_zn2[il4-1]]=='+')&&(Edit3->Text[poj_na_zn2[il4]]=='e'))
        {
        skle2[ile2]=atoi(Edit3->Text.SubString(poj_na_zn2[il4-1]+1,poj_na_zn2[il4]-poj_na_zn2[il4-1]-1).c_str());
           ile2++;
          }
          }

       il4++;
      }
      while(il4<il2);
      }
       if(liczbaf==1)
      {
      do
      {

      if(il4>0)
      {
       if((Edit3->Text[poj_na_zn2[il4-1]]=='+')&&(Edit3->Text[poj_na_zn2[il4]]=='f'))
        {
        sklf2[ilf2]=atoi(Edit3->Text.SubString(poj_na_zn2[il4-1]+1,poj_na_zn2[il4]-poj_na_zn2[il4-1]-1).c_str());
           ilf2++;
          }
          }

       il4++;
      }
      while(il4<il3);
      }
       if(liczbag==1)
      {
      do
      {

      if(il4>0)
      {
       if((Edit3->Text[poj_na_zn2[il4-1]]=='+')&&(Edit3->Text[poj_na_zn2[il4]]=='g'))
        {
        sklg2[ilg2]=atoi(Edit3->Text.SubString(poj_na_zn2[il4-1]+1,poj_na_zn2[il4]-poj_na_zn2[il4-1]-1).c_str());
           ilg2++;
          }
          }

       il4++;
      }
      while(il4<il3);
      }
        if(liczbah==1)
      {
      do
      {

      if(il4>0)
      {
       if((Edit3->Text[poj_na_zn2[il4-1]]=='+')&&(Edit3->Text[poj_na_zn2[il4]]=='h'))
        {
        sklh2[ilh2]=atoi(Edit3->Text.SubString(poj_na_zn2[il4-1]+1,poj_na_zn2[il4]-poj_na_zn2[il4-1]-1).c_str());
           ilh2++;
          }
          }

       il4++;
      }
      while(il4<il3);
      }
       if(liczbai==1)
      {
      do
      {

      if(il4>0)
      {
       if((Edit3->Text[poj_na_zn2[il4-1]]=='+')&&(Edit3->Text[poj_na_zn2[il4]]=='i'))
        {
        skli2[ili2]=atoi(Edit3->Text.SubString(poj_na_zn2[il4-1]+1,poj_na_zn2[il4]-poj_na_zn2[il4-1]-1).c_str());
           ili2++;
          }
          }

       il4++;
      }
      while(il4<il3);
      }
      if(liczbaj==1)
      {
      do
      {

      if(il4>0)
      {
       if((Edit3->Text[poj_na_zn2[il4-1]]=='+')&&(Edit3->Text[poj_na_zn2[il4]]=='j'))
        {
        sklj2[ilj2]=atoi(Edit3->Text.SubString(poj_na_zn2[il4-1]+1,poj_na_zn2[il4]-poj_na_zn2[il4-1]-1).c_str());
           ilj2++;
          }
          }

       il4++;
      }
      while(il4<il3);
      }
        if(liczbak==1)
      {
      do
      {

      if(il4>0)
      {
       if((Edit3->Text[poj_na_zn2[il4-1]]=='+')&&(Edit3->Text[poj_na_zn2[il4]]=='k'))
        {
        sklk2[ilk2]=atoi(Edit3->Text.SubString(poj_na_zn2[il4-1]+1,poj_na_zn2[il4]-poj_na_zn2[il4-1]-1).c_str());
           ilk2++;
          }
          }

       il4++;
      }
      while(il4<il3);
      }
         if(liczbam==1)
      {
      do
      {

      if(il4>0)
      {
       if((Edit3->Text[poj_na_zn2[il4-1]]=='+')&&(Edit3->Text[poj_na_zn2[il4]]=='m'))
        {
        sklm2[ilm2]=atoi(Edit3->Text.SubString(poj_na_zn2[il4-1]+1,poj_na_zn2[il4]-poj_na_zn2[il4-1]-1).c_str());
           ilm2++;
          }
          }

       il4++;
      }
      while(il4<il3);
      }
        if(liczban==1)
      {
      do
      {

      if(il4>0)
      {
       if((Edit3->Text[poj_na_zn2[il4-1]]=='+')&&(Edit3->Text[poj_na_zn2[il4]]=='n'))
        {
        skln2[iln2]=atoi(Edit3->Text.SubString(poj_na_zn2[il4-1]+1,poj_na_zn2[il4]-poj_na_zn2[il4-1]-1).c_str());
           iln2++;
          }
          }

       il4++;
      }
      while(il4<il3);
      }
       if(liczbao==1)
      {
      do
      {

      if(il4>0)
      {
       if((Edit3->Text[poj_na_zn2[il4-1]]=='+')&&(Edit3->Text[poj_na_zn2[il4]]=='o'))
        {
        sklo2[ilo2]=atoi(Edit3->Text.SubString(poj_na_zn2[il4-1]+1,poj_na_zn2[il4]-poj_na_zn2[il4-1]-1).c_str());
           ilo2++;
          }
          }

       il4++;
      }
      while(il4<il3);
      }
        if(liczbap==1)
      {
      do
      {

      if(il4>0)
      {
       if((Edit3->Text[poj_na_zn2[il4-1]]=='+')&&(Edit3->Text[poj_na_zn2[il4]]=='p'))
        {
        sklp2[ilp2]=atoi(Edit3->Text.SubString(poj_na_zn2[il4-1]+1,poj_na_zn2[il4]-poj_na_zn2[il4-1]-1).c_str());
           ilp2++;
          }
          }

       il4++;
      }
      while(il4<il3);
      }
       if(liczbar==1)
      {
      do
      {

      if(il4>0)
      {
       if((Edit3->Text[poj_na_zn2[il4-1]]=='+')&&(Edit3->Text[poj_na_zn2[il4]]=='r'))
        {
        sklr2[ilr2]=atoi(Edit3->Text.SubString(poj_na_zn2[il4-1]+1,poj_na_zn2[il4]-poj_na_zn2[il4-1]-1).c_str());
           ilr2++;
          }
          }

       il4++;
      }
      while(il4<il3);
      }
      if(liczbas==1)
      {
      do
      {

      if(il4>0)
      {
       if((Edit3->Text[poj_na_zn2[il4-1]]=='+')&&(Edit3->Text[poj_na_zn2[il4]]=='s'))
        {
        skls2[ils2]=atoi(Edit3->Text.SubString(poj_na_zn2[il4-1]+1,poj_na_zn2[il4]-poj_na_zn2[il4-1]-1).c_str());
           ils2++;
          }
          }

       il4++;
      }
      while(il4<il3);
      }
         if(liczbat==1)
      {
      do
      {

      if(il4>0)
      {
       if((Edit3->Text[poj_na_zn2[il4-1]]=='+')&&(Edit3->Text[poj_na_zn2[il4]]=='t'))
        {
        sklt2[ilt2]=atoi(Edit3->Text.SubString(poj_na_zn2[il4-1]+1,poj_na_zn2[il4]-poj_na_zn2[il4-1]-1).c_str());
           ilt2++;
          }
          }

       il4++;
      }
      while(il4<il3);
      }
      if(liczbau==1)
      {
      do
      {

      if(il4>0)
      {
       if((Edit3->Text[poj_na_zn2[il4-1]]=='+')&&(Edit3->Text[poj_na_zn2[il4]]=='u'))
        {
        sklu2[ilu2]=atoi(Edit3->Text.SubString(poj_na_zn2[il4-1]+1,poj_na_zn2[il4]-poj_na_zn2[il4-1]-1).c_str());
           ilu2++;
          }
          }

       il4++;
      }
      while(il4<il3);
      }
        if(liczbaw==1)
      {
      do
      {

      if(il4>0)
      {
       if((Edit3->Text[poj_na_zn2[il4-1]]=='+')&&(Edit3->Text[poj_na_zn2[il4]]=='w'))
        {
        sklw2[ilw2]=atoi(Edit3->Text.SubString(poj_na_zn2[il4-1]+1,poj_na_zn2[il4]-poj_na_zn2[il4-1]-1).c_str());
           ilw2++;
          }
          }

       il4++;
      }
      while(il4<il3);
      }
       if(liczbax==1)
      {
      do
      {

      if(il4>0)
      {
       if((Edit3->Text[poj_na_zn2[il4-1]]=='+')&&(Edit3->Text[poj_na_zn2[il4]]=='x'))
        {
        sklx2[ilx2]=atoi(Edit3->Text.SubString(poj_na_zn2[il4-1]+1,poj_na_zn2[il4]-poj_na_zn2[il4-1]-1).c_str());
           ilx2++;
          }
          }

       il4++;
      }
      while(il4<il3);
      }
          if(liczbay==1)
      {
      do
      {

      if(il4>0)
      {
       if((Edit3->Text[poj_na_zn2[il4-1]]=='+')&&(Edit3->Text[poj_na_zn2[il4]]=='y'))
        {
        skly2[ily2]=atoi(Edit3->Text.SubString(poj_na_zn2[il4-1]+1,poj_na_zn2[il4]-poj_na_zn2[il4-1]-1).c_str());
           ily2++;
          }
          }

       il4++;
      }
      while(il4<il3);
      }
          if(liczbaz==1)
      {
      do
      {

      if(il4>0)
      {
       if((Edit3->Text[poj_na_zn2[il4-1]]=='+')&&(Edit3->Text[poj_na_zn2[il4]]=='z'))
        {
        sklz2[ilz2]=atoi(Edit3->Text.SubString(poj_na_zn2[il4-1]+1,poj_na_zn2[il4]-poj_na_zn2[il4-1]-1).c_str());
           ilz2++;
          }
          }

       il4++;
      }
      while(il4<il3);
      }
          if(liczbaa+liczbab+liczbac+liczbad+liczbae+liczbaf+liczbah+liczbai+liczbaj+liczbak+liczbal+liczbam+liczban+liczbao+liczbap+liczbar+liczbas+liczbas+liczbat+liczbau+liczbaw+liczbax+liczbay+liczbaz>1)
          {
            ShowMessage(" W nierownosci powinna byc tylko z jedna zmienna");

          }
          else
          {
             if(liczbaa==1)
             {
                if(liczbap==0)
                {




























                }


             }
              if(liczbab==1)
             {



             }
              if(liczbac==1)
             {



             }
                if(liczbad==1)
             {



             }
                  if(liczbae==1)
             {



             }
                 if(liczbaf==1)
             {



             }
                  if(liczbag==1)
             {



             }
                  if(liczbah==1)
             {



             }
                 if(liczbai==1)
             {



             }
                  if(liczbaj==1)
             {



             }
               if(liczbak==1)
             {



             }
                 if(liczbal==1)
             {



             }
                  if(liczbam==1)
             {



             }
             
               if(liczban==1)
             {



             }
                 if(liczbao==1)
             {



             }
                  if(liczbap==1)
             {



             }
               if(liczbar==1)
             {



             }
                 if(liczbas==1)
             {



             }
                  if(liczbat==1)
             {



             }
                    if(liczbaw==1)
             {



             }
                  if(liczbax==1)
             {



             }
             
                    if(liczbay==1)
             {



             }
                  if(liczbaz==1)
             {



             }



























































































          }





        }






   if((Edit3->Text=="")&&(Edit2->Text!=""))
   {
      ShowMessage("Wpisz wyrazenie po prawej stronie");
   }
   if((Edit2->Text=="")&&(Edit3->Text==""))
   {

    ShowMessage("Obie rubryki puste");
   }




}


//---------------------------------------------------------------------------

