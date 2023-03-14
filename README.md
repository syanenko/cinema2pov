# POV Utilities

[POV Ray](http://www.povray.org) is a great rendering tool with support of solids [CSG](https://wiki.povray.org/content/Reference:Constructive_Solid_Geometry), can produce hight-qality realistic images, by processing scenes, described on [SDL](https://wiki.povray.org/content/Documentation:Tutorial_Section_3.9) lanuage, wich is simple and flexible. The one seriuuse drwback is lack of seriouse modelling tools, for effective working with objects and scene composing.
This leads me to start this project - set of exporting plugins for most popular modellers. 

## Cinema4D

**cinema2pov** - is a command line tool for exporting data from C4D format to POV Ray SDL, code is based on [Cineware SDK](https://developers.maxon.net/docs/CinewareSDK/html/index.html), now supports following objects:

1. Primitives: [Sphere](https://wiki.povray.org/content/Reference:Sphere), Cube([Box](https://wiki.povray.org/content/Reference:Box)), [Cone](https://wiki.povray.org/content/Reference:Cone), [Cylinder](https://wiki.povray.org/content/Reference:Cylinder), [Plane](https://wiki.povray.org/content/Reference:Plane), [Spline](https://wiki.povray.org/content/Reference:Spline), Mesh (as [Mesh2](https://wiki.povray.org/content/Reference:Mesh2)).
2. Constructive operations: Extrude (Prism), Sweep (Sphere sweep) 
3. Boolean (CSG) operations: Union, Difference, Intersection.

- Splines\
To preserve flexibility, exported spline data stored in an array that can be processed by macros,\
see examples in 'c4d\export2pov\examples'.

![data_usage](https://user-images.githubusercontent.com/6688301/222774955-c665690e-13a9-4862-aec0-bf9a59f1994e.png)
#
About POV-Ray:\
Officail site: [povray.org](http://www.povray.org)\
Documentation: [wiki.povray.org](https://wiki.povray.org/content/Documentation:Contents)\
Newsgroups: [news.povray.org/groups/](https://news.povray.org/groups/)\
Repository: [github.com/POV-Ray/povray](https://github.com/POV-Ray/povray)

Tutorials:\
Basics: [https://povlab.online/povtutorial/](https://povlab.online/povtutorial/)\
Animation: [https://povlab.online/animtutorial/](https://povlab.online/povtutorial/)\
Isosurfaces: [https://povlab.online/isotutorial/](https://povlab.online/isotutorial/)

Videos: [POV-Ray channel on Youtube](https://www.youtube.com/playlist?list=PL_L-Rlt-OWoJm6HN9t-hxXRk-b6SONXbJ)

Contact me at [LinkedIn](https://www.linkedin.com/in/sergey-yanenko-57b21a96/).
