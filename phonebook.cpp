#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Contact {
public:
    Contact(string name, string number) : name(name), number(number) {}

    string getName() {
        return name;
    }

    string getNumber() {
        return number;
    }

    void updateNumber(string newNumber) {
        number = newNumber;
    }

private:
    string name;
    string number;
};

class Phonebook {
public:
    void createContact(string name, string number) {
        contacts.push_back(Contact(name, number));
    }

    void updateContact(string name, string newNumber) {
        for (auto& contact : contacts) {
            if (contact.getName() == name) {
                contact.updateNumber(newNumber);
                return;
            }
        }
        cout << "Contact not found." << endl;
    }

    void deleteContact(string name) {
        for (auto it = contacts.begin(); it != contacts.end(); ++it) {
            if (it->getName() == name) {
                contacts.erase(it);
                return;
            }
        }
        cout << "Contact not found." << endl;
    }

    void printContacts() const {
        for (const auto& contact : contacts) {
            cout << contact.getName() << ": " << contact.getNumber() << endl;
        }
    }

private:
    vector<Contact> contacts;
};

int main() {
    Phonebook phonebook;

    phonebook.createContact("Alice", "555-1234");
    phonebook.createContact("Bob", "555-5678");
    phonebook.createContact("Charlie", "555-9012");

    phonebook.printContacts();  // Output: Alice: 555-1234
                                //         Bob: 555-5678
                                //         Charlie: 555-9012

    phonebook.updateContact("Bob", "555-5555");
    phonebook.printContacts();  // Output: Alice: 555-1234
                                //         Bob: 555-5555
                                //         Charlie: 555-9012

    phonebook.deleteContact("Charlie");
    phonebook.printContacts();  // Output: Alice: 555-1234
                                //         Bob: 555-5555

    phonebook.deleteContact("David");  // Output: Contact not found.
}