//
// Created by sunyi on 2017/1/25.
//

#include "message.h"
using namespace std;
message::message(string text,string sub,string sub1="",string sub2="",string sub3="",string sub4=""):text(text){
    subject[0]=sub;
    if(sub1!=""){subject[1]=sub1;}
    if(sub2!=""){subject[2]=sub2;}
    if(sub3!=""){subject[3]=sub3;}
    if(sub4!=""){subject[4]=sub4;}
    for(int i=0;i<2;i++){
        flag[i]=false;
    }
}

void message::link(message &info){
    for(int i=0;i<100;i++){
        if(appearing[i]==NULL){appearing[i]=&info;}
        break;
    }
}

bool message::check(string sub) {
    for(int i=0;i<5;i++){
        if(sub==subject[i]){return true;}
    }
    return false;
}

void message::print_appearing(bool displayFlag[6]) {
    for(int i=0;i<100;i++){
        if(appearing[i]==NULL){continue;}
        appearing[i]->print_message(displayFlag);
    }
}


bool message::ispeople(){
        if(flag[PeopleFlag]){return true;}
        return false;
}


bool message::isclothes() {
    if(flag[ClothesFlag]){return true;}
    return false;
}


void message::peopleFlag(){
    flag[PeopleFlag]=true;
}


void message::clothesFlag() {
    flag[ClothesFlag]=true;
}