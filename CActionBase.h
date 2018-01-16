/***********************************************************************
 * Module:  CActionBase.h
 * Author:  Anton
 * Modified: 25 декабря 2017 г. 20:06:41
 * Purpose: Declaration of the class CActionBase
 ***********************************************************************/

#if !defined(__RCML_Classes_CActionBase_h)
#define __RCML_Classes_CActionBase_h

#include <CAction.h>

class CActionBase : public CAction
{
public:
   void SetBase(int Value);
   int GetBase(void);

protected:
private:
   int Attribute_1;


};

#endif