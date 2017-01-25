#include <iostream>
#include "data.h"
#include <QString>

using namespace std;

int main()
{
    data defaultData;
    defaultData.searchpeople("祝羽弦");
    QString str = "祝羽弦";
    std::cout << str.toStdString();

    return 0;
}