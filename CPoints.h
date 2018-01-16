/***********************************************************************
 * Module:  CPoints.h
 * Author:  Anton
 * Modified: 15 ÿםגאנÿ 2018 ד. 17:05:04
 * Purpose: Declaration of the class CPoints
 ***********************************************************************/

#if !defined(__RCML_Classes_CPoints_h)
#define __RCML_Classes_CPoints_h

#include <CPoint.h>

class CPoints
{
public:
   int Add(CPoint Point);
   int Get(CPoint Point);

protected:
private:
   std::vector<CPoint> m_Points;


};

#endif