# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.29

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = D:\qt6.8.2\Tools\CMake_64\bin\cmake.exe

# The command to remove a file.
RM = D:\qt6.8.2\Tools\CMake_64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\g\learn\opengl

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\g\learn\opengl\build

# Include any dependencies generated for this target.
include CMakeFiles/gl.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/gl.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/gl.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/gl.dir/flags.make

gl_autogen/timestamp: D:/qt6.8.2/6.8.2/mingw_64/bin/moc.exe
gl_autogen/timestamp: D:/qt6.8.2/6.8.2/mingw_64/bin/uic.exe
gl_autogen/timestamp: CMakeFiles/gl.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=D:\g\learn\opengl\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target gl"
	D:\qt6.8.2\Tools\CMake_64\bin\cmake.exe -E cmake_autogen D:/g/learn/opengl/build/CMakeFiles/gl_autogen.dir/AutogenInfo.json Debug
	D:\qt6.8.2\Tools\CMake_64\bin\cmake.exe -E touch D:/g/learn/opengl/build/gl_autogen/timestamp

CMakeFiles/gl.dir/gl_autogen/mocs_compilation.cpp.obj: CMakeFiles/gl.dir/flags.make
CMakeFiles/gl.dir/gl_autogen/mocs_compilation.cpp.obj: CMakeFiles/gl.dir/includes_CXX.rsp
CMakeFiles/gl.dir/gl_autogen/mocs_compilation.cpp.obj: gl_autogen/mocs_compilation.cpp
CMakeFiles/gl.dir/gl_autogen/mocs_compilation.cpp.obj: CMakeFiles/gl.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\g\learn\opengl\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/gl.dir/gl_autogen/mocs_compilation.cpp.obj"
	D:\softwares\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/gl.dir/gl_autogen/mocs_compilation.cpp.obj -MF CMakeFiles\gl.dir\gl_autogen\mocs_compilation.cpp.obj.d -o CMakeFiles\gl.dir\gl_autogen\mocs_compilation.cpp.obj -c D:\g\learn\opengl\build\gl_autogen\mocs_compilation.cpp

CMakeFiles/gl.dir/gl_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/gl.dir/gl_autogen/mocs_compilation.cpp.i"
	D:\softwares\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\g\learn\opengl\build\gl_autogen\mocs_compilation.cpp > CMakeFiles\gl.dir\gl_autogen\mocs_compilation.cpp.i

CMakeFiles/gl.dir/gl_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/gl.dir/gl_autogen/mocs_compilation.cpp.s"
	D:\softwares\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\g\learn\opengl\build\gl_autogen\mocs_compilation.cpp -o CMakeFiles\gl.dir\gl_autogen\mocs_compilation.cpp.s

CMakeFiles/gl.dir/main.cpp.obj: CMakeFiles/gl.dir/flags.make
CMakeFiles/gl.dir/main.cpp.obj: CMakeFiles/gl.dir/includes_CXX.rsp
CMakeFiles/gl.dir/main.cpp.obj: D:/g/learn/opengl/main.cpp
CMakeFiles/gl.dir/main.cpp.obj: CMakeFiles/gl.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\g\learn\opengl\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/gl.dir/main.cpp.obj"
	D:\softwares\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/gl.dir/main.cpp.obj -MF CMakeFiles\gl.dir\main.cpp.obj.d -o CMakeFiles\gl.dir\main.cpp.obj -c D:\g\learn\opengl\main.cpp

CMakeFiles/gl.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/gl.dir/main.cpp.i"
	D:\softwares\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\g\learn\opengl\main.cpp > CMakeFiles\gl.dir\main.cpp.i

CMakeFiles/gl.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/gl.dir/main.cpp.s"
	D:\softwares\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\g\learn\opengl\main.cpp -o CMakeFiles\gl.dir\main.cpp.s

# Object files for target gl
gl_OBJECTS = \
"CMakeFiles/gl.dir/gl_autogen/mocs_compilation.cpp.obj" \
"CMakeFiles/gl.dir/main.cpp.obj"

# External object files for target gl
gl_EXTERNAL_OBJECTS =

gl.exe: CMakeFiles/gl.dir/gl_autogen/mocs_compilation.cpp.obj
gl.exe: CMakeFiles/gl.dir/main.cpp.obj
gl.exe: CMakeFiles/gl.dir/build.make
gl.exe: D:/qt6.8.2/6.8.2/mingw_64/lib/libQt6Concurrent.a
gl.exe: D:/qt6.8.2/6.8.2/mingw_64/lib/libQt6Widgets.a
gl.exe: D:/qt6.8.2/6.8.2/mingw_64/lib/libQt6QuickControls2.a
gl.exe: D:/softwares/scoop/apps/vcpkg/current/installed/x64-mingw-dynamic/debug/lib/libglfw3dll.a
gl.exe: D:/softwares/scoop/apps/vcpkg/current/installed/x64-mingw-dynamic/debug/lib/libglad.a
gl.exe: D:/qt6.8.2/6.8.2/mingw_64/lib/libQt6Quick.a
gl.exe: D:/qt6.8.2/6.8.2/mingw_64/lib/libQt6OpenGL.a
gl.exe: D:/qt6.8.2/6.8.2/mingw_64/lib/libQt6QmlMeta.a
gl.exe: D:/qt6.8.2/6.8.2/mingw_64/lib/libQt6QmlWorkerScript.a
gl.exe: D:/qt6.8.2/6.8.2/mingw_64/lib/libQt6Gui.a
gl.exe: D:/qt6.8.2/6.8.2/mingw_64/lib/libQt6QmlModels.a
gl.exe: D:/qt6.8.2/6.8.2/mingw_64/lib/libQt6Qml.a
gl.exe: D:/qt6.8.2/6.8.2/mingw_64/lib/libQt6Network.a
gl.exe: D:/qt6.8.2/6.8.2/mingw_64/lib/libQt6Core.a
gl.exe: CMakeFiles/gl.dir/linkLibs.rsp
gl.exe: CMakeFiles/gl.dir/objects1.rsp
gl.exe: CMakeFiles/gl.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=D:\g\learn\opengl\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable gl.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\gl.dir\link.txt --verbose=$(VERBOSE)
	C:\Windows\System32\WindowsPowerShell\v1.0\powershell.exe -noprofile -executionpolicy Bypass -file D:/softwares/scoop/apps/vcpkg/current/scripts/buildsystems/msbuild/applocal.ps1 -targetBinary D:/g/learn/opengl/build/gl.exe -installedDir D:/softwares/scoop/apps/vcpkg/current/installed/x64-mingw-dynamic/debug/bin -OutVariable out

# Rule to build all files generated by this target.
CMakeFiles/gl.dir/build: gl.exe
.PHONY : CMakeFiles/gl.dir/build

CMakeFiles/gl.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\gl.dir\cmake_clean.cmake
.PHONY : CMakeFiles/gl.dir/clean

CMakeFiles/gl.dir/depend: gl_autogen/timestamp
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\g\learn\opengl D:\g\learn\opengl D:\g\learn\opengl\build D:\g\learn\opengl\build D:\g\learn\opengl\build\CMakeFiles\gl.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/gl.dir/depend

