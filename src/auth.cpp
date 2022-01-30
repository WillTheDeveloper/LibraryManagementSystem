//
// Created by will on 30/01/2022.
//

#include "auth.h"

using namespace auth;

#include <iostream>
#include "string"
#include "fstream"

void auth::loginuser(const std::string& username, const std::string& password)
{
    std::ofstream user;

    std::string dir = "students/";

    user.open(username + ".txt");
}

void auth::registeruser(const std::string& name, const std::string& username, const std::string& password)
{
    std::ofstream user;
    user.open(username + ".txt");
    user << name << "\n";
    user << username << "\n";
    user << password << "\n";
    user.close();
}