/***********************************************************************
 * Module:  CActionsQueue.h
 * Author:  Anton
 * Modified: 15 ÿםגאנÿ 2018 ד. 11:38:38
 * Purpose: Declaration of the class CActionsQueue
 ***********************************************************************/

#if !defined(__RCML_Classes_CActionsQueue_h)
#define __RCML_Classes_CActionsQueue_h

#include <CAction.h>

class CActionsQueue
{
public:
   int AddAction(CAction Action);
   void RemoveAction(int ActionId);
   int Count(void);
   CAction GetById(int ActionId);
   CAction GetByIndex(int Index);
   CAction GetFromArchiveByIndex(int Index);
   CAction GetFromArchiveById(int CActionId);
   int CountInArchive(void);
   void Execute(void);

protected:
private:
   std::map<int, CAction> m_ActionQueue;
   std::map<int, CAction> m_ActionArchive;


};

#endif