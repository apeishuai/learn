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

# Utility rule file for gl_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/gl_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/gl_autogen.dir/progress.make

CMakeFiles/gl_autogen: gl_autogen/timestamp

gl_autogen/timestamp: D:/qt6.8.2/6.8.2/mingw_64/bin/moc.exe
gl_autogen/timestamp: D:/qt6.8.2/6.8.2/mingw_64/bin/uic.exe
gl_autogen/timestamp: CMakeFiles/gl_autogen.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=D:\g\learn\opengl\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target gl"
	D:\qt6.8.2\Tools\CMake_64\bin\cmake.exe -E cmake_autogen D:/g/learn/opengl/build/CMakeFiles/gl_autogen.dir/AutogenInfo.json Debug
	D:\qt6.8.2\Tools\CMake_64\bin\cmake.exe -E touch D:/g/learn/opengl/build/gl_autogen/timestamp

gl_autogen: CMakeFiles/gl_autogen
gl_autogen: gl_autogen/timestamp
gl_autogen: CMakeFiles/gl_autogen.dir/build.make
.PHONY : gl_autogen

# Rule to build all files generated by this target.
CMakeFiles/gl_autogen.dir/build: gl_autogen
.PHONY : CMakeFiles/gl_autogen.dir/build

CMakeFiles/gl_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\gl_autogen.dir\cmake_clean.cmake
.PHONY : CMakeFiles/gl_autogen.dir/clean

CMakeFiles/gl_autogen.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\g\learn\opengl D:\g\learn\opengl D:\g\learn\opengl\build D:\g\learn\opengl\build D:\g\learn\opengl\build\CMakeFiles\gl_autogen.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/gl_autogen.dir/depend

