#include <map>
#include <cstdint>
#include <string>
#include <vector>


void setName(std::string p_name);

// TODO move to utils
struct AccessDate
{
    std::string m_startAccess;
    std::string m_endAccess;
};

// TODO -> move to class
struct Users
{
    uint8_t m_id;
    std::string m_name;
    std::string m_surrname;
    uint8_t m_age;
    std::vector<std::string> m_access; // TODO (for students -> make proposal of structure to access)
    AccessDate m_accessPeriod;
};

int main(int argc, char** argv)
{
    // TODO include some db and use Singleton!
    // TODO use BUILDER and(?) FACTORY
    // Application::startApp(); -> only CLI
    return 0;
}

// stworzyć strukturę projektu
// przygotować cmkae
// implementacja:
// - ogarnąć User z getters/setters
// - ogarnąć jak korzystać z struktury TM
// - przygotować utils
// - baza danych, noSQL lub SQL (zależy od czasu)
// - APLIKACJA obsługująca całość
//      -- do ustalenia zakres działań (prostu CRUD)