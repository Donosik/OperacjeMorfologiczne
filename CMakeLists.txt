cmake_minimum_required(VERSION 3.21)
project(OperacjeMorfologiczne)

set(CMAKE_CXX_STANDARD 23)

add_executable(OperacjeMorfologiczne main.cpp AppManager.cpp AppManager.h InputImage.cpp InputImage.h SaveImage.cpp SaveImage.h ImageProcesser.cpp ImageProcesser.h ImageOperator.cpp ImageOperator.h Dilatation.cpp Dilatation.h Erosion.cpp Erosion.h Opening.cpp Opening.h Closure.cpp Closure.h TopHat.cpp TopHat.h BottomHat.cpp BottomHat.h)
