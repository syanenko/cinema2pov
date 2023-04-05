REM //
REM // Converting demo scenes
REM //

REM // Set path to POV-Ray location
SET POVRAY="C:\Program Files\POV-Ray\v3.8-beta\bin\pvengine64.exe"

REM..\cinema2pov\cinema2pov.exe mat_wood.c4d mat_wood.inc >> make_demos.log
REM%POVRAY% demos.ini /RENDER mat_wood.pov /EXIT

REM..\cinema2pov\cinema2pov.exe mat_stone.c4d mat_stone.inc >> make_demos.log
REM%POVRAY% demos.ini /RENDER mat_stone.pov /EXIT

REM..\cinema2pov\cinema2pov.exe mat_glass.c4d mat_glass.inc >> make_demos.log
REM%POVRAY% demos.ini /RENDER mat_glass.pov /EXIT

REM // Test
..\cinema2pov\cinema2pov.exe mat_wood.c4d mat_wood.inc >> make_demos.log
%POVRAY% /RENDER mat_wood.pov

