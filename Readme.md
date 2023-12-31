# 🍀SFML Starter template

> Note: Tested on Windows 10 and Windows 11

This is the starter template and guide to set up SFML on Windows with MinGW and Visual Studio Code.<br>

We didn't find any useful articles or YouTube videos so we tried to set up the project on my own

## 🏛️Template Structure

### 1. Assets

In this folder, you put all your images animation, and sound.

### 2. build

In this folder all the build file and SFML dlls are stored you can execute the main exe from here.

### 3. headers

This folder contains sfml headers and user can create their own headers file too. but you need to make changes to the Makefile.

### 4. src

This is the source file where you write and structure your code.

### 5. main.cpp

Here, it is only the starter code you can link the source file from src.

### 6. MakeFile

> Note: Change makefile as you need. This makefile is not suitable for larger project.

```makefile
all: compile link

compile:
	g++ -Iheaders/sfml/include -c main.cpp

link:
	g++ main.o -o main -Lheaders/sfml/lib -lsfml-graphics -lsfml-window -lsfml-system -lopengl32 -lsfml-audio

	main
```

> In case the MakeFile is not working, you can manually type the following command to build.

```bash
g++ -Iheaders/sfml/include -c main.cpp
```

```bash
g++ main.o -o main -Lheaders/sfml/lib -lsfml-graphics -lsfml-window -lsfml-system -lopengl32 -lsfml-audio
```

```cpp
.\main
```
> If ./main dosen't work try /main or main on terminal 
### 7. Bat File

If, you are using a Windows Machine, you can directly run the bat file for building project.

```bash
echo Building project 

g++ -Iheaders/sfml/include -c main.cpp

g++ main.o -o main -Lheaders/sfml/lib -lsfml-graphics -lsfml-window -lsfml-system -lopengl32 -lsfml-audio

main
```

## 🛠️Installation and setup

### 1. Visual Studio Code

Download and install vs code from [ code.visualstudio.com](https://code.visualstudio.com/download) and install the C/C++ extension.

### 2. MinGW

Download and install MinGW from [mingw-w64.org](https://www.mingw-w64.org/downloads/) or [sourceforge.net](https://sourceforge.net/projects/mingw/) (We recommend msys2 as it makes things a lot easier). You can find on msys2 website to install it.

### 3. SFML

Download sfml from [sfml-dev.org](https://www.sfml-dev.org/download/sfml/2.6.0/) website and MinGW. You can choose 32-bit or 64-bit version depending upon your platform.

Now structure the file system as below and you are good to go.

![](/assets/file_sys.png "file structure ")

## ⚙️To compile

Use this command on the terminal.

### 1. Using MakeFile

```bash
mingw32-make -f MakeFile
```

### 2. Using Bat File

```bash
.\run.bat
```
