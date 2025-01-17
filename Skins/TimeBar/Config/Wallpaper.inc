[SettingsE]
Meter=String
MeterStyle=Side
Text=Wallpaper
Hidden=0
Y=(150)*#scaledpi#
x=(30)*#scaledpi#



[UseWallpaper]
Meter=String
MeterStyle=DefaultLabel
Text=Use a custom Wallaper
Y=(40)*#scaledpi#
[UseWallpaper1]
Meter=Image
MeterStyle=CheckboxBg

[UseWallpaper2]
Meter=Image
ImageName=#@#\Graphics\Gallery\on#OnOff##UseWallpaper##ttgallerystyle#.png
MeterStyle=Checkbox
LeftMouseUpAction=[!WriteKeyValue Variables UseWallpaper 0 "#@#\Global.inc"][!Refresh #currentconfig#]

[UseWallpaper3]
Meter=Image
ImageName=#@#\Graphics\Gallery\off#OnOff##UseWallpaper##ttgallerystyle#.png
MeterStyle=Checkbox
y=R
LeftMouseUpAction=[!WriteKeyValue Variables UseWallpaper 1 "#@#\Global.inc"][!Refresh #currentconfig#]
Hidden=#UseWallpaper#




[WallBlock]
Y=r
x=(2)*#scaledpi#R
w=(94)*#scaledpi#
h=(69)*#scaledpi#
solidcolor=40,133,233
LeftMouseUpAction=!execute [!SetWallpaper "#@#\Walls\[#w[#currentsection]].jpg" Stretch]
RightMouseUpAction=!execute ["https://unsplash.com/photos/[#l[#currentsection]]"]
MouseActionCursor=1
ImageName=#@#\Walls\thumbs\[#w[#currentsection]].jpg
dynamicvariables=1
ToolTipText=[#t[#currentsection]]



[1]
Meter=Image
MeterStyle=WallBlock
Y=(92)*#scaledpi#
x=(200)*#scaledpi#

[2]
Meter=Image
MeterStyle=WallBlock


[3]
Meter=Image
MeterStyle=WallBlock



[4]
Meter=Image
MeterStyle=WallBlock
Y=(2)*#scaledpi#R
x=(200)*#scaledpi#

[5]
Meter=Image
MeterStyle=WallBlock


[6]
Meter=Image
MeterStyle=WallBlock



[SolidStyle]
Meter=string
Y=(72)*#scaledpi#
x=(200)*#scaledpi#
w=(286)*#scaledpi#
h=(245)*#scaledpi#
solidcolor=#windowcolor#,200
Hidden=#UseWallpaper#


[UseWallpaperED]
Meter=Image
ImageName=#@#daylight.png
Y=(250)*#scaledpi#
X=(320)*#scaledpi#
w=(50)*#scaledpi#
ImageAlpha=40

[UseWallpaperE]
Meter=String
MeterStyle=DefaultLabel
Text=Dynamic Wallpapers will be available soon
Y=(270)*#scaledpi#
FontColor=#textcolor2#,70
ToolTipText=We're making an extension that also changes the Wallpaper depending on the time of the day