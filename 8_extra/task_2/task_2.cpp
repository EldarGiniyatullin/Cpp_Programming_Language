#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<pair<string, string>, string> books_bands_n_humans = map<pair<string, string>, string>();
    while (true)
    {
        string name, book, band;
        cin >> name >> book >> band;
        pair<string, string> key = make_pair(book, band);
        map<pair<string, string>, string>::iterator p = books_bands_n_humans.find(key);
        if (p != books_bands_n_humans.end() && p->second != name)
        {
            cout << "Интересы совпадают: " << p->second << " " << name << " (" << book << ", " << band << ")" << endl;
            break;
        }
        else
        {
            books_bands_n_humans[key] = name;
        }
    }
    return 0;
}
