//
// Created by Aidid on 8/19/2019.
//

#ifndef PROCESSSIMULATOR_PROCESS_H
#define PROCESSSIMULATOR_PROCESS_H
#include <string>

using namespace std;

class Process
{
public:
    Process();
    Process(string name, int burstTime, int arrivalTime, int priority, int executedTime);
    void setName(string name);
    void setBurstTime(int burstTime);
    void setArrivalTime(int arrivalTime);
    void setPriority(int priority);
    void setExecutedTime(int executedTime);
    string getName();
    int getBurstTime();
    int getArrivalTime();
    int getPriority();
    int getExecutedTime();
    bool equals(Process p);
protected:

private:
    string name;
    int burstTime;
    int arrivalTime;
    int priority;
    int executedTime = 0;
};

#endif //PROCESSSIMULATOR_PROCESS_H
