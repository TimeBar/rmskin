[SettingsE]
Meter=String
MeterStyle=Side
Text=Style
Hidden=0
Y=(120)*#scaledpi#
x=(30)*#scaledpi#




[Tran]
ImageName=#@#\tran.png
w=(24)*#scaledpi#
h=(24)*#scaledpi#
x=r
y=(22)*#scaledpi#R


[T1]
Meter=Image
MeterStyle=Tran
x=(433)*#scaledpi#
y=(81)*#scaledpi#


[T2]
Meter=Image
MeterStyle=Tran

[T3]
Meter=Image
MeterStyle=Tran
y=(21)*#scaledpi#R


[T4]
Meter=Image
MeterStyle=Tran

[DarkMode]
Meter=String
MeterStyle=DefaultLabel
Text=Let me Style it
Y=(40)*#scaledpi#
[DarkMode1]
Meter=Image
MeterStyle=CheckboxBg

[DarkMode2]
Meter=Image
ImageName=#@#\Graphics\Gallery\on#OnOff##DarkMode##ttgallerystyle#.png
MeterStyle=Checkbox
LeftMouseUpAction=[!WriteKeyValue Variables DarkMode 0 "#@#\Global.inc"][!WriteKeyValue Variables LetMeStyleIt 0 "#@#\Global.inc"][!Refresh #currentconfig#]

[DarkMode3]
Meter=Image
ImageName=#@#\Graphics\Gallery\off#OnOff##DarkMode##ttgallerystyle#.png
MeterStyle=Checkbox
y=R
LeftMouseUpAction=[!WriteKeyValue Variables DarkMode 1 "#@#\Global.inc"][!WriteKeyValue Variables LetMeStyleIt 1 "#@#\Global.inc"][!Refresh #currentconfig#]
Hidden=#DarkMode#





[BlockStyle]
H=(15)*#scaledpi#
W=(35)*#scaledpi#
Fontcolor=255,255,255,100
FontSize=(11)*#scaledpi#
StringAlign=centercenter
Padding=(5)*#scaledpi#,(5)*#scaledpi#,(5)*#scaledpi#,(5)*#scaledpi#
Antialias=1
SolidColor=255,255,255,30
MouseActionCursor=1
MouseOverAction=[!SetOption #CURRENTSECTION# SolidColor "255,255,255,60"][!Update]
MouseLeaveAction=[!SetOption #CURRENTSECTION# SolidColor "255,255,255,30"][!Update]



[ArrowStyle]
ImageName=#@#\Graphics\down.png
w=(40)*#scaledpi#
MouseOverAction=[!SetOption #CURRENTSECTION# ImageAlpha 255][!Update]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageAlpha 180][!Update]
ImageTint=#arrowcolor#
ImageAlpha=180


[ArrowStyleMini]
ImageName=#@#\Graphics\downmini.png
w=(25)*#scaledpi#
MouseOverAction=[!SetOption #CURRENTSECTION# ImageAlpha 255][!Update]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageAlpha 180][!Update]
ImageTint=#arrowcolor#
ImageAlpha=180


[BarC]
Meter=String
MeterStyle=DefaultLabel
Text=Bar Padding & Color








[BarD]
Meter=String
MeterStyle=DefaultLabel
Text=Active Bar Blur & Color
Y=(130)*#scaledpi#



[UseBlur1]
Meter=Image
MeterStyle=CheckboxBg
ToolTipText=Note: Enabling Blur may cause performance issues in rare cases
[UseBlur2]
Meter=Image
ImageName=#@#\Graphics\Gallery\on#OnOff##UseBlur##ttgallerystyle#.png
MeterStyle=Checkbox
LeftMouseUpAction=[!WriteKeyValue Variables UseBlur 0 "#@#\Global.inc"][!WriteKeyValue Variables Blur None "#@#\Global.inc"][!Refresh #currentconfig#][!Refresh "TimeBar\Blur"]

[UseBlur3]
Meter=Image
ImageName=#@#\Graphics\Gallery\off#OnOff##UseBlur##ttgallerystyle#.png
MeterStyle=Checkbox
y=R
LeftMouseUpAction=[!WriteKeyValue Variables UseBlur 1 "#@#\Global.inc"][!WriteKeyValue Variables Blur 1 "#@#\Global.inc"][!Refresh #currentconfig#][!Refresh "TimeBar\Blur"]
Hidden=#UseBlur#





[BarE]
Meter=String
MeterStyle=DefaultLabel
Text=Line Width & Color



[BarF]
Meter=String
MeterStyle=DefaultLabel
Text=Font Scale & Color
Y=(220)*#scaledpi#



[AnalogueClock]
Meter=String
MeterStyle=DefaultLabel
Text=Analogue Clock
Y=(264)*#scaledpi#



[AnalogueClock1]
Meter=Image
MeterStyle=CheckboxBg

[AnalogueClock2]
Meter=Image
ImageName=#@#\Graphics\Gallery\on#OnOff##AnalogueClock##ttgallerystyle#.png
MeterStyle=Checkbox
LeftMouseUpAction=[!WriteKeyValue Variables HideAnalogClock 1 "#@#\Global.inc"][!WriteKeyValue Variables AnalogueClock 0 "#@#\Global.inc"][!Refresh #currentconfig#][!HideMeterGroup Analog "TimeBar"][!DisableMeasure MeasureTimeA "TimeBar"][!Update "TimeBar"]

[AnalogueClock3]
Meter=Image
ImageName=#@#\Graphics\Gallery\off#OnOff##AnalogueClock##ttgallerystyle#.png
MeterStyle=Checkbox
y=R
LeftMouseUpAction=[!WriteKeyValue Variables HideAnalogClock 0 "#@#\Global.inc"][!WriteKeyValue Variables AnalogueClock 1 "#@#\Global.inc"][!Refresh #currentconfig#][!ShowMeterGroup Analog "TimeBar"][!EnableMeasure MeasureTimeA "TimeBar"][!Update "TimeBar"]
Hidden=#AnalogueClock#





[UpPadding]
Meter=Image
MeterStyle=ArrowStyle
x=(379)*#scaledpi#
Y=(63)*#scaledpi#
imageFlip=vertical
LeftMouseUpAction=[!WriteKeyValue Variables Padding "(#Padding#+1)" "#@#\Global.inc"][!Refresh *]


[TextPadding]
Meter=String
MeterStyle=BlockStyle
Text=#Padding#
x=(-20)*#scaledpi#R
y=(2)*#scaledpi#R
ToolTipText=Minimum 0, Maximum 100

[ColorPadding]
Meter=String
MeterStyle=BlockStyle
solidcolor=#ColorBar#,#OpacityBar#
MouseLeaveAction=
MouseOverAction=
x=R
y=r
LeftMouseUpAction=!execute ["#ADDONSPATH#RainRGB\RainRGB.exe" "VarName=ColorBar" "FileName=#@#Global.inc"]
W=(15)*#scaledpi#
[DownPadding]
Meter=Image
MeterStyle=ArrowStyle
x=(-65)*#scaledpi#r
y=(3)*#scaledpi#r
LeftMouseUpAction=[!WriteKeyValue Variables Padding "(#Padding#-1)" "#@#\Global.inc"][!Refresh *]












[UpBarLine]
Meter=Image
MeterStyle=ArrowStyle
x=(379)*#scaledpi#
Y=(153)*#scaledpi#
imageFlip=vertical
LeftMouseUpAction=[!WriteKeyValue Variables LineWidth "(#LineWidth#+1)" "#@#\Global.inc"][!Refresh *]


[TextBarLine]
Meter=String
MeterStyle=BlockStyle
Text=#LineWidth#
x=(-20)*#scaledpi#R
y=(2)*#scaledpi#R
ToolTipText=Minimum 1, Maximum 20

[ColorLine]
Meter=String
MeterStyle=BlockStyle
solidcolor=#ColorLine#,#OpacityLine#
MouseLeaveAction=
MouseOverAction=
x=R
y=r
LeftMouseUpAction=!execute ["#ADDONSPATH#RainRGB\RainRGB.exe" "VarName=ColorLine" "FileName=#@#Global.inc"]
W=(15)*#scaledpi#

[DownBarLine]
Meter=Image
MeterStyle=ArrowStyle
x=(-65)*#scaledpi#r
y=(3)*#scaledpi#r
LeftMouseUpAction=[!WriteKeyValue Variables LineWidth "(#LineWidth#-1)" "#@#\Global.inc"][!Refresh *]








[TextBarFont]
Meter=String
MeterStyle=BlockStyle
Text=#FontScale#%
LeftMouseUpAction=!execute [!CommandMeasure "MeasureInput" "ExecuteBatch 1"]
MouseActionCursor=1
x=(-20)*#scaledpi#R
y=(15)*#scaledpi#R
ToolTipText=Minimum 50%, Maximum 150%


[ColorFont]
Meter=String
MeterStyle=BlockStyle
solidcolor=#ColorFont#,#OpacityFont#
MouseLeaveAction=
MouseOverAction=
x=R
y=r
LeftMouseUpAction=!execute ["#ADDONSPATH#RainRGB\RainRGB.exe" "VarName=ColorFont" "FileName=#@#Global.inc"]
W=(15)*#scaledpi#



[T5]
Meter=Image
MeterStyle=Tran
x=(432)*#scaledpi#
y=(126)*#scaledpi#

[ColorActiveBar]
Meter=String
MeterStyle=BlockStyle
solidcolor=#ColorActiveBar#,#OpacityActiveBar#
MouseLeaveAction=
MouseOverAction=
x=(444)*#scaledpi#
y=(138)*#scaledpi#
LeftMouseUpAction=!execute ["#ADDONSPATH#RainRGB\RainRGB.exe" "VarName=ColorActiveBar" "FileName=#@#Global.inc"]
W=(15)*#scaledpi#



[UpActiveBarOpacity]
Meter=Image
MeterStyle=ArrowStyleMini
x=-5R
Y=-18r
imageFlip=vertical
LeftMouseUpAction=[!WriteKeyValue Variables OpacityActiveBar "(#OpacityActiveBar#+15)" "#@#\Global.inc"][!Refresh *]
ToolTipText=Increase Opacity

[DownActiveBarOpacity]
Meter=Image
MeterStyle=ArrowStyleMini
x=r
y=R
LeftMouseUpAction=[!WriteKeyValue Variables OpacityActiveBar "(#OpacityActiveBar#-15)" "#@#\Global.inc"][!Refresh *]
ToolTipText=Decrease Opacity






[UpLineOpacity]
Meter=Image
MeterStyle=ArrowStyleMini
x=r
y=(165)*#scaledpi#
imageFlip=vertical
LeftMouseUpAction=[!WriteKeyValue Variables OpacityLine "(#OpacityLine#+25)" "#@#\Global.inc"][!Refresh *]
ToolTipText=Increase Opacity

[DownLineOpacity]
Meter=Image
MeterStyle=ArrowStyleMini
x=r
y=R
LeftMouseUpAction=[!WriteKeyValue Variables OpacityLine "(#OpacityLine#-25)" "#@#\Global.inc"][!Refresh *]
ToolTipText=Decrease Opacity





[UpFontOpacityFont]
Meter=Image
MeterStyle=ArrowStyleMini
x=r
y=(210)*#scaledpi#
imageFlip=vertical
LeftMouseUpAction=[!WriteKeyValue Variables OpacityFont "(#OpacityFont#+25)" "#@#\Global.inc"][!Refresh *]
ToolTipText=Increase Opacity

[DownFontOpacityFont]
Meter=Image
MeterStyle=ArrowStyleMini
x=r
y=R
LeftMouseUpAction=[!WriteKeyValue Variables OpacityFont "(#OpacityFont#-25)" "#@#\Global.inc"][!Refresh *]
ToolTipText=Decrease Opacity





[UpBarOpacityBar]
Meter=Image
MeterStyle=ArrowStyleMini
x=r
y=(74)*#scaledpi#
imageFlip=vertical
LeftMouseUpAction=[!WriteKeyValue Variables OpacityBar "(#OpacityBar#+15)" "#@#\Global.inc"][!Refresh *]
ToolTipText=Increase Opacity

[DownBarOpacityBar]
Meter=Image
MeterStyle=ArrowStyleMini
x=r
y=R
LeftMouseUpAction=[!WriteKeyValue Variables OpacityBar "(#OpacityBar#-15)" "#@#\Global.inc"][!Refresh *]
ToolTipText=Decrease Opacity




[UpClockSizeFont]
Meter=Image
MeterStyle=ArrowStyleMini
x=r
y=(256)*#scaledpi#
imageFlip=vertical
LeftMouseUpAction=[!WriteKeyValue Variables AnalogClockSize "(#AnalogClockSize#+25)" "#@#\Global.inc"][!Refresh *]
ToolTipText=Increase Size

[DownClockSizeFont]
Meter=Image
MeterStyle=ArrowStyleMini
x=r
y=R
LeftMouseUpAction=[!WriteKeyValue Variables AnalogClockSize "(#AnalogClockSize#-25)" "#@#\Global.inc"][!Refresh *]
ToolTipText=Decrease Size

[CalcRightAnalogClockSize]
Measure=Calc
Formula=1
IfCondition=((#AnalogClockSize# > 500) || (#AnalogClockSize# < 50))
IfTrueAction=[!WriteKeyValue Variables AnalogClockSize "150" "#@#\Global.inc"][!Refresh *]
DynamicVariables=1



[CalcRightOpacityFont]
Measure=Calc
Formula=1
IfCondition=((#OpacityFont# > 256) || (#OpacityFont# < 50))
IfTrueAction=[!WriteKeyValue Variables OpacityFont "255" "#@#\Global.inc"][!Refresh *]
DynamicVariables=1



[CalcRightOpacityActiveBar]
Measure=Calc
Formula=1
IfCondition=((#OpacityActiveBar# > 256) || (#OpacityActiveBar# < -1))
IfTrueAction=[!WriteKeyValue Variables OpacityActiveBar "0" "#@#\Global.inc"][!Refresh *]
DynamicVariables=1


[CalcRightOpacityBar]
Measure=Calc
Formula=1
IfCondition=((#OpacityBar# > 256) || (#OpacityBar# < 0))
IfTrueAction=[!WriteKeyValue Variables OpacityBar "0" "#@#\Global.inc"][!Refresh *]
DynamicVariables=1




[CalcRightOpacityLine]
Measure=Calc
Formula=1
IfCondition=((#OpacityLine# > 256) || (#OpacityLine# < 50))
IfTrueAction=[!WriteKeyValue Variables OpacityLine "255" "#@#\Global.inc"][!Refresh *]
DynamicVariables=1


[CalcRightFontScale]
Measure=Calc
Formula=1
IfCondition=((#FontScale# > 150) || (#FontScale# < 50))
IfTrueAction=[!WriteKeyValue Variables FontScale "100" "#@#\Global.inc"][!Refresh *]
DynamicVariables=1


[CalcRightLineWidth]
Measure=Calc
Formula=1
IfCondition=((#LineWidth# > 20) || (#LineWidth# < 0))
IfTrueAction=[!WriteKeyValue Variables LineWidth "3" "#@#\Global.inc"][!Refresh *]
DynamicVariables=1

[CalcRightPadding]
Measure=Calc
Formula=1
IfCondition=((#Padding# > 100) || (#Padding# < -1))
IfTrueAction=[!WriteKeyValue Variables Padding "3" "#@#\Global.inc"][!Refresh *]
DynamicVariables=1



[MeasureInput]
Measure=Plugin
Plugin=InputText
SolidColor=#WindowColor#
FontColor=255,255,255,255
AntiAlias=1
FocusDismiss=1
FontSize=(11)*#scaledpi#
stringalign=center
x=(380)*#scaledpi#
y=(218)*#scaledpi#
InputNumber=1
H=(23)*#scaledpi#
W=(40)*#scaledpi#
DefaultValue="#FontScale#"
Command1=[!WriteKeyValue Variables FontScale "$UserInput$" "#@#Global.inc"][!Refresh *]




[SolidStyle]
Meter=string
Y=(72)*#scaledpi#
x=(200)*#scaledpi#
w=(286)*#scaledpi#
h=(245)*#scaledpi#
solidcolor=#windowcolor#,200
Hidden=#LetMeStyleIt#




[REset]
meter=image
ImageName=#@#\reset.png
w=(20)*#scaledpi#
x=(465)*#scaledpi#
y=(41)*#scaledpi#
ToolTipText=Reset all styling
MouseActionCursor=1
LeftMouseUpAction=[!WriteKeyValue Variables ColorBar "0,0,0" "#@#\Global.inc"][!WriteKeyValue Variables ColorActiveBar "255,255,255" "#@#\Global.inc"][!WriteKeyValue Variables ColorLine "255,255,255" "#@#\Global.inc"][!WriteKeyValue Variables ColorFont "255,255,255" "#@#\Global.inc"][!WriteKeyValue Variables Padding "2" "#@#\Global.inc"][!WriteKeyValue Variables OpacityBar "15" "#@#\Global.inc"][!WriteKeyValue Variables OpacityActiveBar "30" "#@#\Global.inc"][!WriteKeyValue Variables OpacityLine "255" "#@#\Global.inc"][!WriteKeyValue Variables OpacityFont "255" "#@#\Global.inc"][!WriteKeyValue Variables AnalogClockSize "150" "#@#\Global.inc"][!WriteKeyValue Variables LineWidth "3" "#@#\Global.inc"][!WriteKeyValue Variables HideClock "0" "#@#\Global.inc"][!WriteKeyValue Variables HideDate "0" "#@#\Global.inc"][!WriteKeyValue Variables Blur "None" "#@#\Global.inc"][!WriteKeyValue Variables UseBlur "0" "#@#\Global.inc"][!WriteKeyValue Variables AnalogueClock "0" "#@#\Global.inc"][!WriteKeyValue Variables HideAnalogClock "1" "#@#\Global.inc"][!WriteKeyValue Variables FontScale "100" "#@#\Global.inc"][!Refresh *]