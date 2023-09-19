cmake_minimum_required(VERSION 3.26)
project(InventoryManagement)

set(CMAKE_CXX_STANDARD 17)

add_executable(InventoryManagement src/Main.cpp
        src/Item.h
        src/Item.cpp
        src/Utility.h
        src/Utility.cpp
        src/Database.h
        src/Database.cpp)
