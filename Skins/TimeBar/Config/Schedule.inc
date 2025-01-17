[SettingsE]
Meter=String
MeterStyle=Side
Text=Schedule
Hidden=0
Y=(60)*#scaledpi#
x=(30)*#scaledpi#






[StartAT]
Meter=String
Y=(45)*#scaledpi#
x=(200)*#scaledpi#
MeterStyle=Default
Text=Start Day at



[BlockStyle]
H=(30)*#scaledpi#
W=(30)*#scaledpi#
Fontcolor=255,255,255,100
FontSize=(20)*#scaledpi#
StringAlign=centercenter
Padding=(10)*#scaledpi#,(10)*#scaledpi#,(10)*#scaledpi#,(10)*#scaledpi#
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



[UpHours]
Meter=Image
MeterStyle=ArrowStyle
x=(310)*#scaledpi#
Y=(10)*#scaledpi#
imageFlip=vertical
LeftMouseUpAction=[!WriteKeyValue Variables DayStartHour "(#DayStartHour#+1)" "#@#\Global.inc"][!Refresh *]


[StartDayHours]
Meter=String
MeterStyle=BlockStyle
Text=#DayStartHour#
x=(-20)*#scaledpi#R
y=(20)*#scaledpi#R
LeftMouseUpAction=!execute [!CommandMeasure "MeasureInput1" "ExecuteBatch 1"]

[DownHours]
Meter=Image
MeterStyle=ArrowStyle
x=(-20)*#scaledpi#r
y=(20)*#scaledpi#r
LeftMouseUpAction=[!WriteKeyValue Variables DayStartHour "(#DayStartHour#-1)" "#@#\Global.inc"][!Refresh *]


[UpMinutes]
Meter=Image
MeterStyle=ArrowStyle
x=(365)*#scaledpi#
Y=(10)*#scaledpi#
imageFlip=vertical
LeftMouseUpAction=[!WriteKeyValue Variables DayStartMinute "(#DayStartMinute#+15)" "#@#\Global.inc"][!Refresh *]

[StartDayMinutes]
Meter=String
MeterStyle=BlockStyle
x=(-20)*#scaledpi#R
y=(20)*#scaledpi#R
Text=#DayStartMinute#
LeftMouseUpAction=!execute [!CommandMeasure "MeasureInput2" "ExecuteBatch 1"]

[DownMinutes]
Meter=Image
MeterStyle=ArrowStyle
x=(-20)*#scaledpi#r
y=(20)*#scaledpi#r
LeftMouseUpAction=[!WriteKeyValue Variables DayStartMinute "(#DayStartMinute#-15)" "#@#\Global.inc"][!Refresh *]




[CalcRightMinute]
Measure=Calc
Formula=1
IfCondition=((#DayStartMinute# > 59) || (#DayStartMinute# < 0))
IfTrueAction=[!WriteKeyValue Variables DayStartMinute "00" "#@#\Global.inc"][!Refresh *]
DynamicVariables=1

[CalcRightHour]
Measure=Calc
Formula=1
IfCondition=((#DayStartHour# > 23) || (#DayStartHour# < 0))
IfTrueAction=[!WriteKeyValue Variables DayStartHour "00" "#@#\Global.inc"][!Refresh *]
DynamicVariables=1





[ChunksText]
Meter=String
Y=(145)*#scaledpi#
x=(200)*#scaledpi#
MeterStyle=Default
Text=With Chunks



[UpChunks]
Meter=Image
MeterStyle=ArrowStyle
x=(310)*#scaledpi#
Y=(110)*#scaledpi#
imageFlip=vertical
LeftMouseUpAction=[!WriteKeyValue Variables Segments "(#Segments#+1)" "#@#\Global.inc"][!Refresh *]


[Chunks]
Meter=String
MeterStyle=BlockStyle
x=(-20)*#scaledpi#R
y=(20)*#scaledpi#R
Text=#Segments#
LeftMouseUpAction=!execute [!CommandMeasure "MeasureInput3" "ExecuteBatch 1"]
ToolTipText=Minimum 8, Maximum 12
[DownChunks]
Meter=Image
MeterStyle=ArrowStyle
x=(-20)*#scaledpi#r
y=(20)*#scaledpi#r
LeftMouseUpAction=[!WriteKeyValue Variables Segments "(#Segments#-1)" "#@#\Global.inc"][!Refresh *]


[CalcRightSegment]
Measure=Calc
Formula=1
IfCondition=((#Segments# > 12) || (#Segments# < 8))
IfTrueAction=[!WriteKeyValue Variables Segments "8" "#@#\Global.inc"][!Refresh *]
DynamicVariables=1





[DurationText]
Meter=String
Y=(145)*#scaledpi#
x=(360)*#scaledpi#
MeterStyle=Default
Text=at

[DurationText2]
Meter=String
Y=(145)*#scaledpi#
x=(460)*#scaledpi#
MeterStyle=Default
Text=m.

[UpDuration]
Meter=Image
MeterStyle=ArrowStyle
x=(400)*#scaledpi#
Y=(110)*#scaledpi#
imageFlip=vertical
LeftMouseUpAction=[!WriteKeyValue Variables SegmentDuration "(#SegmentDuration#+10)" "#@#\Global.inc"][!Refresh *]

[Duration]
Meter=String
MeterStyle=BlockStyle
x=(-20)*#scaledpi#R
y=(20)*#scaledpi#R
Text=#SegmentDuration#
W=(50)*#scaledpi#
ToolTipText=Duration of the Chunk in minutes (min 60, max 120)
LeftMouseUpAction=!execute [!CommandMeasure "MeasureInput4" "ExecuteBatch 1"]


[DownDuration]
Meter=Image
MeterStyle=ArrowStyle
x=(-20)*#scaledpi#r
y=(20)*#scaledpi#r
LeftMouseUpAction=[!WriteKeyValue Variables SegmentDuration "(#SegmentDuration#-10)" "#@#\Global.inc"][!Refresh *]

[CalcRightDuration]
Measure=Calc
Formula=1
IfCondition=((#SegmentDuration# > 120) || (#SegmentDuration# < 60))
IfTrueAction=[!WriteKeyValue Variables SegmentDuration "60" "#@#\Global.inc"][!Refresh *]
DynamicVariables=1


[Use12Hour]
Meter=String
MeterStyle=DefaultLabel
Text=Use 24 Hour Time
y=(14)*#scaledpi#R


[Use12Hour1]
Meter=Image
MeterStyle=CheckboxBg

[Use12Hour2]
Meter=Image
ImageName=#@#\Graphics\Gallery\on#OnOff##Use12Hour##ttgallerystyle#.png
MeterStyle=Checkbox
LeftMouseUpAction=[!WriteKeyValue Time Text "%1:%2 %3" "#rootconfigpath#\Item.ini"][!WriteKeyValue Variables SubstituteExtra #*12HourSubstitute*# "#rootconfigpath#\Item.ini"][!WriteKeyValue Variables Use12Hour 0 "#@#\Global.inc"][!WriteKeyValue Variables HourFormat %I "#@#\Global.inc"][!Refresh *]

[Use12Hour3]
Meter=Image
ImageName=#@#\Graphics\Gallery\off#OnOff##Use12Hour##ttgallerystyle#.png
MeterStyle=Checkbox
y=R
LeftMouseUpAction=[!WriteKeyValue Time Text "%1:%2" "#rootconfigpath#\Item.ini"][!WriteKeyValue Variables SubstituteExtra #*24HourSubstitute*# "#rootconfigpath#\Item.ini"][!WriteKeyValue Variables Use12Hour 1 "#@#\Global.inc"][!WriteKeyValue Variables HourFormat %H "#@#\Global.inc"][!Refresh *]
Hidden=#Use12Hour#



[PlayDing]
Meter=String
MeterStyle=DefaultLabel
Text=Sound on new Chunk
ToolTipText=Enable only when you're finished configuring, can get annoying!
[PlayDing1]
Meter=Image
MeterStyle=CheckboxBg

[PlayDing2]
Meter=Image
ImageName=#@#\Graphics\Gallery\on#OnOff##PlayDing##ttgallerystyle#.png
MeterStyle=Checkbox
LeftMouseUpAction=[!WriteKeyValue Variables PlayDing 0 "#@#\Global.inc"][!WriteKeyValue Variables PlaySound 1 "#@#\Global.inc"][!Refresh *]

[PlayDing3]
Meter=Image
ImageName=#@#\Graphics\Gallery\off#OnOff##PlayDing##ttgallerystyle#.png
MeterStyle=Checkbox
y=R
LeftMouseUpAction=[!WriteKeyValue Variables PlayDing 1 "#@#\Global.inc"][!WriteKeyValue Variables PlaySound "" "#@#\Global.inc"][Play "#SoundFile#"][!Refresh *]
Hidden=#PlayDing#




[Snd]
Meter=Image
ImageName=#@#\sound.png
x=(90)*#scaledpi#R
y=(-22)*#scaledpi#r
ToolTipText=Replace the sound
LeftMouseUpAction=["#@#\Sound"]
MouseActionCursor=1
Hidden=#PlaySound#
w=(12)*#scaledpi#



[InputStyl]








[MeasureInput1]
Measure=Plugin
Plugin=InputText
MeterStyle=InputStyl
H=(46)*#scaledpi#
W=(48)*#scaledpi#


stringalign=center
FontSize=(20)*#scaledpi#
SolidColor=#WindowColor#
FontColor=255,255,255,255
AntiAlias=1
FocusDismiss=1
InputNumber=1
DefaultValue="#DayStartHour#"

x=(306)*#scaledpi#
y=(35)*#scaledpi#


Command1=[!WriteKeyValue Variables DayStartHour "$UserInput$" "#@#Global.inc"][!Refresh *]










[MeasureInput2]
Measure=Plugin
Plugin=InputText
MeterStyle=InputStyl
H=(46)*#scaledpi#
W=(46)*#scaledpi#


stringalign=center
FontSize=(20)*#scaledpi#
SolidColor=#WindowColor#
FontColor=255,255,255,255
AntiAlias=1
FocusDismiss=1
InputNumber=1
DefaultValue="#DayStartMinute#"

x=(362)*#scaledpi#
y=(35)*#scaledpi#
Command1=[!WriteKeyValue Variables DayStartMinute "$UserInput$" "#@#Global.inc"][!Refresh *]









[MeasureInput3]
Measure=Plugin
Plugin=InputText
MeterStyle=InputStyl
H=(46)*#scaledpi#
W=(48)*#scaledpi#


stringalign=center
FontSize=(20)*#scaledpi#
SolidColor=#WindowColor#
FontColor=255,255,255,255
AntiAlias=1
FocusDismiss=1
InputNumber=1
DefaultValue="#Segments#"
x=(306)*#scaledpi#
y=(135)*#scaledpi#

Command1=[!WriteKeyValue Variables Segments "$UserInput$" "#@#Global.inc"][!Refresh *]



[MeasureInput4]
Measure=Plugin
Plugin=InputText
MeterStyle=InputStyl
H=(46)*#scaledpi#
W=(68)*#scaledpi#


stringalign=center
FontSize=(20)*#scaledpi#
SolidColor=#WindowColor#
FontColor=255,255,255,255
AntiAlias=1
FocusDismiss=1
InputNumber=1
DefaultValue="#SegmentDuration#"
x=(386)*#scaledpi#
y=(135)*#scaledpi#

Command1=[!WriteKeyValue Variables SegmentDuration "$UserInput$" "#@#Global.inc"][!Refresh *]