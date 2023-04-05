REM //
REM // Making demo scenes
REM //

REM // Set path to POV-Ray location
SET POVRAY="C:\Program Files\POV-Ray\v3.8-beta\bin\pvengine64.exe"

REM - Glass
REM..\cinema2pov\cinema2pov.exe mat_glass.c4d mat_glass.inc >> make_demos.log
REM%POVRAY% demos.ini /RENDER mat_glass.pov /EXIT

REM - Wood
REM..\cinema2pov\cinema2pov.exe mat_wood.c4d mat_wood.inc >> make_demos.log
REM%POVRAY% demos.ini /RENDER mat_wood.pov /EXIT

REM - Stone
REM..\cinema2pov\cinema2pov.exe mat_stone.c4d mat_stone.inc >> make_demos.log
REM%POVRAY% demos.ini /RENDER mat_stone.pov /EXIT

REM - Metal
REM..\cinema2pov\cinema2pov.exe mat_metal.c4d mat_metal.inc >> make_demos.log
REM%POVRAY% demos.ini /RENDER mat_metal.pov /EXIT

REM // Test wood
REM..\cinema2pov\cinema2pov.exe mat_wood.c4d mat_wood.inc >> make_demos.log
REM%POVRAY% /RENDER mat_wood.pov

REM // Test stone
REM..\cinema2pov\cinema2pov.exe mat_stone.c4d mat_stone.inc >> make_demos.log
REM%POVRAY% /RENDER mat_stone.pov

REM // Test metal
..\cinema2pov\cinema2pov.exe mat_metal.c4d mat_metal.inc >> make_demos.log
%POVRAY% /RENDER mat_metal.pov


