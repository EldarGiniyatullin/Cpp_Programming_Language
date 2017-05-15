#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string, string> books_n_humans = map<string, string>();
    while (true)
    {
        string name, book;
        cin >> name >> book;
        map<string, string>::iterator p = books_n_humans.find(book);
        if (p != books_n_humans.end() && p->second != name)
        {
            cout << "Интересы совпадают: " << p->second << " " << name << " (" << book << ")" << endl;
            break;
        }
        else
        {
            books_n_humans[book] = name;
        }
    }
    return 0;
}
