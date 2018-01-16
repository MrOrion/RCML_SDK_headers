/***********************************************************************
 * Module:  CCartesianCoordinate.h
 * Author:  Anton
 * Modified: 15 ÿםגאנÿ 2018 ד. 15:21:49
 * Purpose: Declaration of the class CCartesianCoordinate
 ***********************************************************************/

#if !defined(__RCML_Classes_CCartesianCoordinate_h)
#define __RCML_Classes_CCartesianCoordinate_h

#include <CCoordinate.h>

class CCartesianCoordinate : public CCoordinate
{
public:
   CCartesianCoordinate(double X, double Y, double Z, double C);
   CCartesianCoordinate(double X, double Y, double Z, double A, double B, double C);

protected:
private:
   double m_X;
   double m_Y;
   double m_Z;
   double Attribute_4;
   double Attribute_5;
   double Attribute_6;


};

#endif