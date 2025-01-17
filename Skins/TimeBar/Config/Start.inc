[SettingsE]
Meter=String
MeterStyle=Side
Text=Start
Hidden=0
Y=(30)*#scaledpi#
x=(30)*#scaledpi#






[Start5]
ImageName=#@#start.png
Meter=Image
X=(280)*#scaledpi#
w=(140)*#scaledpi#

y=(19)*#scaledpi#
LeftMouseUpAction=["https://timebar.github.io/"]
ToolTipText=Visit the project's website
MouseActionCursor=1
ImageAlpha=205
MouseOverAction=[!SetOption #CURRENTSECTION# ImageAlpha "255"][!Update]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageAlpha "205"][!Update]




[Text33]
Meter=String
Y=(155)*#scaledpi#
x=(350)*#scaledpi#
MeterStyle=Default
Text=Welcome to TimeBar #Version#
StringAlign=Center
FontSize=(18)*#scaledpi#


[CheckUpdate]
Measure=WebParser
URL=http://timebar.github.io/update.md
RegExp="<version>(.*)</version>"
FinishAction=[!Update]
UpdateDivider=1000

[UpdateAvailable]
Measure=WebParser
URL=[CheckUpdate]
StringIndex=1
IfCondition=[UpdateAvailable] > #Version#
IfTrueAction=[!ShowMeter Update][!HideMeter StartSchedule][!Update]
DynamicVariables=1

[Update]
Meter=String
Y=(5)*#scaledpi#R
x=(350)*#scaledpi#
MeterStyle=Default
Text=Version [UpdateAvailable] is available. Click for more info.
StringAlign=Center
DynamicVariables=1
fontcolor=200,255,200,200
LeftMouseUpAction=["https://timebar.github.io/?c=#version#"]
MouseActionCursor=1
Hidden=1

[StartSchedule]
Meter=String
Y=(5)*#scaledpi#R
x=(350)*#scaledpi#
MeterStyle=Default
Text=Let's begin by setting your Schedule
StringAlign=Center
fontcolor=255,255,255,100



[Text234]
Meter=String
Y=(45)*#scaledpi#R
x=(350)*#scaledpi#
MeterStyle=Default
Text=NEXT ▶
StringAlign=CenterCenter
solidcolor=40,40,40
Padding=15,10,15,10
LeftMouseUpAction=[!WriteKeyValue Variables LastCat schedule][!Refresh #currentconfig#]
MouseActionCursor=1
MouseOverAction=[!SetOption #CURRENTSECTION# SolidColor "255,255,255,60"][!Update]
MouseLeaveAction=[!SetOption #CURRENTSECTION# SolidColor "255,255,255,30"][!Update]
