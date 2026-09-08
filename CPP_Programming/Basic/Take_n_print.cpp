#include<iostream>
#include <string>

int main()
{
    int age;
    std::string name;
    float height;

    std::cout << "Enter Your Name: ";
    std::cin >> name;

    std::cout << "Enter Your Age: ";
    std::cin >> age;

    std::cout << "Enter Your Height: ";
    std::cin >> height;

    std::cout << "Your Name is "<< name << "\n";
    std::cout << "Your Age is "<< age << "\n";
    std::cout << "Your Height is "<< height << "\n";
    std::cout << "Your Age after 5 years will be "<< age+5 << "\n";


    return 0;

}