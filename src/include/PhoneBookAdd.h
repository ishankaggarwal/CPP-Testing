#pragma once
#include <vector>
#include "Person.h"

class PhoneBookAdd {
public:
  void addPerson(std::vector<Person>& people, std::string name, std::string phoneNumber);
};
