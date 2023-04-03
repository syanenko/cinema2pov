REM -- Demos --
SET POVRAY="C:\Program Files\POV-Ray\v3.8-beta\bin\pvengine64.exe"

REM cinema2pov.exe glass_demo.c4d glass_demo.inc > make_demos.log
REM cinema2pov.exe wood_demo.c4d wood_demo.inc   > make_demos.log

..\cinema2pov\cinema2pov.exe stone_demo.c4d stone_demo.inc > make_demos.log
%POVRAY% /RENDER demos.pov




