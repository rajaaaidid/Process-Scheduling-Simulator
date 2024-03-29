//
// Created by Aidid on 8/19/2019.
//

#include "../headers/Interface.h"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>

using namespace std;

Interface::Interface(){

}

void Interface::startInterface(){
    string input;
    vector <string> inputSplit;

    cout << Interface::systemName << " [" << Interface::systemVersion << "]" << endl;
    cout << "(c) " << Interface::systemYear << " " << Interface::systemBrand << ". All rights reserved" << endl << endl;
    cout<<(char)77<<(char)97<<(char)100<<(char)101<<(char)32<<(char)98<<(char)121<<(char)58<<(char)32<<(char)82<<(char)97<<(char)106<<(char)97<<(char)32<<(char)77<<(char)117<<(char)104<<(char)97<<(char)109<<(char)109<<(char)97<<(char)100<<(char)32<<(char)65<<(char)105<<(char)100<<(char)105<<(char)100<<(char)32<<(char)49<<(char)49<<(char)54<<(char)49<<(char)50<<(char)48<<(char)48<<(char)57<<(char)51<<(char)48<<endl;
    cout<<(char)77<<(char)97<<(char)100<<(char)101<<(char)32<<(char)98<<(char)121<<(char)58<<(char)32<<(char)65<<(char)122<<(char)109<<(char)105<<(char)110<<(char)32<<(char)65<<(char)108<<(char)105<<(char)97<<(char)115<<(char)32<<(char)98<<(char)105<<(char)110<<(char)32<<(char)77<<(char)111<<(char)104<<(char)100<<(char)32<<(char)65<<(char)122<<(char)104<<(char)97<<(char)32<<(char)49<<(char)49<<(char)54<<(char)49<<(char)50<<(char)48<<(char)50<<(char)52<<(char)57<<(char)52<<endl;
    cout<<(char)77<<(char)97<<(char)100<<(char)101<<(char)32<<(char)98<<(char)121<<(char)58<<(char)32<<(char)65<<(char)122<<(char)110<<(char)105<<(char)100<<(char)97<<(char)32<<(char)98<<(char)105<<(char)110<<(char)116<<(char)105<<(char)32<<(char)65<<(char)122<<(char)110<<(char)97<<(char)109<<(char)32<<(char)49<<(char)49<<(char)51<<(char)50<<(char)55<<(char)48<<(char)48<<(char)50<<(char)55<<(char)51<<endl;
    cout<<(char)77<<(char)97<<(char)100<<(char)101<<(char)32<<(char)98<<(char)121<<(char)58<<(char)32<<(char)77<<(char)111<<(char)104<<(char)97<<(char)109<<(char)109<<(char)97<<(char)100<<(char)32<<(char)65<<(char)107<<(char)114<<(char)97<<(char)109<<(char)32<<(char)70<<(char)97<<(char)105<<(char)122<<(char)32<<(char)98<<(char)105<<(char)110<<(char)32<<(char)77<<(char)111<<(char)104<<(char)100<<(char)32<<(char)39<<(char)65<<(char)100<<(char)108<<(char)105<<(char)32<<(char)49<<(char)49<<(char)49<<(char)50<<(char)55<<(char)48<<(char)49<<(char)57<<(char)54<<(char)49<<endl<<endl;

    cout<<"Enter the following sets of data for the processes (Enter -1 to end):"<<endl;
    cout<<"<Process Name> <Burst Time> <Arrival Time> <Priority>"<<endl;

    int i = 0;
    while(1){
        char input[100];
        cin.getline(input, sizeof(input));
        istringstream iss(input);
        string temporary;

        //Split commands
        inputSplit.clear();
        while (getline(iss, temporary, ' ' )) {
            inputSplit.push_back(temporary);
        }

        if(inputSplit[0].compare("-1")==0){
            break;
        }

        //Error checking
        if(inputSplit.size()!=4){
            cout<<"Ensure there are four inputs"<<endl;
            continue;
        }else{
            int statusFlag = 0;
            for(int i=0; i<inputSplit.size(); i++){
                if(!is_number(inputSplit[i])&&i!=0){
                    statusFlag = 1;
                }
            }
            if(statusFlag==1){
                cout<<"Please enter valid numbers"<<endl;
                continue;
            }
        }

        int temp;
        Interface::processName.push_back(inputSplit[0]);
        stringstream s1(inputSplit[1]);
        s1 >> temp;
        Interface::burstTime.push_back(temp);
        stringstream s2(inputSplit[2]);
        s2 >> temp;
        Interface::arrivalTime.push_back(temp);
        stringstream s3(inputSplit[3]);
        s3 >> temp;
        Interface::priority.push_back(temp);

        cout << "Entered: " << Interface::processName[i] << " " << Interface::burstTime[i] << " " << Interface::arrivalTime[i] << " " << Interface::priority[i] << endl;
        i++;
    }
}

size_t Interface::split(const string &txt, vector<string> &strs, char ch)
{
    size_t pos = txt.find( ch );
    size_t initialPos = 0;
    strs.clear();

    // Decompose statement
    while( pos != string::npos ) {
        strs.push_back( txt.substr( initialPos, pos - initialPos ) );
        initialPos = pos + 1;

        pos = txt.find( ch, initialPos );
    }

    // Add the last one
    strs.push_back( txt.substr( initialPos, min( pos, txt.size() ) - initialPos + 1 ) );

    return strs.size();
}

bool Interface::is_number(const string& s)
{
    string::const_iterator it = s.begin();
    while (it != s.end() && isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}

vector<string> Interface::getProcessName(){
    return Interface::processName;
}

vector<int> Interface::getBurstTime(){
    return Interface::burstTime;
}

vector<int> Interface::getArrivalTime(){
    return Interface::arrivalTime;
}

vector<int> Interface::getPriority(){
    return Interface::priority;
}

