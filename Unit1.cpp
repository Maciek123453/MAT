//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button1Click(TObject *Sender)
{
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
             do
             {
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
             if(ZNAKI==0)
             {
               ShowMessage(Edit1->Text);

             }
             else
             {
             if(NAWIAS==1)
             {
                   int naw2=0;
                   int czuj1=0;
                   int czuj2=0;
                   int Czuj1=0;
                   int Czuj2=0;
                   int poz1=0;
                   int poz2=0;
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
                       if((NAPIS[nawiasy[naw2-1]]=='(')&&(NAPIS[nawiasy[naw2]]=='(')&&(NAPIS[nawiasy[naw2+1]]=='('))
                      {
                         pozDOD1=nawiasy[naw2+1];
                         Czuj1=1;
                      }
                 }
                 if((naw2>0)&&(naw2<naw-1))
                 {
                     if((NAPIS[nawiasy[naw2-1]]!=')')&&(NAPIS[nawiasy[naw2]]==')')&&(NAPIS[nawiasy[naw2+1]]==')'))
                     {
                     poz2=nawiasy[naw2+1];
                     czuj2=1;
                     }
                       if((NAPIS[nawiasy[naw2]]==')')&&(NAPIS[nawiasy[naw2+1]]==')')&&(NAPIS[nawiasy[naw2+2]]==')'))
                      {
                         pozDOD2=nawiasy[naw2+2];
                         Czuj2=1;
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
                        ShowMessage(SUMY4[ilosclandod2]+DODSUM[ilosclandod2]);
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
                                 ShowMessage(SUMY2[IL2][ilpoz2]);
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
                      ShowMessage(poj_il_Poz[0]);
                      ShowMessage(poj_il_Poz[1]);
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
                     ShowMessage(SUMYM[0]);
                     ShowMessage(SUMYM[1]);
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
                          ShowMessage(SUMYMISKL);
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
                         int il_zn=0;
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
                         ShowMessage((SUMA+DODSUM)*SUMAMNOZE);
                         }
                         else
                         {
                          ShowMessage(SUMA+DODSUM);
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
                    ShowMessage(SUMAGW);
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
                       if(iterator_NAPIS==Napisy[il_nap2].Length())
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
     AnsiString poj_nagid[100][100];
     iterator_dlugosc=1;
     int poj_na_od[300][100];
     int poj_na_znaki[200];
     int iteratorgp=1;
     int iteratorgd=1;
     int poczatekop[100][100];
     int iteratorop=1;
     int iteratorop2=1;
     int iteratorgdz2=1;
     int iterator_sumidz=1;
     int sumamnidz[100][100];
     AnsiString napisywb[300];
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
     int POJ_NA_ZN[100];
     liczba_znakow=0;
       do
       {
       do
     {
     if(lancuchy[iteratornaw2][iterator_dlugosc]=='*')
     {

          liczba_znakow++;
     }
     if(lancuchy[iteratornaw2][iterator_dlugosc]=='-')
     {

          liczba_znakow++;
     }
     if(lancuchy[iteratornaw2][iterator_dlugosc]=='/')
     {

          liczba_znakow++;
     }
     if(lancuchy[iteratornaw2][iterator_dlugosc]=='+')
     {

          liczba_znakow++;
     }
     if(lancuchy[iteratornaw2][iterator_dlugosc]=='/')
     {
          poj_na_od[iteratornaw2][iteratorgd]++;
     }
     iterator_dlugosc++;
     }
     while(iterator_dlugosc<lancuchy[iteratornaw2].Length());
     if(iterator_dlugosc==lancuchy[iteratornaw2].Length())
     {
         POJ_NA_ZN[iteratornaw2]=liczba_znakow;
         liczba_znakow=0;
         iterator_dlugosc=1;
     }
     iteratornaw2++;
     }
     while(iteratornaw2<iteratornaw3);
     iteratornaw2=0;
      liczba_znakow=0;
     iterator_dlugosc=1;
     do
     {
     if(POJ_NA_ZN[iteratornaw2]!=0)
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
          liczba_znakow=0;
          liczba_znakow2=1;
          iteratorop2=1;
          iteratorgdz2=1;

      }
      }
      else
      {



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
   int liczba_znakowEX=1;

   do
   {
                if(POJ_NA_ZN[drugiiteratornaw2]!=0)
   {
                 do
                 {
                 if(liczba_znakowEX<poj_na_znaki[drugiiteratornaw2])
                 {
                 if((liczba_znakowEX==1)&&(lancuchy[drugiiteratornaw2][pojemnik_na_znaki[drugiiteratornaw2][liczba_znakowEX]]!='/')&&(lancuchy[drugiiteratornaw2][pojemnik_na_znaki[drugiiteratornaw2][liczba_znakowEX]]!='*'))
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
                 if((liczba_znakowEX>1)&&(liczba_znak[drugiiteratornaw2]<poj_na_znaki[drugiiteratornaw2])&&(lancuchy[drugiiteratornaw2][pojemnik_na_znaki[drugiiteratornaw2][liczba_znak[drugiiteratornaw2]]]=='-'))
                 {
                      sumy[drugiiteratornaw2]=sumy[drugiiteratornaw2]+atof(lancuchy[drugiiteratornaw2].SubString(pojemnik_na_znaki[drugiiteratornaw2][liczba_znak[drugiiteratornaw2]],pojemnik_na_znaki[drugiiteratornaw2][liczba_znak[drugiiteratornaw2]+1]-pojemnik_na_znaki[iteratornaw2][liczba_znak[drugiiteratornaw2]]+1).c_str());
                 }
                 if((liczba_znakowEX==poj_na_znaki[drugiiteratornaw2]-1)&&(lancuchy[drugiiteratornaw2][pojemnik_na_znaki[drugiiteratornaw2][liczba_znak[drugiiteratornaw2]]]=='-'))
                 {
                      sumy[drugiiteratornaw2]=sumy[drugiiteratornaw2]+atof(lancuchy[drugiiteratornaw2].SubString(pojemnik_na_znaki[drugiiteratornaw2][liczba_znak[drugiiteratornaw2]],lancuchy[drugiiteratornaw2].Length()-pojemnik_na_znaki[drugiiteratornaw2][liczba_znak[drugiiteratornaw2]]+1).c_str());
                 }
                 liczba_znakowEX++;
                 }
                 while(liczba_znakowEX<poj_na_znaki[drugiiteratornaw2]);
                 if(liczba_znakowEX==poj_na_znaki[drugiiteratornaw2])
                 {
                 liczba_znakowEX=1;
                 }
                 }
                 else
                 {
                  sumy_nawiasow[drugiiteratornaw2]=atoi(lancuchy[drugiiteratornaw2].c_str());
                
                 }
                 if(POJ_NA_ZN[drugiiteratornaw2]!=0)
                 {
                 sumy_nawiasow[drugiiteratornaw2]=sumy[drugiiteratornaw2]+sumy_mnozenia_i_dzielenia[drugiiteratornaw2]+DODSUMA[drugiiteratornaw2];
                 }
                 ShowMessage(sumy[drugiiteratornaw2]+sumy_mnozenia_i_dzielenia[drugiiteratornaw2]);
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
   ShowMessage(sumawsz);
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
     int poj_na_od[300][100];
     int poj_na_znaki[200];
     int iteratorgp=1;
     int iteratorgd=1;
     int poczatekop[100][100];
     int iteratorop=1;
     int iteratorop2=1;
     int iteratorgdz2=1;
     int iterator_sumidz=1;
     int sumamnidz[100][100];
     AnsiString napisywb[300];
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
   int liczba_znakowEX=1;
   do
   {
                 do
                 {
                 if(liczba_znakowEX<poj_na_znaki[drugiiteratornaw2])
                 {
                 if((liczba_znakowEX==1)&&(lancuchy[drugiiteratornaw2][pojemnik_na_znaki[drugiiteratornaw2][liczba_znakowEX]]!='/')&&(lancuchy[drugiiteratornaw2][pojemnik_na_znaki[drugiiteratornaw2][liczba_znakowEX]]!='*'))
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
                 if((liczba_znakowEX>1)&&(liczba_znak[drugiiteratornaw2]<poj_na_znaki[drugiiteratornaw2])&&(lancuchy[drugiiteratornaw2][pojemnik_na_znaki[drugiiteratornaw2][liczba_znak[drugiiteratornaw2]]]=='-'))
                 {
                      sumy[drugiiteratornaw2]=sumy[drugiiteratornaw2]+atof(lancuchy[drugiiteratornaw2].SubString(pojemnik_na_znaki[drugiiteratornaw2][liczba_znak[drugiiteratornaw2]],pojemnik_na_znaki[drugiiteratornaw2][liczba_znak[drugiiteratornaw2]+1]-pojemnik_na_znaki[iteratornaw2][liczba_znak[drugiiteratornaw2]]+1).c_str());
                 }
                 if((liczba_znakowEX==poj_na_znaki[drugiiteratornaw2]-1)&&(lancuchy[drugiiteratornaw2][pojemnik_na_znaki[drugiiteratornaw2][liczba_znak[drugiiteratornaw2]]]=='-'))
                 {
                      sumy[drugiiteratornaw2]=sumy[drugiiteratornaw2]+atof(lancuchy[drugiiteratornaw2].SubString(pojemnik_na_znaki[drugiiteratornaw2][liczba_znak[drugiiteratornaw2]],lancuchy[drugiiteratornaw2].Length()-pojemnik_na_znaki[drugiiteratornaw2][liczba_znak[drugiiteratornaw2]]+1).c_str());
                 }
                 liczba_znakowEX++;
                 }
                 while(liczba_znakowEX<poj_na_znaki[drugiiteratornaw2]);
                 if(liczba_znakowEX==poj_na_znaki[drugiiteratornaw2])
                 {
                 liczba_znakowEX=1;
                 }
                 sumy_nawiasow[drugiiteratornaw2]=sumy[drugiiteratornaw2]+sumy_mnozenia_i_dzielenia[drugiiteratornaw2]+DODSUMA[drugiiteratornaw2];
                 ShowMessage(sumy[drugiiteratornaw2]+sumy_mnozenia_i_dzielenia[drugiiteratornaw2]);
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
        ShowMessage(abs(sumawsz));
   }
   else
   {
   ShowMessage(SUMAGW);
   if(SUMAGW==0)
   {
   if(Edit1->Text[1]!='-')
   {
         ShowMessage(AnsiString(sumawsz+suma));
   }
   else
   {
         ShowMessage(AnsiString((-1)*sumawsz));
   }
   }
   else
   {
       ShowMessage(sumawsz*SUMAGW);
   }
   }
   if((Edit1->Text[2]=='|')&&(Edit1->Text[iteratorwb]=='|'))
   {
        ShowMessage(abs(sumawsz));
   }
   }
   }
   }
   }
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



//---------------------------------------------------------------------------


void __fastcall TForm1::Button2Click(TObject *Sender)
{

   int iterator_length=1;
   int pojemnik_na_znaki[100];
   int liczba_znakow=0;
   do
   {
    if(Edit2->Text[iterator_length]=='+')
    {
      pojemnik_na_znaki[liczba_znakow]=iterator_length;
      liczba_znakow++;
    }
    if(Edit2->Text[iterator_length]=='-')
    {
      pojemnik_na_znaki[liczba_znakow]=iterator_length;
      liczba_znakow++;
    }

    iterator_length++;
   }
   while(iterator_length<Edit2->Text.Length());
   int liczba_znakow2=0;
   int skl[100];
   int ilplmin=0;
   do
   {
      if((Edit2->Text[pojemnik_na_znaki[liczba_znakow2]]=='+')&&(liczba_znakow2==0))
      {
         skl[ilplmin]=atof(Edit2->Text.SubString(0,pojemnik_na_znaki[0]-1).c_str());
         ilplmin++;
      }
      if((Edit2->Text[pojemnik_na_znaki[liczba_znakow2]]=='+')&&(liczba_znakow2==liczba_znakow-1))
      {
        skl[ilplmin]=atof(Edit2->Text.SubString(pojemnik_na_znaki[liczba_znakow2]+1,Edit2->Text.Length()-pojemnik_na_znaki[liczba_znakow2]).c_str());
        ilplmin++;
      }
        if((Edit2->Text[pojemnik_na_znaki[liczba_znakow2]]=='-')&&(liczba_znakow2==liczba_znakow-1))
      {
        skl[ilplmin]=atof(Edit2->Text.SubString(pojemnik_na_znaki[liczba_znakow2],Edit2->Text.Length()-pojemnik_na_znaki[liczba_znakow2]+1).c_str());
        ilplmin++;
      }

   liczba_znakow2++;
   }
   while(liczba_znakow2<liczba_znakow);
   int ilplmin2=0;
   int SUMA=0;
   do
   {
       SUMA=SUMA+skl[ilplmin2];


   ilplmin2++;
   }
   while(ilplmin2<ilplmin);
   ShowMessage(SUMA);

     int iterator_length2=1;
   int pojemnik_na_znaki2[100];
   int liczba_znakow3=0;
   do
   {
    if(Edit3->Text[iterator_length2]=='+')
    {
      pojemnik_na_znaki2[liczba_znakow3]=iterator_length2;
      liczba_znakow3++;
    }
    if(Edit3->Text[iterator_length2]=='-')
    {
      pojemnik_na_znaki2[liczba_znakow3]=iterator_length2;
      liczba_znakow3++;
    }
     if(Edit3->Text[iterator_length2]=='*')
    {
      pojemnik_na_znaki2[liczba_znakow3]=iterator_length2;
      liczba_znakow3++;
    }
    if(Edit3->Text[iterator_length2]=='/')
    {
      pojemnik_na_znaki2[liczba_znakow3]=iterator_length2;
      liczba_znakow3++;
    }




    iterator_length2++;
   }
   while(iterator_length2<Edit3->Text.Length());
   int liczba_znakow4=0;
   int SKL[100];
   int ilgwiazdek=0;
   int SUMYMNOZ[100];
   int ilplmin3=0;
   int iloscsklmnoz=0;
   int DODSUM=0;
   do
   {
      if((Edit3->Text[pojemnik_na_znaki2[liczba_znakow4]]=='+')&&(liczba_znakow4==0))
      {
         SKL[ilplmin3]=atof(Edit3->Text.SubString(0,pojemnik_na_znaki2[0]-1).c_str());
         ilplmin3++;
      }
       if((Edit3->Text[pojemnik_na_znaki2[liczba_znakow4]]=='+')&&(liczba_znakow4==0))
      {
         DODSUM=atof(Edit3->Text.SubString(pojemnik_na_znaki2[liczba_znakow4]+1,pojemnik_na_znaki2[liczba_znakow4+1]-pojemnik_na_znaki2[liczba_znakow4]-1).c_str());
        
      }
      if((Edit3->Text[pojemnik_na_znaki2[liczba_znakow4]]=='+')&&(liczba_znakow4==liczba_znakow3-1))
      {
        SKL[ilplmin3]=atof(Edit3->Text.SubString(pojemnik_na_znaki2[liczba_znakow4]+1,Edit3->Text.Length()-pojemnik_na_znaki2[liczba_znakow4]).c_str());
        ilplmin3++;
      }
        if((Edit3->Text[pojemnik_na_znaki2[liczba_znakow4]]=='-')&&(liczba_znakow4==liczba_znakow3-1))
      {
        SKL[ilplmin3]=atof(Edit3->Text.SubString(pojemnik_na_znaki2[liczba_znakow4],Edit3->Text.Length()-pojemnik_na_znaki2[liczba_znakow4]+1).c_str());
        ilplmin3++;
      }
       if((Edit3->Text[pojemnik_na_znaki2[liczba_znakow4]]=='*')&&(liczba_znakow4==0))
      {
         SUMYMNOZ[iloscsklmnoz]=atof(Edit3->Text.SubString(0,pojemnik_na_znaki2[0]-1).c_str());
         ilgwiazdek++;
      }
        if((Edit3->Text[pojemnik_na_znaki2[liczba_znakow4]]=='*')&&(ilgwiazdek==0)&&(liczba_znakow4!=0))
      {
         SUMYMNOZ[iloscsklmnoz]=atof(Edit3->Text.SubString(pojemnik_na_znaki2[liczba_znakow4-1]+1,pojemnik_na_znaki2[liczba_znakow4]-pojemnik_na_znaki2[liczba_znakow4-1]-1).c_str());
         ilgwiazdek++;
      }
         if((Edit3->Text[pojemnik_na_znaki2[liczba_znakow4]]=='*')&&(ilgwiazdek>0))
      {
         SUMYMNOZ[iloscsklmnoz]=SUMYMNOZ[iloscsklmnoz]*atof(Edit3->Text.SubString(pojemnik_na_znaki2[liczba_znakow4]+1,pojemnik_na_znaki2[liczba_znakow4+1]-pojemnik_na_znaki2[liczba_znakow4]-1).c_str());
         ilgwiazdek++;
      }
      if(liczba_znakow4>0)
      {
      if((Edit3->Text[pojemnik_na_znaki2[liczba_znakow4]]!='*')&&(Edit3->Text[pojemnik_na_znaki2[liczba_znakow4]]!='/')&&(Edit3->Text[pojemnik_na_znaki2[liczba_znakow4-1]]!='+')&&(Edit3->Text[pojemnik_na_znaki2[liczba_znakow4-1]]!='-'))
      {
        iloscsklmnoz++;
        ilgwiazdek=0;

      }
      }
   liczba_znakow4++;
   }
   while(liczba_znakow4<liczba_znakow3);
   int iloscsklmnoz2=0;
   int SUMAMN=0;
   if(iloscsklmnoz!=0)
   {
   do
   {

        SUMAMN=SUMAMN+SUMYMNOZ[iloscsklmnoz2];




    iloscsklmnoz2++;
   }
   while(iloscsklmnoz2<iloscsklmnoz);
   }
   int ilplmin4=0;
   int SUMA2=0;
   do
   {
       SUMA2=SUMA2+SKL[ilplmin4];


   ilplmin4++;
   }
   while(ilplmin4<ilplmin3);
   ShowMessage(SUMA2);

   if((liczba_znakow3==0)&&(liczba_znakow==0))
   {


     if(atoi(Edit2->Text.c_str())>atoi(Edit3->Text.c_str()))
   {
       ShowMessage("Falsz");

   }
   else
   {
      ShowMessage("Prawda");

   }
   }
    else
    {
       if(SUMA<SUMA2+SUMAMN+DODSUM)
       {
         ShowMessage("PRAWDA");


       }
       else
       {
         ShowMessage("FALSZ");

       }

    }
}
//---------------------------------------------------------------------------
