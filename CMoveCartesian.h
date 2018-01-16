/***********************************************************************
 * Module:  CMoveCartesian.h
 * Author:  Anton
 * Modified: 27 декабря 2017 г. 13:49:58
 * Purpose: Declaration of the class CMoveCartesian
 ***********************************************************************/

#if !defined(__RCML_Classes_CMoveCartesian_h)
#define __RCML_Classes_CMoveCartesian_h

#include <CCoordinates.h>
#include <CPoints.h>

class CMoveCartesian
{
public:
   CCoordinates GetCoordinate(void);
   void MoveCartesian(CPoints Points, bool Queue);
   void MoveCartesianRelative(CPoints Points, bool Queue);

protected:
private:

};

#endif