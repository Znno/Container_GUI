object CreateForm: TCreateForm
  Left = 0
  Top = 0
  Caption = 'Create Container'
  ClientHeight = 286
  ClientWidth = 295
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object ElementValueLbl: TLabel
    Left = 32
    Top = 24
    Width = 107
    Height = 13
    Caption = 'Enter Element'#39's Value:'
  end
  object ValueEdit: TEdit
    Left = 32
    Top = 43
    Width = 154
    Height = 21
    TabOrder = 0
  end
  object AddButton: TButton
    Left = 192
    Top = 41
    Width = 75
    Height = 25
    Caption = 'Add'
    TabOrder = 1
    OnClick = AddButtonClick
  end
  object ArrayList: TListBox
    Left = 32
    Top = 72
    Width = 235
    Height = 201
    ItemHeight = 13
    TabOrder = 2
  end
end
