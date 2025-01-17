[SettingsE]
Meter=String
MeterStyle=Side
Text=Options
Hidden=0
Y=(90)*#scaledpi#
x=(30)*#scaledpi#




[HideClock]
Meter=String
Y=(40)*#scaledpi#
MeterStyle=DefaultLabel
Text=Hide the Clock

[HideClock1]
Meter=Image
MeterStyle=CheckboxBg

[HideClock2]
Meter=Image
ImageName=#@#\Graphics\Gallery\on#OnOff##HideClock##ttgallerystyle#.png
MeterStyle=Checkbox
LeftMouseUpAction=[!WriteKeyValue Variables HideClock 0 "#@#\Global.inc"][!Refresh *]

[HideClock3]
Meter=Image
ImageName=#@#\Graphics\Gallery\off#OnOff##HideClock##ttgallerystyle#.png
MeterStyle=Checkbox
y=R
LeftMouseUpAction=[!WriteKeyValue Variables HideClock 1 "#@#\Global.inc"][!Refresh *]
Hidden=#HideClock#



[HideDate]
Meter=String
MeterStyle=DefaultLabel
Text=Hide the Date

[HideDate1]
Meter=Image
MeterStyle=CheckboxBg

[HideDate2]
Meter=Image
ImageName=#@#\Graphics\Gallery\on#OnOff##HideDate##ttgallerystyle#.png
MeterStyle=Checkbox
LeftMouseUpAction=[!WriteKeyValue Variables HideDate 0 "#@#\Global.inc"][!Refresh *]

[HideDate3]
Meter=Image
ImageName=#@#\Graphics\Gallery\off#OnOff##HideDate##ttgallerystyle#.png
MeterStyle=Checkbox
y=R
LeftMouseUpAction=[!WriteKeyValue Variables HideDate 1 "#@#\Global.inc"][!Refresh *]
Hidden=#HideDate#


[HideTasks]
Meter=String
MeterStyle=DefaultLabel
Text=Hide the Tasks

[HideTasks1]
Meter=Image
MeterStyle=CheckboxBg

[HideTasks2]
Meter=Image
ImageName=#@#\Graphics\Gallery\on#OnOff##HideTasks##ttgallerystyle#.png
MeterStyle=Checkbox
LeftMouseUpAction=[!WriteKeyValue Variables HideTasks 0 "#@#\Global.inc"][!ActivateConfig "TimeBar\Notes"][!Refresh #currentconfig#]

[HideTasks3]
Meter=Image
ImageName=#@#\Graphics\Gallery\off#OnOff##HideTasks##ttgallerystyle#.png
MeterStyle=Checkbox
y=R
LeftMouseUpAction=[!WriteKeyValue Variables HideTasks 1 "#@#\Global.inc"][!DeactivateConfig "TimeBar\Notes"][!DeactivateConfig "TimeBar\WeekNotes"][!Refresh #currentconfig#]
Hidden=#HideTasks#


[HideBigText]
Meter=String
MeterStyle=DefaultLabel
Text=Big Task Text

[HideBigText1]
Meter=Image
MeterStyle=CheckboxBg

[HideBigText2]
Meter=Image
ImageName=#@#\Graphics\Gallery\on#OnOff##HideBigText##ttgallerystyle#.png
MeterStyle=Checkbox
LeftMouseUpAction=[!WriteKeyValue Variables HideBigText 0 "#@#\Global.inc"][!DeactivateConfig "TimeBar\BigText"][!Refresh #currentconfig#]

[HideBigText3]
Meter=Image
ImageName=#@#\Graphics\Gallery\off#OnOff##HideBigText##ttgallerystyle#.png
MeterStyle=Checkbox
y=R
LeftMouseUpAction=[!WriteKeyValue Variables HideBigText 1 "#@#\Global.inc"][!activateConfig "TimeBar\BigText"][!Refresh #currentconfig#]
Hidden=#HideBigText#


[ChunkNumbers]
Meter=String
MeterStyle=DefaultLabel
Text=Chunk Numbers

[ChunkNumbers1]
Meter=Image
MeterStyle=CheckboxBg

[ChunkNumbers2]
Meter=Image
ImageName=#@#\Graphics\Gallery\on#OnOff##ChunkNumbers##ttgallerystyle#.png
MeterStyle=Checkbox
LeftMouseUpAction=[!WriteKeyValue Variables ChunkNumbersPadding 24 "#@#\Global.inc"][!WriteKeyValue Variables ChunkNumbers 0 "#@#\Global.inc"][!WriteKeyValue bm Text "" "#ROOTCONFIGPATH#Item.ini"][!Refresh *]

[ChunkNumbers3]
Meter=Image
ImageName=#@#\Graphics\Gallery\off#OnOff##ChunkNumbers##ttgallerystyle#.png
MeterStyle=Checkbox
y=R
LeftMouseUpAction=[!WriteKeyValue Variables ChunkNumbersPadding 60 "#@#\Global.inc"][!WriteKeyValue Variables ChunkNumbers 1 "#@#\Global.inc"][!WriteKeyValue bm Text "#*CURRENTSECTION*#" "#ROOTCONFIGPATH#Item.ini"][!Refresh *]
Hidden=#ChunkNumbers#



[ChunkTimes]
Meter=String
MeterStyle=DefaultLabel
Text=Chunk Times

[ChunkTimes1]
Meter=Image
MeterStyle=CheckboxBg

[ChunkTimes2]
Meter=Image
ImageName=#@#\Graphics\Gallery\on#OnOff##ChunkTimes##ttgallerystyle#.png
MeterStyle=Checkbox
LeftMouseUpAction=[!WriteKeyValue Variables ChunkTimes 0 "#@#\Global.inc"][!WriteKeyValue bmc FontSize "0" "#ROOTCONFIGPATH#Item.ini"][!Refresh *]

[ChunkTimes3]
Meter=Image
ImageName=#@#\Graphics\Gallery\off#OnOff##ChunkTimes##ttgallerystyle#.png
MeterStyle=Checkbox
y=R
LeftMouseUpAction=[!WriteKeyValue Variables ChunkTimes 1 "#@#\Global.inc"][!WriteKeyValue bmc FontSize "(18*#*scaledpi*#)" "#ROOTCONFIGPATH#Item.ini"][!Refresh *]
Hidden=#ChunkTimes#
