/***********************************************************************
 * Module:  CCommunication.h
 * Author:  Anton
 * Modified: 27 декабря 2017 г. 17:47:12
 * Purpose: Declaration of the class CCommunication
 ***********************************************************************/

#if !defined(__Communication_CCommunication_h)
#define __Communication_CCommunication_h

class CCommunication
{
public:
   void Connect(void);
   void Disconnect(void);
   void SendMessage(SendMessage Message);
   CMessage ReciveMessage(void);

protected:
private:
   Event Attribute_1;


};

#endif