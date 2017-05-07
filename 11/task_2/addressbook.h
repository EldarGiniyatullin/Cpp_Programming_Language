#include <memory>
#include <string>
#include <map>

using std::string;
using std::map;
using std::shared_ptr;

class Address
{
public:
    Address(string city_, string street_, string house_) :
        city(city_), street(street_), house(house_) {}
    ~Address() {}
    string fullAddress()
    {
        return string(city + ", " + street + " st., " + house);
    }
private:
    string city;
    string street;
    string house;
};


class AddressBook
{
public:
    AddressBook() {}
    void add(string name_, string city_, string street_, string house_)
    {
        book[name_] = shared_ptr<Address>(new Address(city_, street_, house_));
    }
    void addHousemate(string houseMateName, string name_)
    {
        book[houseMateName] = shared_ptr<Address>(book[name_]);
    }
    void remove(const string& name_)
    {
        book.erase(name_);
    }
    string address(const string& name_)
    {
        auto p = book.find(name_);
        return (p != book.end() ? (*((*p).second)).fullAddress() : string("No any record with name " + name_));
    }
private:
    map<string, shared_ptr<Address> > book;
};
