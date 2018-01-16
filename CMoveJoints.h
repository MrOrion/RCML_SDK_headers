/***********************************************************************
 * Module:  CMoveJoints.h
 * Author:  Anton
 * Modified: 10 ÿםגאנÿ 2018 ד. 17:58:08
 * Purpose: Declaration of the class CMoveJoints
 ***********************************************************************/

#if !defined(__RCML_Classes_CMoveJoints_h)
#define __RCML_Classes_CMoveJoints_h

#include <CPoints.h>

class CMoveJoints
{
public:
   virtual void MoveJoint(CPoints Points, bool Queue);
   virtual CJoints GetAngles(void);

protected:
   int m_JointsCount;

private:

};

#endif