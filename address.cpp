//#include <iostream>
#include "Address.h"
#include <vector>
#include <iterator>
//#include <cstdlib>
#include <algorithm>
//using namespace std;
//#include <iostream>

    Address::Address() { }

        void Address::add(Person& person){
            contactList.push_back(person);

        }

        void Address::subtract(string firstName) {

            for (int i = 0; i < contactList.size(); i++){

            if (contactList.at(i).getFirstName() == firstName){

            contactList.erase(contactList.begin() + i);

            }
        }
    }




    Person Address::find(string firstName) const {
        for (int i = 0; i < contactList.size(); i++){

            if (contactList.at(i).getFirstName() == firstName){

                        return contactList.at(i);
            }
        }
        return Person();
    }



    ostream& operator << (ostream& ostr, const Address& address){
    ostr << "{ ";
        copy(begin(address.contactList), end(address.contactList) - 1,
        ostream_iterator<Person>(ostr, "; "));

            if (address.contactList.size() > 0){

                ostr << address.contactList.at(address.contactList.size() -1) << ' ';

            }
                ostr << "}";
                return ostr;


    }
//
//ostream& operator<<(ostream& ostr, const Address& address) {
//    ostr << "{ ";
//
//    // copy up to but not including the last element
//    // putting a "; " after each one
//    copy(begin(address.contactList), end(address.contactList) - 1,
//         ostream_iterator<Person>(ostr, "; "));
//
//    // now output the last element (without a trailing "; ")
//    if (address.contactList.size() > 0) {
//        ostr << address.contactList.at(address.contactList.size() - 1) << ' ';
//    }
//
//    ostr << "}";
//    return ostr;
//}


