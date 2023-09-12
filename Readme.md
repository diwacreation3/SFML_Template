# SFML Starter template
> NOTE: Tested on Window 10 

This is the starter template and guide to setup SFML on windows with mingw and Vscode. <br>


I didn't find any useful artical and youtube video so i try to setup project on my own

### Template Structure
1. Assets <br>
On this folder where you put all your images animation and sound

2. build <br>
on this folder all the build file and SFML dlls is stored you can exectute main exe from here 

3. headers <br>
This folder contains sfml headers and user can create their own headers file too. but you need to make change on Makefile 

4. src <br> this is source file where you write and structure your code 

5. main.cpp <br>
 here it is only starter code you can link source file from src 

6. MakeFile
> note: Change makefile as your need. this makefile is nnot suitable for larger project

``` makefile
all: compile link

compile:
	g++ -Iheaders/include -c main.cpp

link:
	g++ main.o -o build/main -Lheaders/lib -lsfml-graphics -lsfml-window -lsfml-system -lopengl32 -lsfml-audio

	main


```
### Installation and setup 
1. vscode <br>
Download and install vscode from  [ code.visualstudio.com](https://code.visualstudio.com/download) and install c/c++ extension

2. Mingw  <br>

download and install Mingw from [mingw-w64.org](https://www.mingw-w64.org/downloads/)  or [sourceforge.net](https://sourceforge.net/projects/mingw/) (i suggest msys2 it makes things lot more easier) you can find on msys2 website to install it 

3. SFML <br>

download sfml from [sfml-dev.org](https://www.sfml-dev.org/download/sfml/2.6.0/) website and mingw one you can choose 32bit or 64 bit version. 

<br>
Now structure file system as below and you are good to go . 

<br>

![](/assets/file_sys.png "file structure ")


#### To compile 

use this command on terminal 
``` bash
mingw32-make -f MakeFile
```


