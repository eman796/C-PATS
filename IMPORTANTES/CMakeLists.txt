cmake_minimum_required(VERSION 3.26)
project(CppProgramacionATS)

set(CMAKE_CXX_STANDARD 17)

add_executable(CppProgramacionATS main.cpp
        "../01-IntroduccionYCout&CIN/CLASES/01-03 Lectura o entrada de datos.cpp"
        "../01-IntroduccionYCout&CIN/EJERCICIOS/01-01 LecturaTEclado.cpp"
        ../01-IntroduccionYCout&CIN/CLASES/01-02-DatosBasicosCpp.cpp)
