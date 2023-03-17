#include "../Header_Files/PhoneBookDelete.h"

void PhoneBookDelete::deletePerson(std::vector<Person>& people, std::string name) {
  std::vector<Person>::iterator it = people.begin();
  for (; it != people.end();it++){
      if(it->getName() == name){
        people.erase(it);
        break;
      }
  }
}
