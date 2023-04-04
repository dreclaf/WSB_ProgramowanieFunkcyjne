#include "AccessPeriod.hh"

AccessPeriod::AccessPeriod(){};
AccessPeriod::~AccessPeriod(){}

AccessPeriod::AccessPeriod(std::string p_startAccess, std::string p_endDate)
{
	m_accessTime = getAccessTime();
}

AccessPeriod::AccessPeriod(std::string p_accessTime)
{
}

void AccessPeriod::setStartDate(std::string startAccess)
{
	m_startAccess = startAccess;
}

void AccessPeriod::setEndDate(std::string endAccess)
{
	m_endAccess = endAccess;
}

std::string AccessPeriod::getAccessTime()
{
	return m_accessTime;
}

std::string getAccessTime(std::string p_startDate, std::string p_endDate)
{
	AccessPeriod accessPeriod = AccessPeriod(p_startDate, p_endDate);
	// nie mam pomys³u jak to zrobiæ *lepiej* -> SOLIDnie

	struct tm accessStartDate = accessPeriod.stringToDateParser(p_startDate);
	struct tm accessEndDate = accessPeriod.stringToDateParser(p_endDate);

	struct tm timeLeft = accessPeriod.substractDates(accessStartDate, accessEndDate);
	std::string timeLeftParsed = std::to_string(timeLeft.tm_mday) + "/" + std::to_string(timeLeft.tm_mon) + "/" + std::to_string(timeLeft.tm_year);
	// Tak, brzydkie i trochê desperackie
	return timeLeftParsed;
}

std::string AccessPeriod::getStartDate()
{
	return m_startAccess;
}

std::string AccessPeriod::getEndDate()
{
	return m_endAccess;
}

struct tm AccessPeriod::stringToDateParser(std::string p_dateToParse)
{
	const char* dateToParse = p_dateToParse.c_str();
	std::string s_day, s_month, s_year;
	int day, month, year;

	s_day = dateToParse[0] + dateToParse[1];
	s_month = dateToParse[3] + dateToParse[4];
	s_month = dateToParse[6] + dateToParse[7];

	day = stoi(s_day);
	month = stoi(s_month);
	year = stoi(s_year);

	// DD/MM/RRRR
	struct tm dateParser = { dateParser.tm_year = year, dateParser.tm_mon = month, dateParser.tm_mday = day};
	return dateParser;
}

tm AccessPeriod::substractDates(tm p_startDate, tm p_endDate)
{
	int days, months, years;
	years = p_endDate.tm_year - p_startDate.tm_year;
	months = p_endDate.tm_mon - p_startDate.tm_mon;
	days = p_endDate.tm_mday - p_startDate.tm_mday;

	// mo¿na u¿yæ tutaj switch case'a dla miesiêcy, by obliczenia by³y dok³adne, a nie przybli¿one do 30 i dla lat przestêpnych
	// Tylko, czy chcemy a¿ tak dok³adnie to liczyæ?
	// z tego móg³by chyba wyjœæ nawet factry pattern dla miesiecy i lat

	if (days < 0)
	{
		months--;
		days = 30 - days % 30;
	}
	if (months < 0)
	{
		years--;
		months = 12 - months % 12;
	}

	struct tm timeLeft = {
		timeLeft.tm_year = days,
		timeLeft.tm_mon = months,
		timeLeft.tm_mday = years };

	return timeLeft;
}