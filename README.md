# Antlr4ConanExample
Example of Antlr4-cppruntime usage.

## To build example AntLR4 parser in C++ type:

~~~
pip install conan
source antlr4-env.sh
mkdir build
cd build
conan install ..
conan build ..
a4test
~~~

## To regenrate grammar form .g4 file

~~~
source antlr4-env.sh
cd Src
source regenerate_parser.sh
cd ../build
conan build ..
a4test
~~~
