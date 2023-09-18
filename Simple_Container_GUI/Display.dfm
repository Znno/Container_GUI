object DisplayForm: TDisplayForm
  Left = 0
  Top = 0
  Caption = 'Container Elements'
  ClientHeight = 328
  ClientWidth = 309
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object DisplayArrayList: TListBox
    Left = 8
    Top = 8
    Width = 289
    Height = 275
    ItemHeight = 13
    TabOrder = 0
  end
  object RefreshButton: TButton
    Left = 72
    Top = 289
    Width = 153
    Height = 31
    Caption = 'Refresh'
    TabOrder = 1
    OnClick = RefreshButtonClick
  end
end
