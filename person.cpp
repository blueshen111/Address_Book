//#include <iostream>
#include "Person.h"
using namespace std;



    Person::Person (string personFirstName, string personLastName,
                    string personEmail, string personNumber) {

        firstName = personFirstName;
        lastName = personLastName;
        email = personEmail;
        number = personNumber;


    }

//    void Person::setFirstName(string stuff) {
//        firstName = stuff;
//    }

    string Person::getFirstName() const {
        return firstName;
    }


//   void Person::setLastName(string stuff){
//        lastName = stuff;
//    }
//
    string Person::getLastName() const {
       return lastName;
    }
//
//    void Person::setEmail(string stuff){
//        email = stuff;
//    }

    string Person::getEmail() const{
        return email;
   }

//    void Person::setNumber(string stuff){
//        number = stuff;
//    }
//
   string Person::getNumber() const {
        return number;
   }

//    void printInfo(string stuff) const {
//        cout << stuff << endl;
//    }



    ostream& operator<<(ostream& ostr, const Person& pers){
        ostr << pers.getFirstName() << " " << pers.getLastName() << " " <<
        pers.getEmail() << " " << pers.getNumber() << endl;
        return ostr;
    }

