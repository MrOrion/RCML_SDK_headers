/***********************************************************************
 * Module:  CGripperSMC.h
 * Author:  Anton
 * Modified: 28 декабря 2017 г. 17:11:54
 * Purpose: Declaration of the class CGripperSMC
 ***********************************************************************/

#if !defined(__RCML_Classes_CGripperSMC_h)
#define __RCML_Classes_CGripperSMC_h

#include <CRobot.h>

class CGripperSMC : public CRobot
{
public:
   void ReturnToOrigin(void);
   void SetThrust(int Thrust);
   int GetThrust(void);
   std::vector<int> GetAlarms(void);
   void ResetAlarms(void);
   int Move(double Value);
   double GetPostition(void);
   void RelativeMove(double Value);
   void SetSpeed(int Value);
   int GetSpeed(void);

protected:
private:

};

#endif