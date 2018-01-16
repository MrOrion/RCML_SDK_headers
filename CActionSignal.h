/***********************************************************************
 * Module:  CActionSignal.h
 * Author:  Anton
 * Modified: 25 декабря 2017 г. 20:05:39
 * Purpose: Declaration of the class CActionSignal
 ***********************************************************************/

#if !defined(__RCML_Classes_CActionSignal_h)
#define __RCML_Classes_CActionSignal_h

#include <CAction.h>

class CActionSignal : public CAction
{
public:
   void AddSignal(SignalType Signal, int Value, int Index);
   int GetSignal(CSignalType Signal, int Index);

protected:
private:
   std::map<SignalType, int> m_SignalMap;


};

#endif