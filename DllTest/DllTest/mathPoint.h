

#include "stdafx.h"
#include "math.h"

class mathPoint {

public:

  mathPoint(double a_x, double a_y, double a_z);

  const double norm() const;

private:

  double& m_x;
  double& m_y;
  double& m_z;

};