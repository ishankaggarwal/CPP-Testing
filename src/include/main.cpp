#include<iostream>
#include<vector>
#include "Person.h"
#include "PhoneBookAdd.h"
#include "PhoneBookDelete.h"
#include "PhoneBookUpdate.h"
#include <algorithm>

using namespace std;

int main(){

    vector<Person> persons;
    PhoneBookAdd pAdd;
    PhoneBookDelete pDelete;
    PhoneBookUpdate pUpdate;
    pAdd.addPerson(persons,"a","1234");
    pAdd.addPerson(persons,"b","2345");
    pAdd.addPerson(persons,"c","3456");
    pAdd.addPerson(persons,"d","4567");
    pDelete.deletePerson(persons,"a");
    pUpdate.updatePhoneNumber(persons,"b","0000");
    vector<Person>::iterator it = persons.begin();

    for(; it != persons.end();it++){
        cout<<it->getName()<<" "<<it->getPhoneNumber()<<endl;
    }
    return 0;
}
