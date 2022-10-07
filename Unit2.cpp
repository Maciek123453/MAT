//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
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
   AnsiString MNOZ[200];
int il_nap2=0;
                           int Suma_skl=0;
                  int IL_ZN[200];
            int iteratornaw3=0;
           AnsiString poj_nagid[100][100];
             int sumamnidz[100][100];
     int poj_na_od[100][100];
     int poj_na_znaki[200];
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
                if(NAPIS[iterator_dlugosc]=='(')
                {
                 poj_na_min[il_min]=iterator_dlugosc;
                 il_min++;
                 ilnaw++;
                 nawiasy[naw]=iterator_dlugosc;
                 naw++;
                 poz_naw1[iteratornaw1]=iterator_dlugosc;
                 iteratornaw1++;
                }

                if((NAPIS[iterator_dlugosc]=='(')&&(NAPIS[iterator_dlugosc+1]=='('))
                {
                NAWIAS=1;
                }
                if(NAPIS[iterator_dlugosc]==')')
                {
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
                  zla_skladnia="TAK";
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
             iterator_dlugosc++;
             }
             while(iterator_dlugosc<=NAPIS.Length());

                      int ilnawMN2=0;
                   int LanMnozLength=1;
                   int ilNAWmnoz=0;
                   int ilNAWmnoz2=0;
                   int poj_na_ilnawmnoz[100];
                   int poz1[100][100];
                   int poz2[100][100];
                   if(ilnawMN!=0)
                   {
                   do
                   {
                     do
                     {
                        if(LANCUCHYMNOZ[ilnawMN2][LanMnozLength]=='(')
                        {
                        poz1[ilnawMN2][ilNAWmnoz]=LanMnozLength;
                          ilNAWmnoz++;

                        }
                        if(LANCUCHYMNOZ[ilnawMN2][LanMnozLength]==')')
                        {
                          poz2[ilnawMN2][ilNAWmnoz2]=LanMnozLength;
                          ilNAWmnoz2++;
                        }



                      LanMnozLength++;
                     }
                     while(LanMnozLength<LANCUCHYMNOZ[ilnawMN2].Length());
                     if(LanMnozLength==LANCUCHYMNOZ[ilnawMN2].Length())
                     {
                        poj_na_ilnawmnoz[ilnawMN2]=ilNAWmnoz;
                        ilNAWmnoz=0;
                        LanMnozLength=1;
                     }
                    ilnawMN2++;
                   }
                   while(ilnawMN2<ilnawMN);
                   AnsiString lancuchymnoz[100][100];
                      ilNAWmnoz2=0;
                     ilnawMN2=0;
                    do
                    {
                      do
                      {
                        lancuchymnoz[ilnawMN2][ilNAWmnoz2]=LANCUCHYMNOZ[ilnawMN2].SubString(poz1[ilnawMN2][ilNAWmnoz2],poz2[ilnawMN2][ilNAWmnoz2]-poz1[ilnawMN2][ilNAWmnoz2]);


                       ilNAWmnoz2++;
                      }
                      while(ilNAWmnoz2< poj_na_ilnawmnoz[ilnawMN2]);
                      if(ilNAWmnoz2==poj_na_ilnawmnoz[ilnawMN2])
                      {
                       ilNAWmnoz2=0;

                      }
                      ilnawMN2++;
                    }
                    while(ilnawMN2<ilnawMN);
                     int POJEM[100][100];
                     int poj_na_zw[100];
                     int iteratorzw=0;
                     do
                     {
                          poj_na_zw[iteratorzw]=POJEM[100][100];


                      iteratorzw++;
                     }
                     while(iteratorzw<10);



                   int Lengthlan=1;
                   int ilnawMnoz2=0;
                   ilnawMN2=0;
                   do
                   {
                    do
                    {
                      do
                      {





                     Lengthlan++;
                      }
                      while(Lengthlan<lancuchymnoz[ilnawMN2][ilNAWmnoz2].Length());
                      if(Lengthlan==lancuchymnoz[ilnawMN2][ilNAWmnoz2].Length())
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



                    }































































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
                 if((Edit1->Text[poj_na_zn[licz_naw2]]=='(')&&(Edit1->Text[poj_na_zn[licz_naw2+1]]=='('))
                 {
                    CZUJ1=1;
                    poz1=poj_na_zn[licz_naw2+1];
                 }
                  if((Edit1->Text[poj_na_zn[licz_naw2]]==')')&&(Edit1->Text[poj_na_zn[licz_naw2+1]]==')'))
                 {
                   CZUJ2=1;
                    poz2=poj_na_zn[licz_naw2+1];
                    poz3=poj_na_zn[licz_naw2+2];
                 }
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
                int poznaw1[100];
                int poznaw2[100];
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
                 ShowMessage(ILZ[ilnaw3]);
                 ShowMessage(ILZ[ilnaw3+1]);
                 int Liczb_Zn=0;
                 int sumy_skl[100][100];
                 int plmin=0;
                 int ilplmindod[100];
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
                    ilnaw3=0;
                   int SUMA[100];
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
               int Pojem_na_Lan[100];
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
               int NAW1[100];
               int NAW2[100];
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
                ilnaw3=0;
                int SKLLAN[100][100];
                int PLMIN=0;
                int ILPLMIN[100];
                int DODP[100];
                do
                {
                  do
                  {
                  if(ILLZN[ilnaw3]==1)
                  {
                    DODP[ilnaw3]=atoi(LAN[ilnaw3].SubString(2,poj_na_zn[ilnaw3][LZN2]-1).c_str());
                    ShowMessage(LAN[ilnaw3].SubString(2,poj_na_zn[ilnaw3][LZN2]));
                    ShowMessage("LOLOK");
                  }
                    if((LAN[ilnaw3][poj_na_zn[ilnaw3][LZN2]]=='+')&&(LZN2==0)&&(ILLZN[ilnaw3]!=1))
                    {
                       SKLLAN[ilnaw3][PLMIN]=atoi(LAN[ilnaw3].SubString(0,poj_na_zn[ilnaw3][LZN2]-1).c_str());
                       PLMIN++;
                    }
                    if((LAN[ilnaw3][poj_na_zn[ilnaw3][LZN2]]=='+')&&(LZN2>0)&&(LZN2<ILLZN[ilnaw3]))
                    {
                       SKLLAN[ilnaw3][PLMIN]=atoi(LAN[ilnaw3].SubString(poj_na_zn[ilnaw3][LZN2-1]+1,poj_na_zn[ilnaw3][LZN2]-poj_na_zn[ilnaw3][LZN2-1]-1).c_str());
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
                 ShowMessage(DODP[0]);
                 do
                 {
                  do
                  {
                    SUMYLAN[ilnaw3]=SUMYLAN[ilnaw3]+ SKLLAN[ilnaw3][PLMIN2];

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
                  SUMAMNOZEN=SUMYLAN[ilnaw3]+DODP[ilnaw3];

                  }
                  else
                  {
                    SUMAMNOZEN=SUMAMNOZEN*(SUMYLAN[ilnaw3]+DODP[ilnaw3]);

                  }



                  ilnaw3++;
                 }
                 while(ilnaw3<ilnaw2);

                  ShowMessage(SUMAMNOZEN);

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
                       if((Znaki2<Znaki)&&(Znaki2>0)&&(LANKON[POJ_NA_ZN[Znaki2]]=='+'))
                       {
                         SKLAD[Znaki2]=atoi(LANKON.SubString(POJ_NA_ZN[Znaki2-1]+1,POJ_NA_ZN[Znaki2]-POJ_NA_ZN[Znaki2-1]-1).c_str());


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
                       ShowMessage(LANCUCHYDOD[ilosclandod]);
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
                     ShowMessage( LancuchyW[illanc]);
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
                       if(LICZBA_ZNAKOWLAN2>0)
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
                        if(LANCUCHYDOD[ilosclandod2][POJ_NA_ZN[ilosclandod2][LICZBA_ZNAKOWLAN2]]=='-')
                       {


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
                     //   ShowMessage(SUMY4[ilosclandod2]+DODSUM[ilosclandod2]);
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
                   if(iterator_length<NAPIS.Length())
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
                        int IL2=0;
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

                              SUMY2[IL2][ilpoz2]=SUMY3[POZ[IL2][ilpoz2]];
                            //     ShowMessage(SUMY2[IL2][ilpoz2]);
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

                   int SUMYM[100];
                      illanc2=0;
                      ilpoz2=0;
                      IL2=0;
                      int IL3=0;
                   //   ShowMessage(poj_il_Poz[0]);
                 //     ShowMessage(poj_il_Poz[1]);
                      do
                      {
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
                //     ShowMessage(SUMYM[0]);
                //     ShowMessage(SUMYM[1]);
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
                 //         ShowMessage(SUMYMISKL);
                    }
                      illanc=0;
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
                  if(iteratornaw2==1)
                  {
                         AnsiString NAPISPOJ=NAPIS.SubString(poz_naw1[0]+1,poz_naw2[0]-poz_naw1[0]-1);
                         ShowMessage(NAPISPOJ);
                         ShowMessage(SUMAGW);
                         int iterator_length=1;
                         int Poj_na_zn[100];
                         AnsiString minusnaw[200];
                         int il_zn=0;
                         int poj_na_min_naw[200];
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
                               }
                                iterator_NAPIS++;
                              }
                              while(iterator_NAPIS<Edit1->Text.Length());
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
                               SUMAMNOZE= SUMAMNOZE*atof(Edit1->Text.SubString(poj_na_gw[ilgwiazdek2]+1,Edit1->Text.Length()-poj_na_gw[ilgwiazdek2]).c_str());
                               }
                               else
                               {
                                  SUMAMNOZE= SUMAMNOZE*atof(Edit1->Text.SubString(poj_na_gw[ilgwiazdek2]+1,poj_na_gw[ilgwiazdek2+1]-poj_na_gw[ilgwiazdek2]-1).c_str());
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
                    //     ShowMessage((SUMA+DODSUM)*SUMAMNOZE);
                         }
                         else
                         {
                     //     ShowMessage(SUMA+DODSUM);
                         }
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
                    if(NAPIS[poj_na_min[il_min-1]]=='*')
                    {
                       skl_namn[ilskl]=atof(NAPIS.SubString(poj_na_min[il_min2]+1,NAPIS.Length()-poj_na_min[il_min2]).c_str());
                       ShowMessage(skl_namn[ilskl]);
                    }
                 il_min2++;
                }
               while(il_min2<il_min);
               int SUMAGW=0;
               int il_skl2=0;
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
                    }
                  //  ShowMessage(SUMAGW);
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
                       while(iterator_NAPIS<=Napisy[il_nap2].Length());
                       if(iterator_NAPIS==Napisy[il_nap2].Length()+1)
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
             int pojemnik_na_znakidod[300];
             do
             {
                  if(illanc==0)
                  {
                  lancuchy[iteratornaw3]=NAPIS.SubString(poz_naw1[iteratornaw3]+1,poz_naw2[iteratornaw3]-poz_naw1[iteratornaw3]-1);
                  }
                  else
                  {

                  }
                  iteratornaw3++;
             }
             while(iteratornaw3<iteratornaw2);
             NAPIS=NAPIS.SubString(poz_naw1[0],poz_naw2[iteratornaw2-1]);
             napisponaw=Edit1->Text.SubString(poz_naw2[iteratornaw2-1]+2,Edit1->Text.Length()-poz_naw2[iteratornaw2-1]-1);
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
     if(iteratornaw2<iteratornaw3)
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
     if(liczba_znakow2>0)
     {
    if((iteratorGWD==1)&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2]]=='*')&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]]!='*')&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]]!='/'))
    {
        sumamnidz[iteratornaw2][iteratorgdz2]=atof(lancuchy[iteratornaw2].SubString(pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]+1,pojemnik_na_znaki[iteratornaw2][liczba_znakow2]-pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]-1).c_str())*atof(lancuchy[iteratornaw2].SubString(pojemnik_na_znaki[iteratornaw2][liczba_znakow2]+1,pojemnik_na_znaki[iteratornaw2][liczba_znakow2+1]-pojemnik_na_znaki[iteratornaw2][liczba_znakow2]-1).c_str());
         ShowMessage(sumamnidz[iteratornaw2][iteratorgdz2]);
     }
     }
     if(liczba_znakow2>0)
     {
     if((iteratorGWD==1)&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2]]=='/')&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]]!='*')&&(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]]!='/'))
     {
          sumamnidz[iteratornaw2][iteratorgdz2]=atof(lancuchy[iteratornaw2].SubString(pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]+1,pojemnik_na_znaki[iteratornaw2][liczba_znakow2]-pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]-1).c_str())/atof(lancuchy[iteratornaw2].SubString(pojemnik_na_znaki[iteratornaw2][liczba_znakow2]+1,pojemnik_na_znaki[iteratornaw2][liczba_znakow2+1]-pojemnik_na_znaki[iteratornaw2][liczba_znakow2]-1).c_str());
     }
     }
     if(liczba_znakow2>0)
     {
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
     }
     if(liczba_znakow2==IL_ZN[iteratornaw2])
     {
     if(liczba_znakow2>0)
     {
          if(lancuchy[iteratornaw2][pojemnik_na_znaki[iteratornaw2][liczba_znakow2-1]]=='*')
          {
            sumy_mnozenia_i_dzielenia[iteratornaw2]=sumy_mnozenia_i_dzielenia[iteratornaw2]+sumamnidz[iteratornaw2][iteratorgdz2];
          }
          }
          iteratorGWD=1;
          poj_na_znaki[iteratornaw2]=liczba_znakow2;
          iterator_dlugosc=1;
          liczba_znakow=0;
          liczba_znakow2=0;
          iteratorop2=1;
          iteratorgdz2=1;

      }
      iteratornaw2++;
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











   //   ShowMessage("GOGO");
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
   //     ShowMessage(Suma_skl);














         }

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

                 if(lancuchy[drugiiteratornaw2][pojemnik_na_znaki[drugiiteratornaw2][liczba_znakowEX]]=='+')
                 {
                //      sumy[drugiiteratornaw2]=sumy[drugiiteratornaw2]+atof(lancuchy[drugiiteratornaw2].SubString(pojemnik_na_znaki[drugiiteratornaw2][poj_na_znaki[drugiiteratornaw2]]+1,lancuchy[drugiiteratornaw2].Length()-pojemnik_na_znaki[drugiiteratornaw2][poj_na_znaki[drugiiteratornaw2]]).c_str());
                 }

                   LENGTH[drugiiteratornaw2]=atof(lancuchy[drugiiteratornaw2].SubString(pojemnik_na_znaki[drugiiteratornaw2][poj_na_znaki[drugiiteratornaw2]-1]+1,lancuchy[drugiiteratornaw2].Length()-pojemnik_na_znaki[drugiiteratornaw2][poj_na_znaki[drugiiteratornaw2]-1]).c_str());


                 if(liczba_znakowEX< IL_ZN[drugiiteratornaw2]-1)
                 {
                 if(lancuchy[drugiiteratornaw2][pojemnik_na_znaki[drugiiteratornaw2][liczba_znakowEX]]=='+')
                 {

                 }
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
   }

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
     int poj_na_znaki[200];
     int iteratorgp=1;
     int iteratorgd=1;
     int poczatekop[100][100];
     int iteratorop=1;
     int iteratorop2=1;
     int iteratorgdz2=1;
     int iterator_sumidz=1;
     int sumamnidz[100][100];
     AnsiString napisywb[100];
     int sumamnozidz[200];
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
    }
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
   int LENGTH[200];
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
   }
   if((Edit1->Text[1]=='|')&&(Edit1->Text[Edit1->Text.Length()]=='|'))
   {
   //     ShowMessage(abs(sumawsz));
   }
   else
   {
  // ShowMessage(SUMAGW);
   if(SUMAGW==0)
   {
   if(Edit1->Text[1]!='-')
   {
  //       ShowMessage(AnsiString(sumawsz+suma));
   }
   else
   {
  //       ShowMessage(AnsiString((-1)*sumawsz));
   }
   }
   else
   {
 //      ShowMessage(sumawsz*SUMAGW);
   }
   }
   if((Edit1->Text[2]=='|')&&(Edit1->Text[iteratorwb]=='|'))
   {
   //     ShowMessage(abs(sumawsz));
   }
   }
   }
   }

 //  ShowMessage(sumawsz);
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
//---------------------------------------------------------------------------

