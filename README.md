# CPP_Intro

This repository hosts the code used in the *Intro to C++* series of videos on the *Programming Dunce* YouTube channel. Each file not in a sub-folder is meant to be a stand-alone project used in one of the videos in Programming Dunce's playlist.

## Getting Started

#### Downloading Code

Simply type the following command into your terminal/Console:
```
git clone https://github.com/TrecApps/CPP_Intro.git
```

Alternatively, you can download the zip-file (fine the *Clone or Download* button) and unzip the downloaded file.

#### Compiling and running the Code

Because each file (or sub-folder) has it's own version of *main*, it is recommended that you compile each individually and leave them as seperate programs. I recommend using gcc in a Linux environment.

If I were to compile, say *Intro C++ 1.cpp*, I would type the command:
```
g++ "Intro C++ 1.cpp" -o CPP_1
```

**Note: I'm using *g++* instead of *gcc*! This is because *g++* will provide C++ libraries needed to compile these programs. While *gcc* compiles C++ programs, it won't provide C++ libraries by default.

If I were to compile one of the directories (Let's do *Classes and Objects 7*, I would type in the commands:
```
cd "Classes and Objects 7"
g++ demoClass.cpp main.cpp -o CPP_7
```

#### Compiling as C

Some of these files were written in such a way as to be compatible with both C and C++. Basically, any file with a *.c* extension was written to compile under C

#### Running the programs

Once you succeed in compiling a program, simply run it (using *CPP_1* as an example):
```
./CPP_1
```

## Known Issues

* 'Intro C++ 3 Functions.c' and 'Intro C++ 2.cpp' need *g++* in order to compile.
* The File related to strings won't compile under G++ due to the strtok_s function being used
* The programs using *scanf* (i.e. 2, 3 and 5) don't actually wait for user input before exiting
