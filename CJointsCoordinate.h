/***********************************************************************
 * Module:  CJointsCoordinate.h
 * Author:  Anton
 * Modified: 15 ÿםגאנÿ 2018 ד. 18:21:43
 * Purpose: Declaration of the class CJointsCoordinate
 ***********************************************************************/

#if !defined(__RCML_Classes_CJointsCoordinate_h)
#define __RCML_Classes_CJointsCoordinate_h

#include <CCoordinate.h>
#include <CJoint.h>

class CJointsCoordinate : public CCoordinate
{
public:
   int Add(CJoint Joint);
   CJoint Get(void);

protected:
private:
   std::vector<CJoint> m_Joints;


};

#endif