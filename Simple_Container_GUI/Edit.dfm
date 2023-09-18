object EditForm: TEditForm
  Left = 0
  Top = 0
  Caption = 'Operations on Array'
  ClientHeight = 262
  ClientWidth = 419
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 20
    Top = 27
    Width = 109
    Height = 13
    Caption = 'Enter Element'#39's Index:'
  end
  object Label2: TLabel
    Left = 22
    Top = 62
    Width = 107
    Height = 13
    Caption = 'Enter Element'#39's Value:'
  end
  object Label3: TLabel
    Left = 20
    Top = 132
    Width = 107
    Height = 13
    Caption = 'Enter Element'#39's Value:'
  end
  object Label4: TLabel
    Left = 20
    Top = 97
    Width = 109
    Height = 13
    Caption = 'Enter Element'#39's Index:'
  end
  object SearchByIndex: TEdit
    Left = 135
    Top = 24
    Width = 121
    Height = 21
    NumbersOnly = True
    TabOrder = 0
  end
  object SearchByIButton: TButton
    Left = 262
    Top = 22
    Width = 132
    Height = 25
    Caption = 'Search Element Value'
    TabOrder = 1
    OnClick = SearchByIButtonClick
  end
  object SearchValueEdit: TEdit
    Left = 135
    Top = 59
    Width = 121
    Height = 21
    TabOrder = 2
  end
  object SearchByValueBtn: TButton
    Left = 262
    Top = 57
    Width = 132
    Height = 25
    Caption = 'Search Element Index'
    TabOrder = 3
    OnClick = SearchByValueButtonClick
  end
  object DeleteByValueEdit: TEdit
    Left = 133
    Top = 129
    Width = 121
    Height = 21
    TabOrder = 4
  end
  object DeleteButton: TButton
    Left = 260
    Top = 127
    Width = 132
    Height = 25
    Caption = 'Delete By Value'
    TabOrder = 5
    OnClick = DeleteButtonClick
  end
  object DisplayButton: TButton
    Left = 20
    Top = 168
    Width = 107
    Height = 29
    Caption = 'Display Container'
    TabOrder = 6
    OnClick = DisplayButtonClick
  end
  object largeButton: TButton
    Left = 133
    Top = 168
    Width = 123
    Height = 29
    Caption = 'Largest Number'
    TabOrder = 7
    OnClick = largeButtonClick
  end
  object smallButton: TButton
    Left = 133
    Top = 215
    Width = 123
    Height = 29
    Caption = 'Smallest Number'
    TabOrder = 8
    OnClick = smallButtonClick
  end
  object SumButton: TButton
    Left = 262
    Top = 168
    Width = 130
    Height = 29
    Caption = 'Sum Elements'
    TabOrder = 9
    OnClick = SumButtonClick
  end
  object MultButton: TButton
    Left = 262
    Top = 215
    Width = 130
    Height = 29
    Caption = 'Multiply Elements'
    TabOrder = 10
    OnClick = MultButtonClick
  end
  object DeleteByIndexEdit: TEdit
    Left = 135
    Top = 94
    Width = 121
    Height = 21
    TabOrder = 11
  end
  object Button1: TButton
    Left = 262
    Top = 92
    Width = 132
    Height = 25
    Caption = 'Delete By Index'
    TabOrder = 12
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 22
    Top = 215
    Width = 105
    Height = 29
    Caption = 'Insertion Sort'
    TabOrder = 13
    OnClick = Button2Click
  end
end
