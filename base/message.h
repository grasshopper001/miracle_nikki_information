//
// Created by sunyi on 2017/1/25.
//

#ifndef INFOS_MESSAGE_H
#define INFOS_MESSAGE_H
#include <iostream>
#include <string.h>
using namespace std;

class message{
protected:
    message* appearing[100];
    string subject[5];
    string text;
    bool flag[2];
    enum flag{PeopleFlag,ClothesFlag};
public:
    message(string text,string sub,string sub1="",string sub2="",string sub3="",string sub4="");
    bool ispeople();
    bool isclothes();
    void peopleFlag();
    void clothesFlag();
    bool check(string sub);
    void print_appearing(bool displayFlag[6]);
    virtual void print_message(bool displayFlag[6])=0;
    virtual void link(message *info);
};
#endif //INFOS_MESSAGE_H
