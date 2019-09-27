//
// Created by Aidid on 8/19/2019.
//

#include "../headers/ProcessSet.h"
#include <iostream>

ProcessSet::ProcessSet(){
    Process p("No Process",0,0,0,0);
    ProcessSet::running = p;
}

deque<Process> ProcessSet::getAllPassive(){
    return ProcessSet::processes;
}

deque<Process> ProcessSet::getAllReady(){
    return ProcessSet::readyState;
}

void ProcessSet::addToProcesses(Process p){
    ProcessSet::processes.push_back(p);
}

void ProcessSet::addToReady(Process p){
    for(int i=0; i<ProcessSet::processes.size(); i++){
        if(p.equals(ProcessSet::processes[i])){
            ProcessSet::readyState.push_back(ProcessSet::processes[i]);
            ProcessSet::processes.erase(ProcessSet::processes.begin()+i);
        }
    }
}

void ProcessSet::addToReady(int index){
    ProcessSet::readyState.push_back(processes[index]);
    ProcessSet::processes.erase(processes.begin()+index);
}

void ProcessSet::setRunning(Process p){
    for(int i=0; i<ProcessSet::readyState.size(); i++){
        if(p.equals(ProcessSet::readyState[i])){
            if(ProcessSet::running.getBurstTime()!=0){
                ProcessSet::readyState.push_back(ProcessSet::running);
            }
            ProcessSet::running = ProcessSet::readyState[i];
            ProcessSet::readyState.erase(ProcessSet::readyState.begin()+i);
        }
    }
}

void ProcessSet::setRunning(int index){
    if(ProcessSet::running.getBurstTime()!=0){
        ProcessSet::readyState.push_back(running);
    }
    ProcessSet::running = ProcessSet::readyState[index];
    ProcessSet::readyState.erase(ProcessSet::readyState.begin()+index);
}

void ProcessSet::feedRunning(int time){
    if(isRunning(running)){
        ProcessSet::running.setBurstTime(ProcessSet::running.getBurstTime()-time);
        ProcessSet::running.setExecutedTime(ProcessSet::running.getExecutedTime()+time);
        if(ProcessSet::running.getBurstTime()==0){
            ProcessSet::processes.push_back(ProcessSet::running);
            Process p("No Process",0,0,0,0);
            ProcessSet::running = p;
        }
    }
}

void ProcessSet::feedRunning(int time, int interval){
    if(isRunning(running)){
        ProcessSet::running.setBurstTime(ProcessSet::running.getBurstTime()-time);
        ProcessSet::running.setExecutedTime(ProcessSet::running.getExecutedTime()+time);
        if(ProcessSet::running.getBurstTime()==0){
            ProcessSet::running.setFinishInterval(interval);
            ProcessSet::processes.push_back(ProcessSet::running);
            Process p("No Process",0,0,0,0);
            ProcessSet::running = p;
        }
    }
}

bool ProcessSet::inPassiveState(Process p){
    for(int i=0; i<processes.size(); i++){
        if(p.equals(ProcessSet::processes[i])){
            return true;
        }
    }
    return false;
}

bool ProcessSet::inReadyState(Process p){
    for(int i=0; i<readyState.size(); i++){
        if(p.equals(ProcessSet::readyState[i])){
            return true;
        }
    }
    return false;
}

bool ProcessSet::isRunning(Process p){
    if(p.equals(ProcessSet::running)){
        return true;
    }else{
        return false;
    }
}

int ProcessSet::findMinimumArrival(){
    int minimumArrival = ProcessSet::processes[0].getArrivalTime();
    for(int i=0; i<ProcessSet::processes.size(); i++){
        if(minimumArrival>ProcessSet::processes[i].getArrivalTime()){
            minimumArrival = ProcessSet::processes[i].getArrivalTime();
        }
    }
    return minimumArrival;
}

int ProcessSet::findTotalBurstTime(){
    int totalBurstTime = 0;
    for(int i=0; i<ProcessSet::processes.size(); i++){
        totalBurstTime += ProcessSet::processes[i].getBurstTime();
    }
    return totalBurstTime;
}

int ProcessSet::findPassiveSize(){
    return processes.size();
}

int ProcessSet::findReadySize(){
    return readyState.size();
}

Process ProcessSet::getPassiveAt(int n){
    return ProcessSet::processes[n];
}

Process ProcessSet::getReadyAt(int n){
    return ProcessSet::readyState[n];
}

Process ProcessSet::getRunning(){
    return ProcessSet::running;
}

deque<Process> ProcessSet::findLowestPriority(deque<Process> p){
    deque<Process> temporaryProcesses;
    int temporary = p[0].getPriority();

    for(int i=0; i<p.size(); i++){
        if(temporary>p[i].getPriority()){
            temporary = p[i].getPriority();
        }
    }
    for(int i=0; i<p.size(); i++){
        if(p[i].getPriority()<=temporary){
            temporaryProcesses.push_back(p[i]);
        }
    }

    return temporaryProcesses;
}

deque<Process> ProcessSet::findHighestPriority(deque<Process> p){
    deque<Process> temporaryProcesses;
    int temporary = p[0].getPriority();

    for(int i=0; i<p.size(); i++){
        if(temporary<p[i].getPriority()){
            temporary = p[i].getPriority();
        }
    }
    for(int i=0; i<p.size(); i++){
        if(p[i].getPriority()>=temporary){
            temporaryProcesses.push_back(p[i]);
        }
    }

    return temporaryProcesses;
}

deque<Process> ProcessSet::findLowestArrivalTime(deque<Process> p){
    deque<Process> temporaryProcesses;
    int temporary = p[0].getArrivalTime();

    for(int i=0; i<p.size(); i++){
        if(temporary>p[i].getArrivalTime()){
            temporary = p[i].getArrivalTime();
        }
    }
    for(int i=0; i<p.size(); i++){
        if(p[i].getArrivalTime()<=temporary){
            temporaryProcesses.push_back(p[i]);
        }
    }

    return temporaryProcesses;
}

deque<Process> ProcessSet::findHighestArrivalTime(deque<Process> p){
    deque<Process> temporaryProcesses;
    int temporary = p[0].getArrivalTime();

    for(int i=0; i<p.size(); i++){
        if(temporary<p[i].getArrivalTime()){
            temporary = p[i].getArrivalTime();
        }
    }
    for(int i=0; i<p.size(); i++){
        if(p[i].getArrivalTime()>=temporary){
            temporaryProcesses.push_back(p[i]);
        }
    }

    return temporaryProcesses;
}

deque<Process> ProcessSet::findLowestBurstTime(deque<Process> p){
    deque<Process> temporaryProcesses;
    int temporary = p[0].getBurstTime();

    for(int i=0; i<p.size(); i++){
        if(temporary>p[i].getBurstTime()){
            temporary = p[i].getBurstTime();
        }
    }
    for(int i=0; i<p.size(); i++){
        if(p[i].getBurstTime()<=temporary){
            temporaryProcesses.push_back(p[i]);
        }
    }

    return temporaryProcesses;
}

deque<Process> ProcessSet::findHighestBurstTime(deque<Process> p){
    deque<Process> temporaryProcesses;
    int temporary = p[0].getBurstTime();

    for(int i=0; i<p.size(); i++){
        if(temporary<p[i].getBurstTime()){
            temporary = p[i].getBurstTime();
        }
    }
    for(int i=0; i<p.size(); i++){
        if(p[i].getBurstTime()>=temporary){
            temporaryProcesses.push_back(p[i]);
        }
    }

    return temporaryProcesses;
}

deque<Process> ProcessSet::findLowestExecutedTime(deque<Process> p){
    deque<Process> temporaryProcesses;
    int temporary = p[0].getExecutedTime();

    for(int i=0; i<p.size(); i++){
        if(temporary>p[i].getExecutedTime()){
            temporary = p[i].getExecutedTime();
        }
    }
    for(int i=0; i<p.size(); i++){
        if(p[i].getExecutedTime()<=temporary){
            temporaryProcesses.push_back(p[i]);
        }
    }

    return temporaryProcesses;
}

deque<Process> ProcessSet::findHighestExecutedTime(deque<Process> p){
    deque<Process> temporaryProcesses;
    int temporary = p[0].getExecutedTime();

    for(int i=0; i<p.size(); i++){
        if(temporary<p[i].getExecutedTime()){
            temporary = p[i].getExecutedTime();
        }
    }
    for(int i=0; i<p.size(); i++){
        if(p[i].getExecutedTime()>=temporary){
            temporaryProcesses.push_back(p[i]);
        }
    }

    return temporaryProcesses;
}

void ProcessSet::clearAll(){
    processes.clear();
    readyState.clear();
    Process p("No Process",0,0,0,0);
    running = p;
}

void ProcessSet::printAll(){
    cout<<"Passive State"<<endl;
    for(int i=0; i<processes.size(); i++){
        cout<<processes[i].getName()<<" "<<processes[i].getBurstTime()<<" "<<processes[i].getArrivalTime()<<" "<<processes[i].getPriority()<<" "<<processes[i].getExecutedTime()<<endl;
    }
    cout<<"Ready State"<<endl;
    for(int i=0; i<readyState.size(); i++){
        cout<<readyState[i].getName()<<" "<<readyState[i].getBurstTime()<<" "<<readyState[i].getArrivalTime()<<" "<<readyState[i].getPriority()<<" "<<readyState[i].getExecutedTime()<<endl;
    }
    cout<<"Running State"<<endl;
    cout<<running.getName()<<" "<<running.getBurstTime()<<" "<<running.getArrivalTime()<<" "<<running.getPriority()<<" "<<running.getExecutedTime()<<endl;
}

void ProcessSet::printProcessTable(){
    printf("\n%-15s%-15s%-15s%-15s\n", "Process Name", "Burst Time", "Arrival Time", "Priority");
    for(int i=0; i<ProcessSet::getAllPassive().size(); i++){
        string name = ProcessSet::getAllPassive()[i].getName();
        string format = "%-15s%-15d%-15d%-15d\n";
        printf(format.c_str(), ProcessSet::getAllPassive()[i].getName().c_str(), ProcessSet::getAllPassive()[i].getBurstTime(), ProcessSet::getAllPassive()[i].getArrivalTime(), ProcessSet::getAllPassive()[i].getPriority());
    }
}

void ProcessSet::printProcessTable(int type){
    printf("\n%-15s%-15s%-15s%-15s%-15s\n", "Process Name", "Burst Time", "Arrival Time", "Priority","Finish Time");
    for(int i=0; i<ProcessSet::getAllPassive().size(); i++){
        string name = ProcessSet::getAllPassive()[i].getName();
        string format = "%-15s%-15d%-15d%-15d%-15d\n";
        printf(format.c_str(), ProcessSet::getAllPassive()[i].getName().c_str(), ProcessSet::getAllPassive()[i].getBurstTime(), ProcessSet::getAllPassive()[i].getArrivalTime(), ProcessSet::getAllPassive()[i].getPriority(), ProcessSet::getAllPassive()[i].getFinishInterval());
    }
}


