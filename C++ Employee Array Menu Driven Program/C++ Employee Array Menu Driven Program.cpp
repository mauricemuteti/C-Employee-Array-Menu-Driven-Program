// C++ Employee Array Menu Driven Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
// https://mauricemuteti.info/c-employee-array-menu-driven-program/

#include <iostream>
#include <string>

const int NUM_EMPLOYEES = 5;  // number of employees to be entered

// Employee class to store the details of each employee
class Employee {
public:
    std::string name;  // name of the employee
    int age;           // age of the employee
    std::string role;  // role of the employee
};

int main() {
    Employee employees[NUM_EMPLOYEES];  // array to store the employee objects

    // loop until the user enters "quit"
    std::string input;
    int i = 0;  // counter for number of employees entered
    while (input != "quit") {
        std::cout << "Enter the details of employee " << i + 1 << ":" << std::endl;
        std::cout << "Name: ";
        std::cin >> employees[i].name;
        std::cout << "Age: ";
        std::cin >> employees[i].age;
        std::cout << "Role: ";
        std::cin >> employees[i].role;
        std::cout << "Enter 'quit' to exit or any other key to continue: ";
        std::cin >> input;
        i++;
    }

    // print the details of all the employees entered
    std::cout << "The details of the employees are:" << std::endl;
    for (int j = 0; j < i; j++) {
        std::cout << "Employee " << j + 1 << ":" << std::endl;
        std::cout << "Name: " << employees[j].name << std::endl;
        std::cout << "Age: " << employees[j].age << std::endl;
        std::cout << "Role: " << employees[j].role << std::endl;
    }

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
