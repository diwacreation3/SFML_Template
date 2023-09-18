# SFML Starter template
> NOTE: Tested on Windows 10 

This is the starter template and guide to set up SFML on Windows with MinGW and Vscode. <br>


I didn't find any useful articles or YouTube videos so I tried to set up the project on my own

### Template Structure
1. Assets <br>
In this folder, you put all your images animation, and sound

2. build <br>
In this folder all the build file and SFML dlls are stored you can execute the main exe from here 

3. headers <br>
This folder contains sfml headers and user can create their own headers file too. but you need to make changes to the Makefile 

4. src <br> This is the source file where you write and structure your code 

5. main.cpp <br>
 here it is only the starter code you can link the source file from src 

6. MakeFile
> Note: Change makefile as you need. this makefile is not suitable for larger project

``` makefile
all: compile link

compile:
	g++ -Iheaders/include -c main.cpp

link:
	g++ main.o -o build/main -Lheaders/lib -lsfml-graphics -lsfml-window -lsfml-system -lopengl32 -lsfml-audio

	main
```
### Installation and setup 
1. vs code <br>
Download and install vs code from  [ code.visualstudio.com](https://code.visualstudio.com/download) and install the c/c++ extension

2. Mingw  <br>

download and install MinGW from [mingw-w64.org](https://www.mingw-w64.org/downloads/)  or [sourceforge.net](https://sourceforge.net/projects/mingw/) (I suggest msys2 it makes things a lot easier) you can find on msys2 website to install it 

3. SFML <br>

download sfml from [sfml-dev.org](https://www.sfml-dev.org/download/sfml/2.6.0/) website and mingw one you can choose 32bit or 64 bit version. 

<br>
Now structure the file system as below and you are good to go. 

<br>

![](/assets/file_sys.png "file structure ")


#### To compile 

use this command on the terminal 
``` bash
mingw32-make -f MakeFile
```


