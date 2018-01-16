/***********************************************************************
 * Module:  CMoveControlDO.h
 * Author:  Anton
 * Modified: 15 ÿםגאנÿ 2018 ד. 17:17:24
 * Purpose: Declaration of the class CMoveControlDO
 ***********************************************************************/

#if !defined(__RCML_Classes_CMoveControlDO_h)
#define __RCML_Classes_CMoveControlDO_h

class CMoveControlDO
{
public:
   CTriggerType GetTriggerType(void);
   void SetTriggerType(CTriggerType TriggerType);

protected:
private:
   /* CTriggerType{
    *   ttTime
    *   ttDistance
    * } */
   CTriggerType m_TriggerType;
   /* CLocationType{
    *    ltStart
    *    ltEnd
    * } */
   CLocationType m_OnStart;
   double m_TriggerValue;
   int m_Do;
   int m_Value;


};

#endif