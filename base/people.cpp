//
// Created by sunyi on 2017/1/25.
//
#include "people.h"
people::people(string text,string name,string family)
        : message(text,name,family) {
    this->peopleFlag();
    for(int i=0;i<100;i++){
        appearing[i]=NULL;
    }
}

void people::print_message(bool displayflag[6]) {
    if(displayflag[0])  cout<<"name:"<<this->subject[0]<<endl;
    if(displayflag[1])  cout<<"family"<<this->subject[1]<<endl;
    if(displayflag[5])  cout<<"人设"<<this->text<<end;
    cout<<"*****"<<endl;
}

string people::name() {
    return subject[0];
}

string people::family() {
    return subject[1];
}