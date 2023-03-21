import sys
import subprocess
#import c4d
#from c4d import gui

converter_path = "C:/Projects/pov-tools/22.008_RBCinewaresdk22.0_355130/projects/cinema2pov/cinema2pov.exe"
in_file = "C:/Projects/pov-tools/22.008_RBCinewaresdk22.0_355130/projects/cinema2pov/data/lights_test.c4d"
out_file = "C:/Projects/pov-tools/22.008_RBCinewaresdk22.0_355130/projects/cinema2pov/data/lights_test.inc"

pov_path = "C:/Program Files/POV-Ray/v3.8-beta/bin/pvengine64.exe"
pov_scene_file = "C:/Projects/pov-tools/22.008_RBCinewaresdk22.0_355130/projects/cinema2pov/data/c4d_test.pov"

def main():
#    gui.MessageDialog('Hello World!')
  print(sys.version)    
  # Run converter
  subprocess.call([converter_path, in_file, out_file])
 
  # Render
  # subprocess.call([pov_path, "/RENDER", pov_scene_file], start_new_session=True)
  # subprocess.Popen([pov_path, "/RENDER", pov_scene_file], start_new_session=True)
  subprocess.call([pov_path, "/RENDER", pov_scene_file])

if __name__=='__main__':
    main()
    