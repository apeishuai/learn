# cmake -G "MinGW Makefiles" -DCMAKE_TOOLCHAIN_FILE=path/to/this/file.cmake ..

# set os
set(CMAKE_SYSTEM_NAME Windows)
set(CMAKE_SYSTEM_PROCESSOR x86_64)

# tool chain
set(MINGW_ROOT "D:/softwares/msys64/mingw64")
set(CMAKE_FIND_ROOT_PATH "${MINGW_ROOT}")
set(CMAKE_C_COMPILER "${MINGW_ROOT}/bin/gcc.exe")
set(CMAKE_CXX_COMPILER "${MINGW_ROOT}/bin/g++.exe")
set(CMAKE_RC_COMPILER "${MINGW_ROOT}/bin/windres.exe")


# option, whether 
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)    
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)    
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)  
set(CMAKE_FIND_ROOT_PATH_MODE_PACKAGE NEVER)  


set(CMAKE_C_FLAGS_DEBUG "-march=x86-64 -mtune=generic")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -std=c++17")

# add info debug
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -ggdb3 -gcodeview -O0")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -ggdb3 -gcodeview -O0")
    

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif()


# message
message(STATUS "MinGW Toolchain Configuration:")
message(STATUS "  - C Compiler: ${CMAKE_C_COMPILER}")
message(STATUS "  - C++ Compiler: ${CMAKE_CXX_COMPILER}")
message(STATUS "  - Make Program: ${CMAKE_MAKE_PROGRAM}")
message(STATUS "  - Root Path: ${CMAKE_FIND_ROOT_PATH}")
message(STATUS "  - cmake cxx compiler id: ${CMAKE_CXX_COMPILER_ID}")

# CMAKE_C_COMPILER
# CMAKE_C_CIMPILER_ABI
# CMAKE_C_COMPILER_ID  //identify string
# CMAKE_C_COMPILER_LINKER


