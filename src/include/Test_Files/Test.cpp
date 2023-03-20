#include <gtest/gtest.h>
#include <vector>
#include <string>
#include "../Header_Files/Person.h"
#include "../Header_Files/PhoneBookAdd.h"
#include "../Header_Files/PhoneBookDelete.h"
#include "../Header_Files/PhoneBookUpdate.h"

TEST(PhoneBookTest, AddPersonTest) {
  std::vector<Person> people;
  PhoneBookAdd phoneBookAdd;
  phoneBookAdd.addPerson(people, "Alice", "123-456-7890");
  ASSERT_EQ(people.size(), 1);
  ASSERT_EQ(people[0].getName(), "Alice");
  ASSERT_EQ(people[0].getPhoneNumber(), "123-456-7890");
}

TEST(PhoneBookTest, DeletePersonTest) {
  std::vector<Person> people = { Person("Alice", "123-456-7890"), Person("Bob", "234-567-8901"), Person("Charlie", "345-678-9012") };
  PhoneBookDelete phoneBookDelete;
  phoneBookDelete.deletePerson(people, "Bob");
  ASSERT_EQ(people.size(), 2);
  ASSERT_EQ(people[0].getName(), "Alice");
  ASSERT_EQ(people[0].getPhoneNumber(), "123-456-7890");
  ASSERT_EQ(people[1].getName(), "Charlie");
  ASSERT_EQ(people[1].getPhoneNumber(), "345-678-9012");
}

TEST(PhoneBookTest, UpdatePhoneNumberTest) {
  std::vector<Person> people = { Person("Alice", "123-456-7890"), Person("Bob", "234-567-8901"), Person("Charlie", "345-678-9012") };
  PhoneBookUpdate phoneBookUpdate;
  phoneBookUpdate.updatePhoneNumber(people, "Bob", "999-999-9999");
  ASSERT_EQ(people.size(), 3);
  ASSERT_EQ(people[1].getName(), "Bob");
  ASSERT_EQ(people[1].getPhoneNumber(), "999-999-9999");
}

int main(int argc, char** argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
