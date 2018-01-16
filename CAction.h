/***********************************************************************
 * Module:  CAction.h
 * Author:  Anton
 * Modified: 26 декабря 2017 г. 18:29:07
 * Purpose: Declaration of the class CAction
 ***********************************************************************/

#if !defined(__RCML_Classes_CAction_h)
#define __RCML_Classes_CAction_h

#include <CActionGetInternalError.h>

class CAction : public CActionGetInternalError
{
public:
protected:
private:
   int Attribute_1;
   int Attribute_2;
   /* actGet
    * actSet
    * actMove */
   CActionType m_ActionType;


};

#endif