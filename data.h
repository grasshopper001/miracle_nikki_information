//
// Created by sunyi on 2017/1/25.
//

#ifndef INFOS_DATA_H
#define INFOS_DATA_H
#include "base/message.h"
#include "base/people.h"
#include "base/clothes.h"
#include <vector>
using namespace std;
class data{
protected:
    vector<message*> database;
public:
    data();
    void refresh();
    void searchpeople(string name);
    void searchclothes(string clothesName);
};
#endif //INFOS_DATA_H
