# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/perdomix/Загрузки/clion-2021.2.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/perdomix/Загрузки/clion-2021.2.1/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/perdomix/CLionProjects/Thirdlaba

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/perdomix/CLionProjects/Thirdlaba/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Thirdlaba.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Thirdlaba.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Thirdlaba.dir/flags.make

CMakeFiles/Thirdlaba.dir/main.cpp.o: CMakeFiles/Thirdlaba.dir/flags.make
CMakeFiles/Thirdlaba.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/perdomix/CLionProjects/Thirdlaba/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Thirdlaba.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Thirdlaba.dir/main.cpp.o -c /home/perdomix/CLionProjects/Thirdlaba/main.cpp

CMakeFiles/Thirdlaba.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Thirdlaba.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/perdomix/CLionProjects/Thirdlaba/main.cpp > CMakeFiles/Thirdlaba.dir/main.cpp.i

CMakeFiles/Thirdlaba.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Thirdlaba.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/perdomix/CLionProjects/Thirdlaba/main.cpp -o CMakeFiles/Thirdlaba.dir/main.cpp.s

# Object files for target Thirdlaba
Thirdlaba_OBJECTS = \
"CMakeFiles/Thirdlaba.dir/main.cpp.o"

# External object files for target Thirdlaba
Thirdlaba_EXTERNAL_OBJECTS =

Thirdlaba: CMakeFiles/Thirdlaba.dir/main.cpp.o
Thirdlaba: CMakeFiles/Thirdlaba.dir/build.make
Thirdlaba: CMakeFiles/Thirdlaba.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/perdomix/CLionProjects/Thirdlaba/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Thirdlaba"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Thirdlaba.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Thirdlaba.dir/build: Thirdlaba
.PHONY : CMakeFiles/Thirdlaba.dir/build

CMakeFiles/Thirdlaba.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Thirdlaba.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Thirdlaba.dir/clean

CMakeFiles/Thirdlaba.dir/depend:
	cd /home/perdomix/CLionProjects/Thirdlaba/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/perdomix/CLionProjects/Thirdlaba /home/perdomix/CLionProjects/Thirdlaba /home/perdomix/CLionProjects/Thirdlaba/cmake-build-debug /home/perdomix/CLionProjects/Thirdlaba/cmake-build-debug /home/perdomix/CLionProjects/Thirdlaba/cmake-build-debug/CMakeFiles/Thirdlaba.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Thirdlaba.dir/depend
