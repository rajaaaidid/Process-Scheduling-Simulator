//
// Created by Aidid on 8/19/2019.
//

#include "../../headers/algorithm/RR_Priority.h"
#include <iostream>

RR_Priority::RR_Priority(ProcessSet processes, int quantum, int enableCalculation)
{
    //Initialize variables
    int minimumArrival = processes.findMinimumArrival();
    int totalBurstTime = minimumArrival+processes.findTotalBurstTime();
    Process previousRunning("N",0,0,0,0);
    Process running("N",0,0,0,0);

    //Initialize for-loop for gantt chart timeline
    for(int i=minimumArrival; i<=totalBurstTime; i++){

        //Add all process to ready queue on their arrival time
        deque<Process> enteringProcesses;
        for(int j=0; j<processes.findPassiveSize(); j++){
            if(processes.getPassiveAt(j).getArrivalTime()==i){
                enteringProcesses.push_back(processes.getPassiveAt(j));
            }
        }
        for(int j=0; j<enteringProcesses.size(); j++){
            processes.addToReady(enteringProcesses[j]);
        }
        //If last time unit, exit
        if(i==totalBurstTime){
            cout<<totalBurstTime;
            break;
        }

        //======RR PRIORITY ALGORITHM======
        deque<Process> temp;
        if(i!=minimumArrival){
            if(processes.getRunning().getExecutedTime()%quantum==0){
                temp = processes.findLowestPriority(processes.getAllReady());
                temp = processes.findLowestExecutedTime(temp);
                temp = processes.findLowestArrivalTime(temp);
                temp = processes.findLowestBurstTime(temp);
                if(temp.size()==0){
                    temp.push_back(processes.getRunning());
                }
                if(processes.getRunning().getPriority()<temp[0].getPriority()&&(processes.getRunning().getName()!="No Process")){
                    temp.clear();
                    temp.push_back(processes.getRunning());
                }
            }else{
                temp.push_back(processes.getRunning());
            }
        }else{
            temp = processes.findLowestPriority(processes.getAllReady());
            temp = processes.findLowestExecutedTime(temp);
            temp = processes.findLowestArrivalTime(temp);
            temp = processes.findLowestBurstTime(temp);
        }
        //======END OF RR PRIORITY ALGORITHM======

        //Set chosen process as running
        running = temp[0];
        processes.setRunning(running);

        //Print output
        if(!previousRunning.equals(running)&&true){
            cout<<i<<" "<<processes.getRunning().getName()<<" ";
        }

        //Feed running process
        processes.feedRunning(1,i+1);
        //Make currently running to previous running for next iteration
        previousRunning = running;
    }

    if(enableCalculation){
        processes.printProcessTable(1);
    }
}
