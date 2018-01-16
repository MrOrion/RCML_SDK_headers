/***********************************************************************
 * Module:  CExtension.h
 * Author:  Anton
 * Modified: 7 декабря 2017 г. 16:39:25
 * Purpose: Declaration of the class CExtension
 ***********************************************************************/

#if !defined(__RCML_Classes_CExtension_h)
#define __RCML_Classes_CExtension_h

class CExtension
{
public:
   CVariantArray CallFunction(std::string Name, CVariantArray Params);
   CVariantArray GetProperty(std::string Name);
   void SetProterty(std::string Name, CVariantArray Value);

protected:
private:
   std::map m_FunctionsMap;
   std::map m_PropertyMap;


};

#endif