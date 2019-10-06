#ifndef PERSON_ADDRESS_H
#define PERSON_ADDRESS_H
#include "Person.h"
#include <iostream>
#include <vector>
using namespace std;

class Address{

    vector<Person> contactList;

    public:
        Address() ;

        void add(Person& person);

        void subtract(string firstName);

        Person find(string firstName) const;

friend ostream& operator<<(ostream& ostr, const Address& address);


};

ostream& operator<<(ostream& ostr, const Address& address);

#endif

