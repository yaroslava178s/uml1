#include <iostream>
#include "IntData.h"
#include "DoubleData.h"
#include "IntArrayData.h"
#include "DoubleArrayData.h"

int main()
{
    IntData data1;
    IntData data2(10);
    DoubleData ddata1;
    DoubleData ddata2(40.0);

    IntData * pData1 = new IntData;
    DoubleData * pData2 = new DoubleData(20);

    data1.print();
    data2.print();
    ddata1.print();
    ddata2.print();

    data1.setData();
    ddata1.setData();

    std::cout << data1.getData() << '\n';
    std::cout << ddata1.getData() << '\n';

    pData1->print();
    pData2->print();

    delete pData1;
    delete pData2;

    return 0;
}
