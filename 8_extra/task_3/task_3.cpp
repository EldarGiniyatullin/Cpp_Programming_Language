#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<string, string> books_n_humans = map<string, string>();
    map<string, string> bands_n_humans = map<string, string>();
    while (true)
    {
        string name, book, band;
        cin >> name >> book >> band;
        map<string, string>::iterator p_book = books_n_humans.find(book);
        map<string, string>::iterator p_band = bands_n_humans.find(band);
        if (p_book != books_n_humans.end() && p_book->second != name)
        {
            cout << "Интересы частично совпадают: " << p_book->second << " " << name << " (" << p_book->first << ")" << endl;
            break;
        }
        else if (p_band != bands_n_humans.end() && p_band->second != name)
        {
            cout << "Интересы частично совпадают: " << p_band->second << " " << name << " (" << p_band->first << ")" << endl;
            break;
        }
        else
        {
            books_n_humans[book] = name;
            bands_n_humans[band] = name;
        }
    }
    return 0;
}
