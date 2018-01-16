/***********************************************************************
 * Module:  CJoint.h
 * Author:  Anton
 * Modified: 15 ÿםגאנÿ 2018 ד. 18:24:11
 * Purpose: Declaration of the class CJoint
 ***********************************************************************/

#if !defined(__RCML_Classes_CJoint_h)
#define __RCML_Classes_CJoint_h

class CJoint
{
public:
   CJoint(int Index, int Angle);
   int GetAngle(void);
   void SetAngle(int Angle);

protected:
private:
   int Attribute_3;
   int Attribute_4;


};

#endif