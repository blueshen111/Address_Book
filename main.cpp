#include <iostream>
#include <string>
#include "Person.h"
#include "Address.h"
using namespace std;
//
//
//class Person{
//
//private:
//    string firstName = "";
//    string lastName = "";
//    string email = "";
//    string number = "";
//
//public:
//    Person (string personFirstName, string personLastName, string personEmail,
//            string personNumber){
//                firstName = personFirstName;
//                lastName = personLastName;
//                email = personEmail;
//                number = personNumber;
//
//
//            }
//
//    void setFirstName(string stuff) {
//        firstName = stuff;
//    }
//
//    string getFirstName() {
//        return firstName;
//    }
//
//
//   void setLastName(string stuff){
//        lastName = stuff;
//    }
//
//    string getLastName(){
//        return lastName;
//    }
//
//    void setEmail(string stuff){
//        email = stuff;
//    }
//
//    string getEmail(){
//        return email;
//    }
//
//    void setNumber(string stuff){
//        number = stuff;
//    }
//
//    string getNumber(){
//        return number;
//    }
//
////    void printInfo(string stuff) const {
////        cout << stuff << endl;
////    }
//
//    friend ostream& operator<<(ostream& ostr, Person& pers);
//
//};
//
//    ostream& operator<<(ostream& ostr, Person& pers){
//        ostr << pers.firstName << " " << pers.lastName <<endl<< pers.email
//        <<endl<< pers.number << endl;
//        return ostr;
//    }

//class AddressBook{
//
//
//
//public:
//
//    void addPerson(Person stuff){
//        contactList.push_back(stuff);
//        // = stuff;
//
//   }
//
//    void printContents (){
//
//        for (Person stuff : contactList){
//
//           // cout << stuff;
//        }
//
//        }
//
////   }
////
////    void printContents (){
////
////        for (int i = 0; i <= 7; i++)
////
////            cout << contactList;
////        }
//
//
//
//    //void print
////    string getPerson(){
////    //return stuff;
////    }
//
//
//private:
//     //vector<Person> contactList;
//
//     // vector<Person> contactList;
//      vector<Person> contactList;
//
//
//
//
//
////    }
////
////    void deletePerson(){
////
////
////    }
////
////
////    void searchPerson(){
////
////    }
//
//    friend ostream& operator<<(ostream& ostr, AddressBook& print);
//
//
//};
//
//    ostream& operator<<(ostream& ostr, AddressBook& print){
//        ostr << print.printContents();
//            return ostr;
//
//}

int main()
{


Person jordan {"Jordan", "Steer", "blueshen111@gmail.com", "9255885493"};
Person brian {"Brian", "Fogg", "brian@brianfogg.com", "3008927"};
Person gracie {"Gracie", "Malley", "graciemalley@gmail.com", "714637223"};
//
//cout << jordan << endl;
//
Address myAddressBook;
//
myAddressBook.add(jordan);
myAddressBook.add(brian);
myAddressBook.add(gracie);

cout << myAddressBook << endl;


cout << myAddressBook.find("Jordan");


myAddressBook.subtract("Brian");

cout << myAddressBook << endl;

myAddressBook.subtract("Jordan");

cout << myAddressBook << endl;






}


