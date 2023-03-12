#pragma once
#include <string>

class Person {
public:
  Person(std::string name, std::string phoneNumber);
  std::string getName();
  std::string getPhoneNumber();
  void setPhoneNumber(std::string phoneNumber);
private:
  std::string name;
  std::string phoneNumber;
};
