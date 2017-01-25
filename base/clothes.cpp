//
// Created by sunyi on 2017/1/25.
//
#include "clothes.h"
clothes::clothes(string text, string clothesName, string name1, string name2, string name3, string name4)
        :message(text,clothesName,name1,name2,name3,name4) {
    this->clothesFlag();
}


void clothes::print_message(bool displayFlag[6]) {
    if(displayFlag[0])  cout<<"clothes name:"<<subject[0]<<endl;
    if(displayFlag[1])  cout<<"relative people:"<<subject[1]<<endl;
    if(displayFlag[2])  cout<<"relative people:"<<subject[2]<<endl;
    if(displayFlag[3])  cout<<"relative people:"<<subject[3]<<endl;
    if(displayFlag[4])  cout<<"relative people:"<<subject[4]<<endl;
    if(displayFlag[5])  cout<<"文案:"<<text<<endl;
    cout<<"*****"<<endl;
}

string clothes::clothesName(){
    return subject[0];
}

bool clothes::doExist(string name) {
    for(int i=1;i<5;i++){
        if(name==subject[i]){return true;}
    }
    return false;
}
