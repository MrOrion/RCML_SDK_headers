/***********************************************************************
 * Module:  CRobotABB.h
 * Author:  Anton
 * Modified: 27 декабря 2017 г. 17:46:23
 * Purpose: Declaration of the class CRobotABB
 ***********************************************************************/

#if !defined(__RCML_Classes_CRobotABB_h)
#define __RCML_Classes_CRobotABB_h

#include <CPromRobot.h>
#include <Communication\CCommunication.h>

class CRobotABB : public CPromRobot
{
public:
protected:
private:
   CCommunication m_Communication;


};

#endif