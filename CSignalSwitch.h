/***********************************************************************
 * Module:  CSignalSwitch.h
 * Author:  Anton
 * Modified: 28 декабря 2017 г. 16:27:35
 * Purpose: Declaration of the class CSignalSwitch
 ***********************************************************************/

#if !defined(__RCML_Classes_CSignalSwitch_h)
#define __RCML_Classes_CSignalSwitch_h

#include <Communication\CCommunication.h>

class CSignalSwitch
{
public:
   void SetDI(int Value, int InputNumber, bool Queue);
   int GetDI(int InputNumber);
   int GetDO(int OutputNumber);

protected:
private:
   CCommunication m_Communication;


};

#endif