/***********************************************************************
 * Module:  CCoordinates.h
 * Author:  Anton
 * Modified: 15 ÿםגאנÿ 2018 ד. 16:41:39
 * Purpose: Declaration of the class CCoordinates
 ***********************************************************************/

#if !defined(__RCML_Classes_CCoordinates_h)
#define __RCML_Classes_CCoordinates_h

#include <CCoordinate.h>

class CCoordinates
{
public:
   void Add(CCoordinate Coordinate);
   CCoordinate Get(int Group);

protected:
private:
   std::vector<CCoordinate> m_Coordinates;


};

#endif