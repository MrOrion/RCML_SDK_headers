/***********************************************************************
 * Module:  CActionLoad.h
 * Author:  Anton
 * Modified: 25 ������� 2017 �. 20:12:47
 * Purpose: Declaration of the class CActionLoad
 ***********************************************************************/

#if !defined(__RCML_Classes_CActionLoad_h)
#define __RCML_Classes_CActionLoad_h

#include <CAction.h>

class CActionLoad : public CAction
{
public:
   void SetLoad(int Value);
   int GetLoad(void);

protected:
private:
   int Attribute_1;


};

#endif