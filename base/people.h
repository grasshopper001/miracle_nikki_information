//
// Created by sunyi on 2017/1/25.
//

#ifndef INFOS_PEOPLE_H
#define INFOS_PEOPLE_H
#include "message.h"
using namespace std;
//sub0==name==display0
//sub1==family==display1
//text==人设==display5


class people:public message{
protected:

public:
    people(string text,string name,string family);
    void print_message(bool displayFlag[6]);
    string name();
    string family();
};
#endif //INFOS_PEOPLE_H
