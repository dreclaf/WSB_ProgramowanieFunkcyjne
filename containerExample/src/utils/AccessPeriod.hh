#ifndef _ACCESSPERIOD_HH_
#define _ACCESSPERIOD_HH_
#include <string>


class AccessPeriod
{
public:
    AccessPeriod();
    ~AccessPeriod();
    AccessPeriod getAccessPeriod();
    AccessPeriod::AccessPeriod(std::string p_startDate, std::string p_endDate);

    void setAccessPeriod(int startDate, int endDate);
    void setStartDate(int p_startDate);
    void setEndDate(int p_endDate);

    
    std::string getStartDate();
    std::string getEndDate();
    

private:
    std::string m_startAccess;
    std::string m_endAccess;
};

#endif // _ACCESSPERIOD_HH_