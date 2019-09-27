//
// Created by Aidid on 8/19/2019.
//

#include "../../headers/algorithm/FCFS_Priority.h"
#include <iostream>
#include <vector>

using namespace std;

FCFS_Priority::FCFS_Priority(ProcessSet processes, int enableCalculation)
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

        //======FCFS PRIORITY ALGORITHM======
        bool continueFlag = false;
        deque<Process> temp;
        for(int x=0; x<processes.getAllReady().size(); x++){
            temp.push_back(processes.getReadyAt(x));
        }
        if(processes.getRunning().getName()!="No Process"){
            temp.push_back(processes.getRunning());
        }
        temp = processes.findLowestPriority(temp);
        for(int x=0; x<temp.size(); x++){
            if(temp[x].equals(processes.getRunning())){
                continueFlag = true;
            }else{
                continueFlag = false;
            }
        }
        if(continueFlag){
            temp.clear();
            temp.push_back(processes.getRunning());
        }else{
            temp = processes.findLowestArrivalTime(temp);
            temp = processes.findLowestBurstTime(temp);
        }
        //======END OF FCFS PRIORITY ALGORITHM======

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



/* ==== IGNORE ====
cout<<endl<<endl<<"TIME: "<<i<<endl;
processes.printAll();
*/
