# ANTLR4ConanExample

This is Example of ANTLR4-cppruntime usage.

Please note that usage of Conan Package manager solves dependency issues in different build environments. I'm trying to follow both: conan.io and antlr.org and sync their changes. 

[![CircleCI](https://dl.circleci.com/status-badge/img/gh/michalwidera/Antlr4ConanExample/tree/main.svg?style=svg)](https://dl.circleci.com/status-badge/redirect/gh/michalwidera/Antlr4ConanExample/tree/main)

> **_NOTE:_** In case of Conan package manager you do not need download and build manually ANTLR4 source or binary packages! You can pick dependency in conanfile.py and hit conan install command. Conan already did it for you! All binary packages are here and you can check if your platform is already supported by given system here: https://conan.io/center/antlr4-cppruntime

Here is code snippets that build working parser on your platform.

## Build example ANTLR4 parser in C++ type:

(assuming gcc (or Similar) toolchain is already installed.)

~~~
conan profile detect
~~~
And modify this profile by editor if you need.

Then:
~~~
git clone https://github.com/michalwidera/Antlr4ConanExample
sudo apt-get update && sudo apt-get -y install gcc cmake make build-essential python3 python3-pip default-jre
pip install conan
conan profile detect
conan source .
conan install . -s build_type=Debug --build missing
conan build . -s build_type=Debug --build missing
./build/Debug/a4test
~~~

If you want to change used Antlr4 version - just use modify conanfile.py file with:
~~~
antlr4_version = "4.11.1"
~~~

## Regenerate grammar form .g4 file

Code that depends on Conan [Antlr4-cppruntime](https://conan.io/center/antlr4-cppruntime) from conan.io does not need JAVA-JRE. But if you want to recompile G4 grammar file and add or modify language - you need that Java stuff.

Therefore:

> **_NOTE:_** DO NOT FORGET INSTALL JAVA-JRE. Antl4 is written in Java Language, you need Java Runtime Environment to run Antlr4 on your machine. Check _.circleci_ scripts to get more info if needed. 

### First method

This is how to install java jre:
~~~
sudo apt install default-jre
cd Antlr4ConanExample/src
source regenerate_parser.sh
conan install . --build missing
conan build .
a4test
~~~

### Second method

~~~
cd build/Debug
cmake .
make grammar
make
./a4test
~~~

## How to ...

There is a .circleci script.

If you want to see how build this code from scrach on clean system - look at the script.
There is all builded from scratch.


## Conan 1.x Compatibility

Script should work also on conan 1.x version. Now I'm supporting 2.0.
