cmake_minimum_required(VERSION 3.3)
project(Cpp_OOP)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        PhoneShop/Call.cpp
        PhoneShop/Call.h
        PhoneShop/main.cpp
        PhoneShop/Phone.cpp
        PhoneShop/Phone.h
        PhoneShop/SmartPhone.cpp
        PhoneShop/SmartPhone.h)

add_executable(Cpp_OOP ${SOURCE_FILES})