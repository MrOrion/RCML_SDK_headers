/***********************************************************************
 * Module:  CActionTool.h
 * Author:  Anton
 * Modified: 25 декабря 2017 г. 20:08:18
 * Purpose: Declaration of the class CActionTool
 ***********************************************************************/

#if !defined(__RCML_Classes_CActionTool_h)
#define __RCML_Classes_CActionTool_h

#include <CAction.h>

class CActionTool : public CAction
{
public:
   void SetTool(int Value);
   int GetTool(void);

protected:
private:
   int Attribute_1;


};

#endif