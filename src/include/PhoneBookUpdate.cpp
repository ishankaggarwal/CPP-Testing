#include "PhoneBookUpdate.h"
using namespace std;

void PhoneBookUpdate::updatePhoneNumber(std::vector<Person>& people, std::string name, std::string phoneNumber) {
  vector<Person>::iterator it = people.begin();
  for (; it != people.end();it++){
      if(it->getName() == name){
        it->setPhoneNumber(phoneNumber);
        break;
      }
  }
}