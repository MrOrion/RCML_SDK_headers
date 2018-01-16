/***********************************************************************
 * Module:  CSensor.h
 * Author:  Anton
 * Modified: 12 декабря 2017 г. 12:10:57
 * Purpose: Declaration of the class CSensor
 ***********************************************************************/

#if !defined(__RCML_Classes_CSensor_h)
#define __RCML_Classes_CSensor_h

#include <CRobot.h>
#include <CExtension.h>

class CSensor : public CRobot, public CExtension
{
public:
   void Scan(void);
   std::vector<CCoordinates> GetCoordinates(void);

protected:
private:

};

#endif