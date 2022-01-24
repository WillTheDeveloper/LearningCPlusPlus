#include <iostream>
#include <string>

int main() {
    std::string firstname;
    std::string surname;

    std::cout << "Hello, World!" << std::endl;
    std::cout << "Enter your first name: ";
    std::cin >> firstname;
    std::cout << "Enter your last name: ";
    std::cin >> surname;
    std::string fullname = firstname + " " + surname;
    std::cout << "Your name is " << fullname << std::endl;
    return 0;
}
