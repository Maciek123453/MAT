object Form3: TForm3
  Left = 141
  Top = 618
  Width = 1305
  Height = 552
  Caption = 'Form3'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 432
    Top = 152
    Width = 22
    Height = 13
    Caption = 'LIM'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 432
    Top = 176
    Width = 18
    Height = 13
    Caption = 'x->'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label3: TLabel
    Left = 448
    Top = 216
    Width = 27
    Height = 13
    Caption = 'F'#39'(X)'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label4: TLabel
    Left = 832
    Top = 208
    Width = 59
    Height = 13
    Caption = 'Przedzial1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label5: TLabel
    Left = 832
    Top = 232
    Width = 59
    Height = 13
    Caption = 'Przedzial2'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label6: TLabel
    Left = 120
    Top = 88
    Width = 31
    Height = 16
    Caption = 'Obw'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object TLabel
    Left = 120
    Top = 112
    Width = 5
    Height = 16
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label7: TLabel
    Left = 136
    Top = 112
    Width = 11
    Height = 16
    Caption = 'P'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label8: TLabel
    Left = 136
    Top = 40
    Width = 10
    Height = 16
    Caption = 'a'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label9: TLabel
    Left = 136
    Top = 64
    Width = 10
    Height = 16
    Caption = 'b'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label10: TLabel
    Left = 56
    Top = 368
    Width = 22
    Height = 16
    Caption = 'f(x)'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label11: TLabel
    Left = 40
    Top = 400
    Width = 39
    Height = 16
    Caption = 'Punkt'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Button1: TButton
    Left = 472
    Top = 176
    Width = 75
    Height = 25
    Caption = 'Oblicz'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 0
    OnClick = Button1Click
  end
  object Edit1: TEdit
    Left = 472
    Top = 152
    Width = 313
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 1
  end
  object Edit2: TEdit
    Left = 448
    Top = 176
    Width = 25
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 2
  end
  object Edit3: TEdit
    Left = 472
    Top = 208
    Width = 313
    Height = 21
    TabOrder = 3
  end
  object Button2: TButton
    Left = 472
    Top = 232
    Width = 75
    Height = 25
    Caption = 'Oblicz'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 4
  end
  object Button3: TButton
    Left = 472
    Top = 264
    Width = 129
    Height = 25
    Caption = 'Oblicz maksimum'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 5
  end
  object Button4: TButton
    Left = 608
    Top = 264
    Width = 129
    Height = 25
    Caption = 'Oblicz minimum'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 6
  end
  object Edit4: TEdit
    Left = 896
    Top = 208
    Width = 41
    Height = 21
    TabOrder = 7
  end
  object Edit5: TEdit
    Left = 896
    Top = 232
    Width = 41
    Height = 21
    TabOrder = 8
  end
  object Button5: TButton
    Left = 464
    Top = 400
    Width = 289
    Height = 25
    Caption = 'Jak naszkicowac wykres funkcji?'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 9
  end
  object Edit6: TEdit
    Left = 464
    Top = 376
    Width = 289
    Height = 21
    TabOrder = 10
  end
  object Edit7: TEdit
    Left = 152
    Top = 88
    Width = 121
    Height = 21
    TabOrder = 11
  end
  object Edit8: TEdit
    Left = 152
    Top = 112
    Width = 121
    Height = 21
    TabOrder = 12
  end
  object Button6: TButton
    Left = 56
    Top = 144
    Width = 249
    Height = 25
    Caption = 'Oblicz najmniejsze pole prostokata'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 13
  end
  object Button7: TButton
    Left = 56
    Top = 176
    Width = 249
    Height = 25
    Caption = 'Oblicz najwieksze pole prostokata'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 14
  end
  object Button8: TButton
    Left = 56
    Top = 208
    Width = 249
    Height = 25
    Caption = 'Oblicz najmniejszy obwod prostokata'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 15
  end
  object Button9: TButton
    Left = 56
    Top = 240
    Width = 249
    Height = 25
    Caption = 'Oblicz najwiekszy obwod prostokata'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 16
  end
  object Edit9: TEdit
    Left = 152
    Top = 40
    Width = 121
    Height = 21
    TabOrder = 17
  end
  object Edit10: TEdit
    Left = 152
    Top = 64
    Width = 121
    Height = 21
    TabOrder = 18
  end
  object Button10: TButton
    Left = 80
    Top = 432
    Width = 217
    Height = 25
    Caption = 'Wyznacz styczna'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 19
  end
  object Edit11: TEdit
    Left = 80
    Top = 368
    Width = 217
    Height = 21
    TabOrder = 20
  end
  object TEdit
    Left = 80
    Top = 400
    Width = 217
    Height = 21
    TabOrder = 21
  end
end
