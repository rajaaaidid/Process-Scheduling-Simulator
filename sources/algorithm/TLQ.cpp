//
// Created by Aidid on 8/19/2019.
//

#include "../../headers/algorithm/TLQ.h"
#include <iostream>
#include <sstream>
using namespace std;

TLQ::TLQ(ProcessSet processes)
{
    int quantum = 2;
    int minimumArrival = processes.findMinimumArrival();
    int totalBurstTime = processes.findTotalBurstTime();

    stringstream queue1Stream;
    stringstream queue2Stream;
    stringstream queue3Stream;

    Process previousRunning("N",0,0,0,0);

    Process previousRunning1("N",0,0,0,0);
    Process running1("N",0,0,0,0);

    Process previousRunning2("N",0,0,0,0);
    Process running2("N",0,0,0,0);

    Process previousRunning3("N",0,0,0,0);
    Process running3("N",0,0,0,0);

    ProcessSet queue1;
    ProcessSet queue2;
    ProcessSet queue3;

    for(int i=minimumArrival; i<=totalBurstTime; i++){

        //Add all process to ready queue on their arrival time
        deque<Process> enteringProcesses;
        for(int j=0; j<processes.findPassiveSize(); j++){
            if(processes.getPassiveAt(j).getArrivalTime()==i){
                enteringProcesses.push_back(processes.getPassiveAt(j));
            }
        }
        for(int j=0; j<enteringProcesses.size(); j++){
            if(enteringProcesses[j].getPriority()<=2){
                queue1.addToProcesses(enteringProcesses[j]);
                queue1.addToReady(enteringProcesses[j]);
            }else if(enteringProcesses[j].getPriority()<=4){
                queue2.addToProcesses(enteringProcesses[j]);
                queue2.addToReady(enteringProcesses[j]);
            }else{
                if(queue2.getAllReady().size()<=0){
                    queue2.addToProcesses(enteringProcesses[j]);
                    queue2.addToReady(enteringProcesses[j]);
                }else{
                    queue3.addToProcesses(enteringProcesses[j]);
                    queue3.addToReady(enteringProcesses[j]);
                }

            }
        }

        //Check which queue need to be run
        int queueToRun;
        if(queue1.getAllReady().size()>0||queue1.getRunning().getName()!="No Process"){
            queueToRun = 1;
            //If last time unit, exit
            if(i==totalBurstTime){
                queue1Stream<<totalBurstTime;
                break;
            }
        }else if(queue2.getAllReady().size()>0||queue2.getRunning().getName()!="No Process"){
            queueToRun = 2;
            //If last time unit, exit
            if(i==totalBurstTime){
                queue2Stream<<totalBurstTime;
                break;
            }
        }else{
            queueToRun = 3;
            //If last time unit, exit
            if(i==totalBurstTime){
                queue3Stream<<totalBurstTime;
                break;
            }
        }

        //Run the queue
        if(queueToRun==1){
            //======RR PRIORITY ALGORITHM======
            deque<Process> temp;
            if(i!=minimumArrival){
                if(queue1.getRunning().getExecutedTime()%quantum==0){
                    temp = queue1.findLowestPriority(queue1.getAllReady());
                    temp = queue1.findLowestExecutedTime(temp);
                    temp = queue1.findLowestArrivalTime(temp);
                    temp = queue1.findLowestBurstTime(temp);
                    if(temp.size()==0){
                        temp.push_back(queue1.getRunning());
                    }
                }else{
                    temp.push_back(queue1.getRunning());
                }
            }else{
                temp = queue1.findLowestPriority(queue1.getAllReady());
                temp = queue1.findLowestExecutedTime(temp);
                temp = queue1.findLowestArrivalTime(temp);
                temp = queue1.findLowestBurstTime(temp);
            }
            //======END OF RR PRIORITY ALGORITHM======

            //Set chosen process as running
            running1 = temp[0];
            queue1.setRunning(running1);

            //Print output
            if(!previousRunning.equals(running1)&&true){
                queue1Stream<<i<<" "<<queue1.getRunning().getName()<<" ";
            }

            //Feed running process
            queue1.feedRunning(1);
            //Make currently running to previous running for next iteration
            previousRunning = running1;
        }else if(queueToRun==2){
            //======FCFS PRIORITY ALGORITHM======
            bool continueFlag = false;
            deque<Process> temp;
            for(int x=0; x<queue2.getAllReady().size(); x++){
                temp.push_back(queue2.getReadyAt(x));
            }
            if(queue2.getRunning().getName()!="No Process"){
                temp.push_back(queue2.getRunning());
            }
            temp = queue2.findLowestArrivalTime(temp);
            for(int x=0; x<temp.size(); x++){
                if(temp[x].equals(queue2.getRunning())){
                    continueFlag = true;
                }else{
                    continueFlag = false;
                }
            }
            if(continueFlag){
                temp.clear();
                temp.push_back(queue2.getRunning());
            }else{
                temp = queue2.findLowestPriority(temp);
                temp = queue2.findLowestBurstTime(temp);
            }
            //======END OF FCFS PRIORITY ALGORITHM======

            //Set chosen process as running
            running2 = temp[0];
            queue2.setRunning(running2);

            //Print output
            if(!previousRunning.equals(running2)&&true){
                queue2Stream<<i<<" "<<queue2.getRunning().getName()<<" ";
            }

            //Feed running process
            queue2.feedRunning(1);
            //Make currently running to previous running for next iteration
            previousRunning = running2;
        }else{
            //======FCFS PRIORITY ALGORITHM======
            bool continueFlag = false;
            deque<Process> temp;
            for(int x=0; x<queue3.getAllReady().size(); x++){
                temp.push_back(queue3.getReadyAt(x));
            }
            if(queue3.getRunning().getName()!="No Process"){
                temp.push_back(queue3.getRunning());
            }
            temp = queue3.findLowestArrivalTime(temp);
            for(int x=0; x<temp.size(); x++){
                if(temp[x].equals(queue3.getRunning())){
                    continueFlag = true;
                }else{
                    continueFlag = false;
                }
            }
            if(continueFlag){
                temp.clear();
                temp.push_back(queue3.getRunning());
            }else{
                temp = queue3.findLowestPriority(temp);
                temp = queue3.findLowestBurstTime(temp);
            }
            //======END OF FCFS PRIORITY ALGORITHM======

            //Set chosen process as running
            running3 = temp[0];
            queue3.setRunning(running3);

            //Print output
            if(!previousRunning.equals(running3)&&true){
                queue3Stream<<i<<" "<<queue3.getRunning().getName()<<" ";
            }

            //Feed running process
            queue3.feedRunning(1);
            //Make currently running to previous running for next iteration
            previousRunning = running3;
        }

    }

    cout<<queue1Stream.str()<<endl;
    cout<<queue2Stream.str()<<endl;
    cout<<queue3Stream.str()<<endl;
}
