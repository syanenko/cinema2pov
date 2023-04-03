REM -- Demos --
SET POVRAY="C:\Program Files\POV-Ray\v3.8-beta\bin\pvengine64.exe"

REM cinema2pov.exe glass_demo.c4d glass_demo.inc > make_demos.log
REM cinema2pov.exe wood_demo.c4d wood_demo.inc   > make_demos.log

..\cinema2pov\cinema2pov.exe mat_wood.c4d mat_wood.inc >> make_demos.log
%POVRAY% demos.ini /RENDER mat_wood.pov /EXIT

..\cinema2pov\cinema2pov.exe mat_stone.c4d mat_stone.inc >> make_demos.log
%POVRAY% demos.ini /RENDER mat_stone.pov /EXIT

..\cinema2pov\cinema2pov.exe mat_glass.c4d mat_glass.inc >> make_demos.log
%POVRAY% demos.ini /RENDER mat_glass.pov /EXIT




