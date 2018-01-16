/***********************************************************************
 * Module:  CRobotModule.h
 * Author:  Anton
 * Modified: 26 декабря 2017 г. 14:11:40
 * Purpose: Declaration of the class CRobotModule
 ***********************************************************************/

#if !defined(__RobotModules_CRobotModule_h)
#define __RobotModules_CRobotModule_h

#include <CRobot.h>

class CRobotModule
{
public:
   virtual void Init(CJson Settings);
   CRobot GetRobotByName(std::string Name);
   CRobot GetRobotById(int Id);

protected:
private:
   CJson m_Settings;
   CRobot m_Robots;


};

#endif