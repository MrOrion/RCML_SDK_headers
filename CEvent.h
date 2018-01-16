/***********************************************************************
 * Module:  CEvent.h
 * Author:  Anton
 * Modified: 12 декабря 2017 г. 12:11:33
 * Purpose: Declaration of the class CEvent
 ***********************************************************************/

#if !defined(__RCML_Classes_CEvent_h)
#define __RCML_Classes_CEvent_h

class CEvent
{
public:
   void SebscribeOnEvent(void(CVariant, int) Function, void* Object);

protected:
   void CallEvent(CVariantArray ParamsArray, int EventId);

private:
   boost::signal<void(CVariantArray, int)> SelectCell Attribute_1;


};

#endif