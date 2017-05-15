#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <utility>

using namespace std;

//                      <name, pair <sum,           number> >
void push_mark(map<string, pair<unsigned int, unsigned int> >& marks, string name, unsigned int mark)
{
    marks[name].first += mark;
    marks[name].second += 1;
    return;
}

int main(int argc, char *argv[])
{
    string s;
    getline(cin, s);
    string name;
    int mark;
    size_t pos;
    map<string, pair<unsigned int, unsigned int> > marks;
    while (s != "*")
    {
        pos = s.find(' ');
        name = s.substr(0, pos);
        s.erase(0, pos+1);
        pos = s.find(' ');
        mark = stoi(s.substr(0, pos));
        if (pos != string::npos)
            s.erase(0, pos+1);
        else
            s = "";
        push_mark(marks, name, mark);
    }
    for (auto p : marks)
    {
        cout << p.first << " " << (p.second.first * 1.0 / p.second.second) << endl;
    }
    return 0;
}
