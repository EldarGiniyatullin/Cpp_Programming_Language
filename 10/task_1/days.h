#include <vector>
#include <map>
#include <string>

using std::vector;
using std::multimap;
using std::string;

class Days
{
public:
    Days()
    {
        holidays = vector<multimap<int, string> >(12, multimap<int, string>());
        holidays[0].insert(std::pair<int, string>(1, string("Новый год")));
        holidays[0].insert(std::pair<int, string>(1, string("Пока, старый год")));
        holidays[4].insert(std::pair<int, string>(1, string("Праздник весны и труда")));
        holidays[4].insert(std::pair<int, string>(9, string("День победы")));
    }
    ~Days() {}
    string what_day_is_it(int day, const string& month) const
    {
        int i = 0;
        for (; i != 12; i++)
        {
            if (names_of_months[i] == month)
                break;
        }

        if (i == 12)
            //по-хорошему бросать исключение?
            return "неверный месяц";

        if (holidays[i].count(day) != 0)
        {
            auto this_day = holidays[i].equal_range(day);
            string str = "";
            for (auto p = this_day.first; p != this_day.second; p++)
            {
                str += (p->second + "\n");
            }
            return str;
        }
        else return "нет праздников";
    }
protected:
    vector<multimap<int, string> > holidays;
    const vector<int> days_in_months {32, 30, 32, 31, 32, 31, 32, 32, 31, 32, 31, 32};
    const vector<string> names_of_months {"января", "февраля", "марта", "апреля", "мая", "июня", "июля", "августа", "сентября", "октября", "ноября", "декабря"};
};

