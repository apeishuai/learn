cmake_minimum_required(VERSION 3.16)

project(gl LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

CONFIGURE_FILE(
    "${PROJECT_SOURCE_DIR}/root_directory.h.in"
    "${PROJECT_SOURCE_DIR}/root_directory.h"
)


find_package(Qt6 REQUIRED COMPONENTS Quick Core QuickControls2 Concurrent Widgets QuickControls2 Gui OpenGL)

find_package(glfw3 CONFIG REQUIRED)
find_package(glad CONFIG REQUIRED)

qt_standard_project_setup(REQUIRES 6.5)

set(PROJECT_SRC
    main.cpp
)
set(PROJECT_INCLUDE
    filesystem.h
    stb_image.h
    shader_s.h
)

include_directories(${PROJECT_INCLUDE})

qt_add_executable(gl
    ${PROJECT_SRC}
    ${PROJECT_INCLUDE}
)

target_link_libraries(gl PRIVATE
    Qt6::Quick
    Qt6::Core
    Qt6::Concurrent
    Qt6::Widgets
    Qt6::QuickControls2
    Qt6::Gui
    Qt6::OpenGL
    glfw
    glad::glad
)

# install
set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR})
install(TARGETS gl DESTINATION bin)
install(FILES "${PROJECT_SOURCE_DIR}/downloaddialog.h" DESTINATION include)

# cpack
include (InstallRequiredSystemLibraries) # windows下有用
set(CPACK_RSC_FILE_LICENSE
    "${CMAKE_CURRENT_SOURCE_DIR}/License.txt")
include(Cpack)
