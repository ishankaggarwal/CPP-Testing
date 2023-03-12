#pragma once
#include <vector>
#include <algorithm>
#include "Person.h"

class PhoneBookDelete {
public:
  void deletePerson(std::vector<Person>& people, std::string name);
};
