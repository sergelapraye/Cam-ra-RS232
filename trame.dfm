object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 300
  ClientWidth = 617
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Zoom: TLabel
    Left = 280
    Top = 192
    Width = 26
    Height = 13
    Caption = 'Zoom'
  end
  object Deplacement: TLabel
    Left = 408
    Top = 56
    Width = 75
    Height = 13
    Caption = 'Deplacement'
  end
  object Droite: TButton
    Left = 481
    Top = 112
    Width = 75
    Height = 25
    Caption = '->'
    TabOrder = 0
    OnClick = DroiteClick
  end
  object Gauche: TButton
    Left = 319
    Top = 112
    Width = 75
    Height = 25
    Caption = '<-'
    TabOrder = 1
    OnClick = GaucheClick
  end
  object Bas: TButton
    Left = 400
    Top = 143
    Width = 75
    Height = 25
    Caption = 'Bas'
    TabOrder = 2
    OnClick = BasClick
  end
  object Haut: TButton
    Left = 400
    Top = 81
    Width = 75
    Height = 25
    Caption = 'Haut'
    TabOrder = 3
    OnClick = HautClick
  end
  object Mode_automatique: TButton
    Left = 176
    Top = 106
    Width = 113
    Height = 37
    Caption = 'Mode automatique'
    TabOrder = 4
    OnClick = Mode_automatiqueClick
  end
  object ON: TButton
    Left = 72
    Top = 96
    Width = 75
    Height = 25
    Caption = 'ON'
    TabOrder = 5
    OnClick = ONClick
  end
  object OFF: TButton
    Left = 72
    Top = 127
    Width = 75
    Height = 25
    Caption = 'OFF'
    TabOrder = 6
    OnClick = OFFClick
  end
  object Stop: TButton
    Left = 400
    Top = 112
    Width = 75
    Height = 25
    Caption = 'Stop'
    TabOrder = 7
    OnClick = StopClick
  end
  object ZoomPlus: TButton
    Left = 344
    Top = 211
    Width = 75
    Height = 25
    Caption = '+'
    TabOrder = 8
    OnClick = ZoomPlusClick
  end
  object ZoomStop: TButton
    Left = 255
    Top = 211
    Width = 75
    Height = 25
    Caption = 'Stop'
    TabOrder = 9
    OnClick = ZoomStopClick
  end
  object ZoomMoins: TButton
    Left = 168
    Top = 211
    Width = 75
    Height = 25
    Caption = '-'
    TabOrder = 10
    OnClick = ZoomMoinsClick
  end
end
