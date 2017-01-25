//
// Created by sunyi on 2017/1/25.
//
#include "data.h"
//people(text,name,family)
//clothes(text,clothesname,name1,name2,name3,name4)

data::data()
{
    database.push_back(new people("", "祝羽弦", "炽凰"));
    database.push_back(new people("", "冥水鸢", "沧冥"));
    database.push_back(new people("", "白永羲", ""));
    database.push_back(new people("", "越千霜", "霜虎"));
    database.push_back(new people("", "祝若笙", "炽凰"));
    database.push_back(new people("", "白锦锦", ""));
    database.push_back(new clothes("春水送兰舟。冥水鸢离开南境时，祝羽弦一个人去了渡口。他在岸边占了很久，看冥家的渡船渐行渐远。",
                               "春水流*群青", "祝羽弦", "冥水鸢"));

    this->refresh();
}

void data::searchpeople(string name)
{
    for (auto &iter:database)
    {
        if (iter->ispeople())
        {
            people *temp = (people *) iter;
            if (temp->name() == name)
            {
                bool displayFlag1[6] = {true, true, true, true, true, true};
                temp->print_message(displayFlag1);
                bool displayFlag2[6] = {true, false, false, false, false, true};
                temp->print_appearing(displayFlag2);
            }
        }
    }
}

void data::searchclothes(string clothesName)
{
    for (auto &iter:database)
    {
        if (iter->isclothes())
        {
            clothes *temp = (clothes *) iter;
            if (temp->clothesName() == clothesName)
            {
                bool f[6] = {true, true, true, true, true, true};
                temp->print_message(f);
            }
        }
    }
}

void data::refresh()
{
    for (auto &iter:database)
    {
        if (iter->ispeople())
        {
            people *temp = (people *) iter;
            for (auto &iter2:database)
            {
                if (iter2->isclothes())
                {
                    clothes *temp2 = (clothes *) iter2;
                    if (temp2->doExist(temp->name()))
                    {
                        iter->link(iter2);
                        iter2->link(iter);
                    }
                }
            }
        }
    }
}