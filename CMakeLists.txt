cmake_minimum_required(VERSION 3.14)
project(ProcessSimulator)

set(CMAKE_CXX_STANDARD 14)

add_executable(ProcessSimulator main.cpp sources/Interface.cpp headers/Interface.h sources/Process.cpp headers/Process.h sources/ProcessSet.cpp headers/ProcessSet.h sources/algorithm/FCFS_Priority.cpp headers/algorithm/FCFS_Priority.h sources/algorithm/RR_Priority.cpp headers/algorithm/RR_Priority.h sources/algorithm/TLQ.cpp headers/algorithm/TLQ.h sources/algorithm/SRTN.cpp headers/algorithm/SRTN.h)