#ifndef PERSON_PERSON_H
#define PERSON_PERSON_H
#include <iostream>
#include <string>
using namespace std;

class Person{

private:
    string firstName = "";
    string lastName = "";
    string email = "";
    string number = "";

public:
    // default constructor
    Person() : firstName(""), lastName(""), email(""), number("") {}

    // constructor
    Person (string personFirstName, string personLastName,
            string personEmail, string personNumber);

    void setFirstName(string stuff);

    string getFirstName() const;

    void setLastName(string stuff);
//
    string getLastName() const;

    void setEmail(string stuff);

    string getEmail() const;
//
    void setNumber(string stuff);
//
    string getNumber() const;



    friend ostream& operator<<(ostream& ostr, const Person& pers);

};

    ostream& operator<<(ostream& ostr, const Person& pers);

    #endif

