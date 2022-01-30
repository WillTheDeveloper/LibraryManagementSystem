#include <iostream>
#include "src/auth.h"
#include "src/students.h"

using namespace auth;

void li()
{
    std::string u;
    std::string p;
    std::cout << "Username: ";
    std::cin >> u;
    std::cout << "Password: ";
    std::cin >> p;
    auth::loginuser(u, p);
}

void re()
{
    std::string n;
    std::string u;
    std::string p;

    std::cout << "Your name: ";
    std::cin >> n;
    std::cout << "Username: ";
    std::cin >> u;
    std::cout << "Password: ";
    std::cin >> p;

    auth::registeruser(n, u, p);
}

int main() {
    std::cout << "LIBRARY MANAGEMENT SYSTEM" << std::endl;

    std::cout << "Please login or register:" << std::endl;
    std::cout << "[1] Login" << std::endl;
    std::cout << "[2] Register" << std::endl;

    int choice;

    std::cout << "Enter selection: ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            li();
            break;
        case 2:
            re();
            break;
        default:

            break;
    }

    return 0;
}

void router() {

}
