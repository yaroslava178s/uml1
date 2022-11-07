#include "DoubleData.h"

DoubleData::DoubleData(double data)
{
    m_data = data;
}

DoubleData::~DoubleData()
{

}

void DoubleData::setData()
{
    scanf("%lf", &m_data);
}

double DoubleData::getData()
{
    return m_data;
}

void DoubleData::print()
{
    printf("%f\n", m_data);
}
