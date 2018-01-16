/***********************************************************************
 * Module:  CMoveLineral.h
 * Author:  Anton
 * Modified: 27 декабря 2017 г. 13:56:46
 * Purpose: Declaration of the class CMoveLineral
 ***********************************************************************/

#if !defined(__RCML_Classes_CMoveLineral_h)
#define __RCML_Classes_CMoveLineral_h

#include <CMoveCartesian.h>
#include <CPoints.h>

class CMoveLineral : public CMoveCartesian
{
public:
   void MoveLineral(CPoints Points, bool Queue);
   void MoveLineralRelative(CPoints Points, bool Queue);

protected:
private:

};

#endif