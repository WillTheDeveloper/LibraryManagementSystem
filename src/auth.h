#ifndef LIBRARYMANAGEMENTSYSTEM_AUTH_H
#define LIBRARYMANAGEMENTSYSTEM_AUTH_H

#include <iostream>
#include "string"

namespace auth {
    void loginuser(const std::string &username, const std::string &password);
    void registeruser(const std::string &name, const std::string &username, const std::string &password);
}

#endif //LIBRARYMANAGEMENTSYSTEM_AUTH_H
