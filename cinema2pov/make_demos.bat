REM -- Demos --
REM cinema2pov.exe demos\glass_demo.c4d demos\glass_demo.inc > cinema2pov.log
REM cinema2pov.exe demos\wood_demo.c4d demos\wood_demo.inc > cinema2pov.log

cinema2pov.exe demos\stone_demo.c4d demos\stone_demo.inc > make_demos.log
"C:\Program Files\POV-Ray\v3.8-beta\bin\pvengine64.exe" /RENDER C:\Projects\pov-tools\22.008_RBCinewaresdk22.0_355130\projects\cinema2pov\demos\demos.pov



