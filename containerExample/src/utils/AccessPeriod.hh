#ifndef _ACCESSPERIOD_HH_
#define _ACCESSPERIOD_HH_
#include <string>

class AccessPeriod
{
public:
    AccessPeriod();
    ~AccessPeriod();
    AccessPeriod::AccessPeriod(std::string p_startDate, std::string p_endDate);
    AccessPeriod::AccessPeriod(std::string p_accessTime); 
    // Kto� ma dost�p na tyle czasu od "teraz" 
    // W mojej g�owie brzmi to logicznie. Co Wy na to?

    void setStartDate(std::string p_startDate);
    void setEndDate(std::string p_endDate);

    std::string getAccessTime();

    std::string getAccessTime(std::string p_startDate, std::string p_endDate);
    // Pytanie do spo�eczno�ci
    // Czy ustawienie czasu na jaki kto� ma dost�p nie powinien by� osobn� zmienn�?
    
    std::string getStartDate();
    std::string getEndDate();

    struct tm stringToDateParser(std::string p_dateToParse);
    struct tm substractDates(struct tm p_startDate, struct tm p_endDate);

private:
    std::string m_startAccess;
    std::string m_endAccess;
    std::string m_accessTime;

};

#endif // _ACCESSPERIOD_HH_