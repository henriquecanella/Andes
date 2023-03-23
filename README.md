# Andes
An adventure game made with C and raylib

## Windows Users
Visual Studio users should run

    premake-VisualStudio.bat
	
This will generate a Visual Studio project.
	
## MinGW-w64 Users
Please make sure you have a recent version of MinGW-W64. The older versons from mingw.org will not work.
We recomend the W64Devkit. I thas everything needed to build raylib. I can be downloaded from here https://github.com/skeeto/w64devkit/releases

Once you have MinGW-W64
Run the batch file.

    premake-mingw.bat

This will generate a makefile for you
	
## Linux users
cd to the game folder and run

    ./premake5 gmake2

This will generate a makefile for you.

## macOS users
cd to the game folder and run

    ./premake5.osx gmake2
	
This will generate a makefile for you.

# Build your game
Only do ONE of these options depending on your compiler and platform.
## Windows Users
Double click the .sln file that was generated in the folder. From here you can use the project as normal.
	
## MinGW-w64 Users
Open your compiler terminal (w64devkit if you are using it), change to the game folder and type 

    make
	
This will build your game
	
## Linux/macOS users
Open your terminal, change to the game folder and type.

    make
	
This will build your starting game template
