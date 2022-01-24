#include <iostream>
#include <string>

void isMyNameLong(const std::string& name);

class Covid19 {
public:
    void doIHaveCovid() {
        std::cout << "You probably have COVID!" << std::endl;
    }
    void canIHaveAVaccine() {
        std::cout << "Your not allowed a vaccine sorry." << std::endl;
    }
    void isCovidCool() {
        std::cout << "COVID is not cool!" << std::endl;
    }
};

int main() {
    std::basic_string<char> firstname;
    std::basic_string<char> surname;

    std::cout << "Hello, World!" << std::endl;
    std::cout << "Enter your first name: ";
    std::cin >> firstname;
    std::cout << "Enter your last name: ";
    std::cin >> surname;
    std::string fullname = firstname + " " + surname;
    std::cout << "Your name is " << fullname << std::endl;
    isMyNameLong(firstname);
    std::cout << "Memory address for " << firstname << " is " << &firstname << std::endl;
    std::cout << "And for " << surname << " is " << &surname;
    Covid19 ahh{};
    ahh.doIHaveCovid();
    ahh.canIHaveAVaccine();
    ahh.isCovidCool();
    return 0;
}

void isMyNameLong(const std::string& name)
{
    if (name.length() > 5)
    {
        std::cout << "You have a long name" << std::endl;
    }
    else
    {
        std::cout << "You have a short name" << std::endl;
    }
}