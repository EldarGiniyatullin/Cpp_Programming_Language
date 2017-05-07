#include <iostream>
#include "addressbook.h"

using namespace std;

int main(int argc, char *argv[])
{
    AddressBook a = AddressBook();
    a.add("Ivanov", "Moscow", "Arbat", "8");
    a.addHousemate("Petrov", "Ivanov");
    cout << a.address("Ivanov") << endl;
    cout << a.address("Petrov") << endl;
    cout << a.address("Sidorov") << endl;
    return 0;
}
