# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/mfc/programs/clion/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/mfc/programs/clion/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mfc/projects/university-cpp-project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mfc/projects/university-cpp-project/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/university.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/university.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/university.dir/flags.make

CMakeFiles/university.dir/main.cpp.o: CMakeFiles/university.dir/flags.make
CMakeFiles/university.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mfc/projects/university-cpp-project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/university.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/university.dir/main.cpp.o -c /home/mfc/projects/university-cpp-project/main.cpp

CMakeFiles/university.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/university.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mfc/projects/university-cpp-project/main.cpp > CMakeFiles/university.dir/main.cpp.i

CMakeFiles/university.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/university.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mfc/projects/university-cpp-project/main.cpp -o CMakeFiles/university.dir/main.cpp.s

CMakeFiles/university.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/university.dir/main.cpp.o.requires

CMakeFiles/university.dir/main.cpp.o.provides: CMakeFiles/university.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/university.dir/build.make CMakeFiles/university.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/university.dir/main.cpp.o.provides

CMakeFiles/university.dir/main.cpp.o.provides.build: CMakeFiles/university.dir/main.cpp.o


CMakeFiles/university.dir/Student.cpp.o: CMakeFiles/university.dir/flags.make
CMakeFiles/university.dir/Student.cpp.o: ../Student.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mfc/projects/university-cpp-project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/university.dir/Student.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/university.dir/Student.cpp.o -c /home/mfc/projects/university-cpp-project/Student.cpp

CMakeFiles/university.dir/Student.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/university.dir/Student.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mfc/projects/university-cpp-project/Student.cpp > CMakeFiles/university.dir/Student.cpp.i

CMakeFiles/university.dir/Student.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/university.dir/Student.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mfc/projects/university-cpp-project/Student.cpp -o CMakeFiles/university.dir/Student.cpp.s

CMakeFiles/university.dir/Student.cpp.o.requires:

.PHONY : CMakeFiles/university.dir/Student.cpp.o.requires

CMakeFiles/university.dir/Student.cpp.o.provides: CMakeFiles/university.dir/Student.cpp.o.requires
	$(MAKE) -f CMakeFiles/university.dir/build.make CMakeFiles/university.dir/Student.cpp.o.provides.build
.PHONY : CMakeFiles/university.dir/Student.cpp.o.provides

CMakeFiles/university.dir/Student.cpp.o.provides.build: CMakeFiles/university.dir/Student.cpp.o


# Object files for target university
university_OBJECTS = \
"CMakeFiles/university.dir/main.cpp.o" \
"CMakeFiles/university.dir/Student.cpp.o"

# External object files for target university
university_EXTERNAL_OBJECTS =

university: CMakeFiles/university.dir/main.cpp.o
university: CMakeFiles/university.dir/Student.cpp.o
university: CMakeFiles/university.dir/build.make
university: CMakeFiles/university.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mfc/projects/university-cpp-project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable university"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/university.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/university.dir/build: university

.PHONY : CMakeFiles/university.dir/build

CMakeFiles/university.dir/requires: CMakeFiles/university.dir/main.cpp.o.requires
CMakeFiles/university.dir/requires: CMakeFiles/university.dir/Student.cpp.o.requires

.PHONY : CMakeFiles/university.dir/requires

CMakeFiles/university.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/university.dir/cmake_clean.cmake
.PHONY : CMakeFiles/university.dir/clean

CMakeFiles/university.dir/depend:
	cd /home/mfc/projects/university-cpp-project/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mfc/projects/university-cpp-project /home/mfc/projects/university-cpp-project /home/mfc/projects/university-cpp-project/cmake-build-debug /home/mfc/projects/university-cpp-project/cmake-build-debug /home/mfc/projects/university-cpp-project/cmake-build-debug/CMakeFiles/university.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/university.dir/depend

