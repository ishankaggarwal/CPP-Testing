#pragma once
#include <vector>
#include <algorithm>
#include "Person.h"

class PhoneBookUpdate {
public:
  void updatePhoneNumber(std::vector<Person>& people, std::string name, std::string phoneNumber);
};
