/***********************************************************************
 * Module:  CRobot.h
 * Author:  Anton
 * Modified: 26 ������� 2017 �. 15:33:49
 * Purpose: Declaration of the class CRobot
 * Comment: �������� ����� �����
 ***********************************************************************/

#if !defined(__RCML_Classes_CRobot_h)
#define __RCML_Classes_CRobot_h

class CRobot
{
public:
   virtual void Init(CJson Settings);
   std::vector<SupportedFunction> GetSupportedFunctions(void);
   int GetId(void);
   std::string GetName(void);

protected:
   int m_Id;
   std::string m_Name;
   CJson m_Settings;

private:

};

#endif