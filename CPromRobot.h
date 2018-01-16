/***********************************************************************
 * Module:  CPromRobot.h
 * Author:  Anton
 * Modified: 26 декабря 2017 г. 13:54:19
 * Purpose: Declaration of the class CPromRobot
 ***********************************************************************/

#if !defined(__RCML_Classes_CPromRobot_h)
#define __RCML_Classes_CPromRobot_h

#include <CRobot.h>
#include <CSignalSwitch.h>
#include <CMoveJoints.h>
#include <CArcMove.h>
#include <CMoveLineral.h>

class CPromRobot : public CRobot, public CSignalSwitch, public CMoveJoints, public CArcMove, public CMoveLineral
{
public:
   void SetTool(int Tool, bool Queue);
   int GetTool(void);
   void SetBase(int Base, bool Queue);
   int GetBase(void);
   void SetLoad(double Load, bool Queue);
   void StartProgram(CVariantArray Params, bool Queue);
   void EmergancyStop(void);
   void ReturnToWork(void);
   CRobotInternalError GetInternalError(void);

protected:
private:

};

#endif