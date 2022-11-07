#ifndef __DOUBLEDATA_H__
#define __DOUBLEDATA_H__
#include "BaseData.h"

class DoubleData : public BaseData
{
private:
    double m_data;
public:
    DoubleData(double data=0.0);
    ~DoubleData();
    void setData();
    double getData();
    void print();
};


#endif // __DOUBLEDATA_H__
