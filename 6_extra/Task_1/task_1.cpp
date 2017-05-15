#include <iostream>
#include <list>
#include <utility>

using namespace std;

int second(const list<int>& int_list)
{
    if (auto iter = int_list.begin())
    {
        auto maxs = make_pair(*iter, *iter);
        while (maxs != int_list.end())
        {
            (*iter > maxs.first ? maxs.first = *iter : (*iter > maxs.second ? ))
        }
    }
}

int main(int argc, char *argv[])
{

}
