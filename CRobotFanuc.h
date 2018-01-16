/***********************************************************************
 * Module:  CRobotFanuc.h
 * Author:  Anton
 * Modified: 28 декабря 2017 г. 17:02:34
 * Purpose: Declaration of the class CRobotFanuc
 ***********************************************************************/

#if !defined(__RCML_Classes_CRobotFanuc_h)
#define __RCML_Classes_CRobotFanuc_h

#include <CPromRobot.h>
#include <Communication\CCommunication.h>
#include <CCoordinate.h>

class CRobotFanuc : public CPromRobot
{
public:
   int GetRO(int OutputNumber);
   void SetRO(int Value, int InputNubmer, bool Que);
   int GetGO(int OuntpuNumber);
   void SetGO(int OutputNumber, bool Queue);
   int GetGI(int InputNumber);
   int GetReg(int RegNum);
   void SetReg(int RegNum, int Value, bool Queue);
   void SetPosReg(int RegNum, CCoordinate Coordinate, bool Queue);

protected:
private:
   CCommunication m_Communication;


};

#endif