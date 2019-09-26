//
// Created by Aidid on 8/19/2019.
//

#include "../../headers/algorithm/TLQ.h"

TLQ::TLQ(ProcessSet processes)
{
    int minimumArrivalTime = processes.findMinimumArrival();
    int totalBurstTime = processes.findTotalBurstTime();

    Process previousRunning1("N",0,0,0,0);
    Process running1("N",0,0,0,0);

    Process previousRunning2("N",0,0,0,0);
    Process running2("N",0,0,0,0);

    Process previousRunning3("N",0,0,0,0);
    Process running3("N",0,0,0,0);

    ProcessSet queue1;
    ProcessSet queue2;
    ProcessSet queue3;

    for(int i=minimumArrivalTime; i<totalBurstTime; i++){

        //Add all process to ready queue on their arrival time
        deque<Process> enteringProcesses;
        for(int j=0; j<processes.findPassiveSize(); j++){
            if(processes.getPassiveAt(j).getArrivalTime()==i){
                enteringProcesses.push_back(processes.getPassiveAt(j));
            }
        }
        for(int j=0; j<enteringProcesses.size(); j++){
            if(enteringProcesses[i].getPriority()<=2){
                queue1.addToProcesses(enteringProcesses[i]);
                queue1.addToReady(enteringProcesses[i]);
            }else if(enteringProcesses[i].getPriority()<=4){
                queue2.addToProcesses(enteringProcesses[i]);
                queue2.addToReady(enteringProcesses[i]);
            }else{
                if(queue2.getAllReady().size()<=0){
                    queue2.addToProcesses(enteringProcesses[i]);
                    queue2.addToReady(enteringProcesses[i]);
                }else{
                    queue3.addToProcesses(enteringProcesses[i]);
                    queue3.addToReady(enteringProcesses[i]);
                }

            }
        }

        //Check which queue need to be run
        int queueToRun;
        if(queue1.getAllReady().size()>0){
            queueToRun = 1;
        }else if(queue2.getAllReady().size()>0){
            queueToRun = 2;
        }else{
            queueToRun = 3;
        }

        //Run the queue
        if(queueToRun==1){

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
            running1 = temp[0];
            processes.setRunning(running1);

            //Print output
            if(!previousRunning1.equals(running1)&&true){
                cout<<i<<" "<<processes.getRunning().getName()<<" ";
            }

            //Feed running process
            processes.feedRunning(1);
            //Make currently running to previous running for next iteration
            previousRunning1 = running1;
        }else{

        }

    }
}
