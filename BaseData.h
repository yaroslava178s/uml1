#ifndef __BASEDATA_H__
#define __BASEDATA_H__

#include <cstdio>

class BaseData
{
public:
    BaseData();
    virtual ~BaseData();
    void setData();
    virtual void print()=0;

};

#endif // __BASEDATA_H__
