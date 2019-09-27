//
// Created by Aidid on 8/19/2019.
//

#include "../headers/Process.h"
#include <string>

using namespace std;

Process::Process(){

}

Process::Process(string name, int burstTime, int arrivalTime, int priority, int executedTime)
{
    Process::name = name;
    Process::burstTime = burstTime;
    Process::arrivalTime = arrivalTime;
    Process::priority = priority;
    Process::executedTime = executedTime;
}

void Process::setName(string name){
    Process::name = name;
}

void Process::setBurstTime(int burstTime){
    Process::burstTime = burstTime;
}

void Process::setArrivalTime(int arrivalTime){
    Process::arrivalTime = arrivalTime;
}

void Process::setPriority(int priority){
    Process::priority = priority;
}

void Process::setExecutedTime(int executedTime){
    Process::executedTime = executedTime;
}

void Process::setFinishInterval(int finishInterval){
    Process::finishInterval = finishInterval;
}

string Process::getName(){
    return Process::name;
}

int Process::getBurstTime(){
    return Process::burstTime;
}

int Process::getArrivalTime(){
    return Process::arrivalTime;
}

int Process::getPriority(){
    return Process::priority;
}

int Process::getExecutedTime(){
    return Process::executedTime;
}

int Process::getFinishInterval(){
    return Process::finishInterval;
}

bool Process::equals(Process p){
    if(Process::name==p.getName() && Process::arrivalTime==p.getArrivalTime() && Process::getPriority()==p.getPriority()){
        if((Process::burstTime+Process::executedTime)==(p.getBurstTime()+p.getExecutedTime())){
            return true;
        }else{
            return false;
        }
    }else{
        return false;
    }
}
