#ifndef _USER_
#define _USER_

#include <string>
#include <cstdint>
#include <vector>

#include "AccessPoint.hh"

class User
{
public:
    User();
    ~User();
    // TODO wzorzec BUDOWNICZY!

private:
    uint8_t m_id;
    std::string m_name;
    std::string m_surrname;
    uint8_t m_age;
    std::vector<AccessPoint> m_accessPoints; // TODO (for students -> make proposal of structure to access)
    AccessPeriod m_accessPeriod;
};

#endif