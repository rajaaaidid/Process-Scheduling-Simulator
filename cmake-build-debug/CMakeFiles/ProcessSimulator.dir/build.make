# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Program Files\JetBrains\CLion 2019.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files\JetBrains\CLion 2019.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Aidid\CLionProjects\ProcessSimulator

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Aidid\CLionProjects\ProcessSimulator\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ProcessSimulator.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ProcessSimulator.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ProcessSimulator.dir/flags.make

CMakeFiles/ProcessSimulator.dir/main.cpp.obj: CMakeFiles/ProcessSimulator.dir/flags.make
CMakeFiles/ProcessSimulator.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Aidid\CLionProjects\ProcessSimulator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ProcessSimulator.dir/main.cpp.obj"
	"D:\Program Files (x86)\CodeBlocks\MinGW\bin\g++.exe"  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\ProcessSimulator.dir\main.cpp.obj -c D:\Aidid\CLionProjects\ProcessSimulator\main.cpp

CMakeFiles/ProcessSimulator.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ProcessSimulator.dir/main.cpp.i"
	"D:\Program Files (x86)\CodeBlocks\MinGW\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Aidid\CLionProjects\ProcessSimulator\main.cpp > CMakeFiles\ProcessSimulator.dir\main.cpp.i

CMakeFiles/ProcessSimulator.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ProcessSimulator.dir/main.cpp.s"
	"D:\Program Files (x86)\CodeBlocks\MinGW\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Aidid\CLionProjects\ProcessSimulator\main.cpp -o CMakeFiles\ProcessSimulator.dir\main.cpp.s

CMakeFiles/ProcessSimulator.dir/sources/Interface.cpp.obj: CMakeFiles/ProcessSimulator.dir/flags.make
CMakeFiles/ProcessSimulator.dir/sources/Interface.cpp.obj: ../sources/Interface.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Aidid\CLionProjects\ProcessSimulator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ProcessSimulator.dir/sources/Interface.cpp.obj"
	"D:\Program Files (x86)\CodeBlocks\MinGW\bin\g++.exe"  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\ProcessSimulator.dir\sources\Interface.cpp.obj -c D:\Aidid\CLionProjects\ProcessSimulator\sources\Interface.cpp

CMakeFiles/ProcessSimulator.dir/sources/Interface.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ProcessSimulator.dir/sources/Interface.cpp.i"
	"D:\Program Files (x86)\CodeBlocks\MinGW\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Aidid\CLionProjects\ProcessSimulator\sources\Interface.cpp > CMakeFiles\ProcessSimulator.dir\sources\Interface.cpp.i

CMakeFiles/ProcessSimulator.dir/sources/Interface.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ProcessSimulator.dir/sources/Interface.cpp.s"
	"D:\Program Files (x86)\CodeBlocks\MinGW\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Aidid\CLionProjects\ProcessSimulator\sources\Interface.cpp -o CMakeFiles\ProcessSimulator.dir\sources\Interface.cpp.s

CMakeFiles/ProcessSimulator.dir/sources/Process.cpp.obj: CMakeFiles/ProcessSimulator.dir/flags.make
CMakeFiles/ProcessSimulator.dir/sources/Process.cpp.obj: ../sources/Process.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Aidid\CLionProjects\ProcessSimulator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ProcessSimulator.dir/sources/Process.cpp.obj"
	"D:\Program Files (x86)\CodeBlocks\MinGW\bin\g++.exe"  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\ProcessSimulator.dir\sources\Process.cpp.obj -c D:\Aidid\CLionProjects\ProcessSimulator\sources\Process.cpp

CMakeFiles/ProcessSimulator.dir/sources/Process.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ProcessSimulator.dir/sources/Process.cpp.i"
	"D:\Program Files (x86)\CodeBlocks\MinGW\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Aidid\CLionProjects\ProcessSimulator\sources\Process.cpp > CMakeFiles\ProcessSimulator.dir\sources\Process.cpp.i

CMakeFiles/ProcessSimulator.dir/sources/Process.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ProcessSimulator.dir/sources/Process.cpp.s"
	"D:\Program Files (x86)\CodeBlocks\MinGW\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Aidid\CLionProjects\ProcessSimulator\sources\Process.cpp -o CMakeFiles\ProcessSimulator.dir\sources\Process.cpp.s

CMakeFiles/ProcessSimulator.dir/sources/ProcessSet.cpp.obj: CMakeFiles/ProcessSimulator.dir/flags.make
CMakeFiles/ProcessSimulator.dir/sources/ProcessSet.cpp.obj: ../sources/ProcessSet.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Aidid\CLionProjects\ProcessSimulator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/ProcessSimulator.dir/sources/ProcessSet.cpp.obj"
	"D:\Program Files (x86)\CodeBlocks\MinGW\bin\g++.exe"  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\ProcessSimulator.dir\sources\ProcessSet.cpp.obj -c D:\Aidid\CLionProjects\ProcessSimulator\sources\ProcessSet.cpp

CMakeFiles/ProcessSimulator.dir/sources/ProcessSet.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ProcessSimulator.dir/sources/ProcessSet.cpp.i"
	"D:\Program Files (x86)\CodeBlocks\MinGW\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Aidid\CLionProjects\ProcessSimulator\sources\ProcessSet.cpp > CMakeFiles\ProcessSimulator.dir\sources\ProcessSet.cpp.i

CMakeFiles/ProcessSimulator.dir/sources/ProcessSet.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ProcessSimulator.dir/sources/ProcessSet.cpp.s"
	"D:\Program Files (x86)\CodeBlocks\MinGW\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Aidid\CLionProjects\ProcessSimulator\sources\ProcessSet.cpp -o CMakeFiles\ProcessSimulator.dir\sources\ProcessSet.cpp.s

CMakeFiles/ProcessSimulator.dir/sources/algorithm/FCFS_Priority.cpp.obj: CMakeFiles/ProcessSimulator.dir/flags.make
CMakeFiles/ProcessSimulator.dir/sources/algorithm/FCFS_Priority.cpp.obj: ../sources/algorithm/FCFS_Priority.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Aidid\CLionProjects\ProcessSimulator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/ProcessSimulator.dir/sources/algorithm/FCFS_Priority.cpp.obj"
	"D:\Program Files (x86)\CodeBlocks\MinGW\bin\g++.exe"  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\ProcessSimulator.dir\sources\algorithm\FCFS_Priority.cpp.obj -c D:\Aidid\CLionProjects\ProcessSimulator\sources\algorithm\FCFS_Priority.cpp

CMakeFiles/ProcessSimulator.dir/sources/algorithm/FCFS_Priority.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ProcessSimulator.dir/sources/algorithm/FCFS_Priority.cpp.i"
	"D:\Program Files (x86)\CodeBlocks\MinGW\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Aidid\CLionProjects\ProcessSimulator\sources\algorithm\FCFS_Priority.cpp > CMakeFiles\ProcessSimulator.dir\sources\algorithm\FCFS_Priority.cpp.i

CMakeFiles/ProcessSimulator.dir/sources/algorithm/FCFS_Priority.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ProcessSimulator.dir/sources/algorithm/FCFS_Priority.cpp.s"
	"D:\Program Files (x86)\CodeBlocks\MinGW\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Aidid\CLionProjects\ProcessSimulator\sources\algorithm\FCFS_Priority.cpp -o CMakeFiles\ProcessSimulator.dir\sources\algorithm\FCFS_Priority.cpp.s

CMakeFiles/ProcessSimulator.dir/sources/algorithm/RR_Priority.cpp.obj: CMakeFiles/ProcessSimulator.dir/flags.make
CMakeFiles/ProcessSimulator.dir/sources/algorithm/RR_Priority.cpp.obj: ../sources/algorithm/RR_Priority.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Aidid\CLionProjects\ProcessSimulator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/ProcessSimulator.dir/sources/algorithm/RR_Priority.cpp.obj"
	"D:\Program Files (x86)\CodeBlocks\MinGW\bin\g++.exe"  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\ProcessSimulator.dir\sources\algorithm\RR_Priority.cpp.obj -c D:\Aidid\CLionProjects\ProcessSimulator\sources\algorithm\RR_Priority.cpp

CMakeFiles/ProcessSimulator.dir/sources/algorithm/RR_Priority.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ProcessSimulator.dir/sources/algorithm/RR_Priority.cpp.i"
	"D:\Program Files (x86)\CodeBlocks\MinGW\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Aidid\CLionProjects\ProcessSimulator\sources\algorithm\RR_Priority.cpp > CMakeFiles\ProcessSimulator.dir\sources\algorithm\RR_Priority.cpp.i

CMakeFiles/ProcessSimulator.dir/sources/algorithm/RR_Priority.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ProcessSimulator.dir/sources/algorithm/RR_Priority.cpp.s"
	"D:\Program Files (x86)\CodeBlocks\MinGW\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Aidid\CLionProjects\ProcessSimulator\sources\algorithm\RR_Priority.cpp -o CMakeFiles\ProcessSimulator.dir\sources\algorithm\RR_Priority.cpp.s

CMakeFiles/ProcessSimulator.dir/sources/algorithm/TLQ.cpp.obj: CMakeFiles/ProcessSimulator.dir/flags.make
CMakeFiles/ProcessSimulator.dir/sources/algorithm/TLQ.cpp.obj: ../sources/algorithm/TLQ.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Aidid\CLionProjects\ProcessSimulator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/ProcessSimulator.dir/sources/algorithm/TLQ.cpp.obj"
	"D:\Program Files (x86)\CodeBlocks\MinGW\bin\g++.exe"  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\ProcessSimulator.dir\sources\algorithm\TLQ.cpp.obj -c D:\Aidid\CLionProjects\ProcessSimulator\sources\algorithm\TLQ.cpp

CMakeFiles/ProcessSimulator.dir/sources/algorithm/TLQ.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ProcessSimulator.dir/sources/algorithm/TLQ.cpp.i"
	"D:\Program Files (x86)\CodeBlocks\MinGW\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Aidid\CLionProjects\ProcessSimulator\sources\algorithm\TLQ.cpp > CMakeFiles\ProcessSimulator.dir\sources\algorithm\TLQ.cpp.i

CMakeFiles/ProcessSimulator.dir/sources/algorithm/TLQ.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ProcessSimulator.dir/sources/algorithm/TLQ.cpp.s"
	"D:\Program Files (x86)\CodeBlocks\MinGW\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Aidid\CLionProjects\ProcessSimulator\sources\algorithm\TLQ.cpp -o CMakeFiles\ProcessSimulator.dir\sources\algorithm\TLQ.cpp.s

CMakeFiles/ProcessSimulator.dir/sources/algorithm/SRTN.cpp.obj: CMakeFiles/ProcessSimulator.dir/flags.make
CMakeFiles/ProcessSimulator.dir/sources/algorithm/SRTN.cpp.obj: ../sources/algorithm/SRTN.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Aidid\CLionProjects\ProcessSimulator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/ProcessSimulator.dir/sources/algorithm/SRTN.cpp.obj"
	"D:\Program Files (x86)\CodeBlocks\MinGW\bin\g++.exe"  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\ProcessSimulator.dir\sources\algorithm\SRTN.cpp.obj -c D:\Aidid\CLionProjects\ProcessSimulator\sources\algorithm\SRTN.cpp

CMakeFiles/ProcessSimulator.dir/sources/algorithm/SRTN.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ProcessSimulator.dir/sources/algorithm/SRTN.cpp.i"
	"D:\Program Files (x86)\CodeBlocks\MinGW\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Aidid\CLionProjects\ProcessSimulator\sources\algorithm\SRTN.cpp > CMakeFiles\ProcessSimulator.dir\sources\algorithm\SRTN.cpp.i

CMakeFiles/ProcessSimulator.dir/sources/algorithm/SRTN.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ProcessSimulator.dir/sources/algorithm/SRTN.cpp.s"
	"D:\Program Files (x86)\CodeBlocks\MinGW\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Aidid\CLionProjects\ProcessSimulator\sources\algorithm\SRTN.cpp -o CMakeFiles\ProcessSimulator.dir\sources\algorithm\SRTN.cpp.s

# Object files for target ProcessSimulator
ProcessSimulator_OBJECTS = \
"CMakeFiles/ProcessSimulator.dir/main.cpp.obj" \
"CMakeFiles/ProcessSimulator.dir/sources/Interface.cpp.obj" \
"CMakeFiles/ProcessSimulator.dir/sources/Process.cpp.obj" \
"CMakeFiles/ProcessSimulator.dir/sources/ProcessSet.cpp.obj" \
"CMakeFiles/ProcessSimulator.dir/sources/algorithm/FCFS_Priority.cpp.obj" \
"CMakeFiles/ProcessSimulator.dir/sources/algorithm/RR_Priority.cpp.obj" \
"CMakeFiles/ProcessSimulator.dir/sources/algorithm/TLQ.cpp.obj" \
"CMakeFiles/ProcessSimulator.dir/sources/algorithm/SRTN.cpp.obj"

# External object files for target ProcessSimulator
ProcessSimulator_EXTERNAL_OBJECTS =

ProcessSimulator.exe: CMakeFiles/ProcessSimulator.dir/main.cpp.obj
ProcessSimulator.exe: CMakeFiles/ProcessSimulator.dir/sources/Interface.cpp.obj
ProcessSimulator.exe: CMakeFiles/ProcessSimulator.dir/sources/Process.cpp.obj
ProcessSimulator.exe: CMakeFiles/ProcessSimulator.dir/sources/ProcessSet.cpp.obj
ProcessSimulator.exe: CMakeFiles/ProcessSimulator.dir/sources/algorithm/FCFS_Priority.cpp.obj
ProcessSimulator.exe: CMakeFiles/ProcessSimulator.dir/sources/algorithm/RR_Priority.cpp.obj
ProcessSimulator.exe: CMakeFiles/ProcessSimulator.dir/sources/algorithm/TLQ.cpp.obj
ProcessSimulator.exe: CMakeFiles/ProcessSimulator.dir/sources/algorithm/SRTN.cpp.obj
ProcessSimulator.exe: CMakeFiles/ProcessSimulator.dir/build.make
ProcessSimulator.exe: CMakeFiles/ProcessSimulator.dir/linklibs.rsp
ProcessSimulator.exe: CMakeFiles/ProcessSimulator.dir/objects1.rsp
ProcessSimulator.exe: CMakeFiles/ProcessSimulator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Aidid\CLionProjects\ProcessSimulator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable ProcessSimulator.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ProcessSimulator.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ProcessSimulator.dir/build: ProcessSimulator.exe

.PHONY : CMakeFiles/ProcessSimulator.dir/build

CMakeFiles/ProcessSimulator.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ProcessSimulator.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ProcessSimulator.dir/clean

CMakeFiles/ProcessSimulator.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Aidid\CLionProjects\ProcessSimulator D:\Aidid\CLionProjects\ProcessSimulator D:\Aidid\CLionProjects\ProcessSimulator\cmake-build-debug D:\Aidid\CLionProjects\ProcessSimulator\cmake-build-debug D:\Aidid\CLionProjects\ProcessSimulator\cmake-build-debug\CMakeFiles\ProcessSimulator.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ProcessSimulator.dir/depend

