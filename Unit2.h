//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
        TButton *Button1;
        TEdit *Edit1;
        TButton *Button2;
        TEdit *Edit2;
        TLabel *Label1;
        TEdit *Edit3;
        TButton *Row;
        TMemo *Pisz;
        TEdit *Edit4;
        TLabel *Label2;
        TEdit *Edit5;
        TButton *Button3;
        TLabel *Label3;
        TEdit *Edit6;
        TEdit *Edit7;
        TButton *Button4;
        TButton *Button5;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
