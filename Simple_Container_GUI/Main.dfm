object ArrayForm: TArrayForm
  Left = 0
  Top = 0
  Caption = 'Simple Container System'
  ClientHeight = 201
  ClientWidth = 371
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object ArraySizeLbl: TLabel
    Left = 8
    Top = 36
    Width = 122
    Height = 16
    Caption = 'Enter Container Size:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object SizeEdit: TEdit
    Left = 136
    Top = 35
    Width = 145
    Height = 21
    TabOrder = 0
  end
  object SetSizeButton: TButton
    Left = 288
    Top = 32
    Width = 75
    Height = 27
    Caption = 'Set Size'
    TabOrder = 1
    OnClick = SetSizeButtonClick
  end
  object CreateButton: TButton
    Left = 8
    Top = 80
    Width = 169
    Height = 41
    Caption = 'Create Container'
    Enabled = False
    TabOrder = 2
    OnClick = CreateButtonClick
  end
  object EditButton: TButton
    Left = 194
    Top = 80
    Width = 169
    Height = 41
    Caption = 'Edit Container'
    Enabled = False
    TabOrder = 3
    OnClick = EditButtonClick
  end
  object Button1: TButton
    Left = 136
    Top = 127
    Width = 105
    Height = 41
    Caption = 'Clear Container'
    Enabled = False
    TabOrder = 4
    OnClick = Button1Click
  end
end
