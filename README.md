# ANTLR4ConanExample

This is Example of ANTLR4-cppruntime usage.

Please note that usage of Conan Package manager solves dependency issues in different build environments. I'm trying to follow both: conan.io and antlr.org and sync their changes. 

[![CircleCI](https://dl.circleci.com/status-badge/img/gh/michalwidera/Antlr4ConanExample/tree/main.svg?style=svg)](https://dl.circleci.com/status-badge/redirect/gh/michalwidera/Antlr4ConanExample/tree/main)


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
sudo apt-get update && sudo apt-get -y install gcc cmake make build-essential python3 python3-pip
pip install conan
conan profile detect
conan source .
conan install . -s build_type=Debug --build missing
conan build . -s build_type=Debug --build missing
./build/Debug/a4test
~~~

## Regenerate grammar form .g4 file

Code that depends on Conan [Antlr4-cppruntime](https://conan.io/center/recipes/antlr4-cppruntime) [Antrl4](https://conan.io/center/recipes/antlr4) from conan.io does need JAVA from Conan [OpenJDK](https://conan.io/center/recipes/openjdk?version=21.0.2).

### Re-Excection and build parser

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

Script should work with Conan 2.x version.
