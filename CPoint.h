/***********************************************************************
 * Module:  CPoint.h
 * Author:  Anton
 * Modified: 15 ÿםגאנÿ 2018 ד. 17:05:22
 * Purpose: Declaration of the class CPoint
 ***********************************************************************/

#if !defined(__RCML_Classes_CPoint_h)
#define __RCML_Classes_CPoint_h

#include <CMoveControlDO.h>
#include <CCoordinates.h>

class CPoint
{
public:
   CPoint(CCoordinates Coordinates);
   void SetDefSpeed(int Value);

protected:
private:
   static int m_DefSpeed;
   int Attribute_1;
   int Attribute_2;
   CMoveControlDO Attribute_3;
   CCoordinates m_Coordinates;


};

#endif