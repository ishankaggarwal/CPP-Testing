#include "PhoneBookAdd.h"

void PhoneBookAdd::addPerson(std::vector<Person>& people, std::string name, std::string phoneNumber) {
  Person p(name, phoneNumber);
  people.push_back(p);
}
