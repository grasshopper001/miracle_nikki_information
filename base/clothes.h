//
// Created by sunyi on 2017/1/25.
//

#ifndef INFOS_CLOTHES_H
#define INFOS_CLOTHES_H
#include "message.h"
using namespace std;

//sub0=clothesName==display0
//sub1==name1==display1
//sub2==name2==display2
//sub3==name3==display3
//sub4=name4==display4
//text==文案==display5

class clothes:public message{
protected:

public:
   clothes(string text,string clothesName,string name1="",string name2="",string name3="",string name4="");
    void print_message(bool displayFlag[6]);
    string clothesName();
    bool doExist(string name);


};
#endif //INFOS_CLOTHES_H
