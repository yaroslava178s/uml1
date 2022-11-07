#include "IntData.h"

IntData::IntData(int data)
{
    m_data = data;
}

IntData::~IntData()
{

}

void IntData::setData()
{
    scanf("%d", &m_data);
}

int IntData::getData()
{
    return m_data;
}

void IntData::print()
{
    printf("%d\n", m_data);
}
