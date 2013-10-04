
#include "stdafx.h"


#include "mathPoint.h"

//=============================================================================
mathPoint::mathPoint(double a_x, double a_y, double a_z) :
  m_x(a_x),
  m_y(a_y),
  m_z(a_z)
//
//
//
{
}


//=============================================================================
const double mathPoint::norm() const
//
//
//
{
  return sqrt(m_x*m_x + m_y*m_y + m_z*m_z);
}
