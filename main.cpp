#include <iostream>
#include <string>
#include <utility>

void isMyNameLong(const std::string& name);
void askForCovidTest();

class Dog {
public:
    int age{};
    std::string name;
    Dog *children{};
    int childNumber;
    Dog(std::string dogName, int age) {
        name = std::move(dogName);
        age = age;
        childNumber = 0;
        children = static_cast<Dog *>(malloc(sizeof(Dog)));
    }
    Dog createPuppy(std::string puppyName) {
        Dog puppy(std::move(puppyName), 0);
        children[childNumber++] = puppy;
        children = static_cast<Dog *>(realloc(children, sizeof(Dog) * childNumber + 1));
        return puppy; // Will I screwed this up fix it for me, this function accidentally creates 3 versions of "puppy" and we only want one.
    }
};

class Covid19 {
public:
    bool hasCovid = false;
    bool hasVaccine = false;
    bool hasTest = false;

    void doIHaveCovid() {
        if (hasCovid)
        {
            std::cout << "You have COVID" << std::endl;
        }
        else if (!hasCovid)
        {
            std::cout << "You don't have COVID!" << std::endl;
        }
    }
    void canIHaveAVaccine() {
        if (hasVaccine)
        {
            std::cout << "You already had your vaccine silly!" << std::endl;
            return;
        }
        else if (!hasVaccine)
        {
            std::cout << "Yeah sure!" << std::endl;
            hasVaccine = true;
        }
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
    std::cout << "And for " << surname << " is " << &surname << std::endl;
    Covid19 ahh{};
    ahh.doIHaveCovid();
    ahh.canIHaveAVaccine();
    ahh.isCovidCool();
    askForCovidTest();

    return 0;
}

void askForCovidTest()
{
    std::string response;

    std::cout << "Do you want a COVID test? Y/N" << std::endl;
    std::cin >> response;
    if (response == "Y")
    {
        Covid19 beep{};
        if (beep.hasTest)
        {
            std::cout << "You already have a test!" << std::endl;
        }
        else if (!beep.hasTest)
        {
            std::cout << "Okay" << std::endl;
            beep.hasTest = true;
        }
    }
    else if (response == "N")
    {
        std::cout << "Bruh really!?" << std::endl;
        return;
    }
    else
    {
        std::cout << "Enter valid input, either Y or N." << std::endl;
        return;
    }
}

void isMyNameLong(const std::string& name)
{
    if (name.length() > 5)
    {
        std::cout << "You have a long name" << std::endl;
        return;
    }
    else
    {
        std::cout << "You have a short name" << std::endl;
        return;
    }
}