//
// Created by Aidid on 8/19/2019.
//

#ifndef PROCESSSIMULATOR_INTERFACE_H
#define PROCESSSIMULATOR_INTERFACE_H
#include <string>
#include <vector>

using namespace std;

class Interface
{
public:
    Interface();
    void startInterface();
    vector<string> getProcessName();
    vector<int> getBurstTime();
    vector<int> getArrivalTime();
    vector<int> getPriority();
protected:

private:
    size_t split(const string &txt, vector<string> &strs, char ch);
    bool is_number(const string& s);
    const string systemName = "ANN Process Scheduling Simulator";
    const string systemBrand = "Multimedia University";
    const string systemYear = "2019";
    const string systemVersion = "1.0.0";
    vector<string> processName;
    vector<int> burstTime;
    vector<int> arrivalTime;
    vector<int> priority;
};

#endif //PROCESSSIMULATOR_INTERFACE_H
