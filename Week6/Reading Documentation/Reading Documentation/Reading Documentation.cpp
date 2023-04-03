#include <iostream>
#include <string>

int main() {
    // Entry for name
    std::string name;
    std::cout << "Please enter your name: ";
    std::getline(std::cin, name);

    // Retrieves first Three letters of your name
    std::string firstThree = name.substr(0, 3);
    std::cout << "First three characters of your name are: " << firstThree << std::endl;

    // Outputs name with Woohoo at the end
    std::string newName = name + "woohoo";
    std::cout << "Your name with woohoo added is: " << newName << std::endl;

    // Inserts inbetween name and woohoo the outputs result
    newName.insert(3, "abc");
    std::cout << "Your name with abc inserted after the first three characters is: " << newName << std::endl;

    return 0;
}
