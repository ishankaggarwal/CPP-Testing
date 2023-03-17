#include "../Header_Files/Person.h"

Person::Person(std::string name, std::string phoneNumber) {
  this->name = name;
  this->phoneNumber = phoneNumber;
}

std::string Person::getName() {
  return name;
}

std::string Person::getPhoneNumber() {
  return phoneNumber;
}

void Person::setPhoneNumber(std::string phoneNumber) {
  this->phoneNumber = phoneNumber;
}
