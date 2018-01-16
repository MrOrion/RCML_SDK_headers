/***********************************************************************
 * Module:  CActionStartProgram.h
 * Author:  Anton
 * Modified: 27 декабря 2017 г. 13:47:05
 * Purpose: Declaration of the class CActionStartProgram
 ***********************************************************************/

#if !defined(__RCML_Classes_CActionStartProgram_h)
#define __RCML_Classes_CActionStartProgram_h

#include <CAction.h>

class CActionStartProgram : public CAction
{
public:
   void StartProgram(std::string Name);

protected:
private:

};

#endif