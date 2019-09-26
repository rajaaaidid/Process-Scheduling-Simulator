#include <iostream>
#include "headers/Interface.h"
#include "headers/algorithm/FCFS_Priority.h"
#include "headers/algorithm/RR_Priority.h"
#include "headers/algorithm/SRTN.h"
#include "headers/algorithm/TLQ.h"

using namespace std;

const bool MANUAL_DATA = false;  //SET TRUE TO ENABLE MANUAL DATA ENTRY
const bool ON_FCFS_P = false;      //SET TRUE TO ENABLE "First Come First Serve with Priority"
const bool ON_RR_P = false;        //SET TRUE TO ENABLE "Round Robin with Priority"
const bool ON_TLQ = true;      //SET TRUE TO ENABLE "Three Level Queue"
const bool ON_SRTN = false;      //SET TRUE TO ENABLE "Shortest Remaining Time Next"

int main()
{
    ProcessSet ps;

    if(MANUAL_DATA){
        Interface core;
        core.startInterface();

        for(int i=0; i<core.getProcessName().size(); i++){
            Process newProcess;
            newProcess.setName(core.getProcessName()[i]);
            newProcess.setBurstTime(core.getBurstTime()[i]);
            newProcess.setArrivalTime(core.getArrivalTime()[i]);
            newProcess.setPriority(core.getPriority()[i]);
            ps.addToProcesses(newProcess);
        }
    }else{
        ps.clearAll();
        Process p0("P0",6,0,3,0);
        Process p1("P1",4,1,3,0);
        Process p2("P2",6,5,1,0);
        Process p3("P3",6,6,1,0);
        Process p4("P4",6,7,5,0);
        Process p5("P5",6,8,6,0);
        ps.addToProcesses(p0);
        ps.addToProcesses(p1);
        ps.addToProcesses(p2);
        ps.addToProcesses(p3);
        ps.addToProcesses(p4);
        ps.addToProcesses(p5);
    }

    if(ON_FCFS_P){
        cout<<endl<<"============ FCFS(Priority) ============"<<endl;
        FCFS_Priority fcfsInstance(ps);
        cout<<endl<<"============ FCFS(Priority) ============"<<endl;
    }

    if(ON_RR_P){
        cout<<endl<<"============ RoundRobin(Priority) ============"<<endl;
        RR_Priority rrInstance(ps, 2);
        cout<<endl<<"============ RoundRobin(Priority) ============"<<endl;
    }

    if(ON_TLQ){
        cout<<endl<<"============ 3 Level Queue ============"<<endl;
        TLQ tlqInstance(ps);
        cout<<endl<<"============ 3 Level Queue ============"<<endl;
    }

    if(ON_SRTN){
        cout<<endl<<"============ SRTN ============"<<endl;
        SRTN srtnInstance(ps);
        cout<<endl<<"============ SRTN ============"<<endl;
    }
}
