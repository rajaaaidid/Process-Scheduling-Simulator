//
// Created by Aidid on 8/19/2019.
//

#ifndef PROCESSSIMULATOR_PROCESSSET_H
#define PROCESSSIMULATOR_PROCESSSET_H
#include "Process.h"
#include <deque>

class ProcessSet
{
public:
    ProcessSet();
    deque<Process> getAllPassive();
    deque<Process> getAllReady();
    void addToProcesses(Process p);
    void addToReady(Process p);
    void addToReady(int index);
    void setRunning(Process p);
    void setRunning(int index);
    void feedRunning(int time);
    bool inPassiveState(Process p);
    bool inReadyState(Process p);
    bool isRunning(Process p);
    int findMinimumArrival();
    int findTotalBurstTime();
    int findPassiveSize();
    int findReadySize();
    Process getPassiveAt(int n);
    Process getReadyAt(int n);
    Process getRunning();
    void clearAll();
    void printAll();
    deque<Process> findLowestPriority(deque<Process> p);
    deque<Process> findHighestPriority(deque<Process> p);
    deque<Process> findLowestArrivalTime(deque<Process> p);
    deque<Process> findHighestArrivalTime(deque<Process> p);
    deque<Process> findLowestBurstTime(deque<Process> p);
    deque<Process> findHighestBurstTime(deque<Process> p);
    deque<Process> findLowestExecutedTime(deque<Process> p);
    deque<Process> findHighestExecutedTime(deque<Process> p);
protected:

private:
    deque<Process> processes;
    deque<Process> readyState;
    Process running;
};

#endif //PROCESSSIMULATOR_PROCESSSET_H
