#ifndef _ACESSPOINTS_HH_
#define _ACESSPOINTS_HH_

#include <string>
#include <cstdint>

#include "AccessPeriod.hh"


class AccessPoint
{
public:
    AccessPoint(/* args */);
    ~AccessPoint();

    uint16_t getClassNumber();
    uint16_t getClassCapacity();
    AccessPeriod getAccessPeriod();
    std::string getIpAddress();
    bool isNeedToFix();

    void setIpAddress(std::string p_IpAddress);
    void setNeedToFix(bool p_needToFix);
    void setAccessPeriod(AccessPeriod p_accessPeriod);

    

private:
    uint16_t m_classNumber;
    uint16_t m_classCapacity;
    std::string m_ipAddress;
    bool m_needToFix;
    AccessPeriod m_accessPeriod;
};



#endif //_ACESSPOINTS_HH_