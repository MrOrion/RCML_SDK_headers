/***********************************************************************
 * Module:  CRobotKuka.h
 * Author:  Anton
 * Modified: 28 декабря 2017 г. 17:04:11
 * Purpose: Declaration of the class CRobotKuka
 ***********************************************************************/

#if !defined(__RCML_Classes_CRobotKuka_h)
#define __RCML_Classes_CRobotKuka_h

#include <CPromRobot.h>

class CRobotKuka : public CPromRobot
{
public:
protected:
private:
   CCommunication m_Communication;


};

#endif