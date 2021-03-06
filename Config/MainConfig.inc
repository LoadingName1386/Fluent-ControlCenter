;----------------------------------------------------
; # # DO NOT REMOVE ANYTHING FROM THIS SECTION # # # 
;----------------------------------------------------

[Rainmeter]
Group=[#CustomAppGroup[#CustomAppPosition]]
LeftMouseDownAction=[]

DefaultSavePosition=0
DefaultAlwaysOnTop=1
DefaultDraggable=0
DefaultSnapEdges=1
DefaultStartHidden=1
DefaultAlphaValue=255
DefaultHideOnMouseOver=0
DefaultFadeDuration=105
DefaultClickThrough=0
DefaultKeepOnScreen=1
DefaultAutoSelectScreen=1

[Variables]
@IncludeControl=#SKINSPATH#Droptop\@Resources\GlobalVar\Control.inc
@IncludeUserSettings=#SKINSPATH#Droptop\@Resources\GlobalVar\UserSettings.inc
@IncludeThemeOptions=#SKINSPATH#Droptop\@Resources\Themes\#ThemeNum#Settings.inc
@IncludeThemeDesign=#SKINSPATH#Droptop\@Resources\Themes\#ThemeNum#.inc
@IncludeSystemTrayMeters=#SKINSPATH#Droptop\@Resources\Meters\SystemTrayMeters.inc
@IncludeLanguage=#SKINSPATH#Droptop\@Resources\GlobalVar\Languages\[#Language[#LanguageNum]].inc

@IncludeCustomAppVar1=#SKINSPATH#Droptop Community Apps\Apps\#CustomAppID1#\Variables\Variables.inc
@IncludeCustomAppVar2=#SKINSPATH#Droptop Community Apps\Apps\#CustomAppID2#\Variables\Variables.inc
@IncludeCustomAppVar3=#SKINSPATH#Droptop Community Apps\Apps\#CustomAppID3#\Variables\Variables.inc

Padding0=([#ItemIsFolder[#*CURRENTSECTION*]]=1?#DropdownItemPadding1#:(#HideIcons#=1?#DropdownNoIconPadding#:#DropdownItemPadding1#)),#DropdownItemPaddingY#,(#DropdownItemPadding2#+((10*#DroptopSize#)*#RTLText#)),(#DropdownItemPaddingY#*-1)
Padding1=#DropdownItemPadding2#,#DropdownItemPaddingY#,([#ItemIsFolder[#*CURRENTSECTION*]]=1?#DropdownNoIconPadding#:(#HideIcons#=1?#DropdownNoIconPadding#:#DropdownItemPadding1#)),(#DropdownItemPaddingY#*-1)

; -----------------------------------------

CustomAppPosition=2

; -----------------------------------------

Color0=200,200,210,110
Color1=234,234,240,140
ColorIcon=102,102,102,255
ColorLabel=0,0,0,100

[CurrentAppX]
Measure=Calc
Formula=[#CustomApp[#CustomAppPosition]X]
DynamicVariables=1
UpdateDivider=-1

;----------------------------------------------------
; # # BEGIN EDITING BELOW # # # # # # # # # # # # # #
;----------------------------------------------------

[InfoStyle]
Text=[#ItemText[##CURRENTSECTION#]]
LeftMouseDownAction=[#Action[#ItemIsFolder[##CURRENTSECTION#]]]
Padding=[#Padding[#RTLText]]

[IconStyle]
ImageName=#CURRENTPATH#Icons\[#Icon[#ItemIsFolder[##CURRENTSECTION#]]].png
Hidden=(#NumberOfItems#>=[##CURRENTSECTION#]?0:1)

[ArrowStyleB]
Hidden=(#NumberOfItems#>=[##CURRENTSECTION#]?([#ItemIsFolder[##CURRENTSECTION#]]=1?0:1):1)
Y=[[##CURRENTSECTION#]:Y]

[BoxStyle]
Shape=Rectangle #DropdownMenuCutout#,(#DropdownMenuCutout#+(3*#DroptopSize#)),(#DropdownMenuWidth#+2-(#DropdownMenuCutout#*2)),(([#BoxHeight[##CURRENTSECTION#]]*#DroptopSize#)-(#DropdownMenuCutout#*2)),#DropdownBGCorner# | Fill Color #DropdownBGColor1#,(#DropdownMenuOpacity1#<1?1:#DropdownMenuOpacity1#) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #DropdownStrokeColor#
Hidden=(#NumberOfBoxes#>=[##CURRENTSECTION#]?0:1)
Y=[Box[#BoxPosition[##CURRENTSECTION#]]:YH]

[TextStyle]
FontColor=#DropdownFontColor1#,#DropdownItemOpacity#
FontFace=[#FontName[#AltFont[#LanguageNum]]]
FontSize=#DropdownItemFontSize#
FontWeight=#FontWeight#
AntiAlias=#DropdownAntiAlias#
InlineSetting=CharacterSpacing | #DropdownCharacterSpacing#
W=(#DropdownMenuWidth#-([#CURRENTSECTION#:X]*2))
ClipString=1
