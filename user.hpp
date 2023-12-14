#include <iostream>
#include "cart.hpp"

class User{
private:
    std::string birthDate,name,username,password;
    float balance;
    cart userCart;
public:
    //Constructor
    User(
    std::string birthdate="",
    std::string name="",
    std::string username="",
    std::string password="",
    float balance=0,
    cart userCart):
    birthDate(birthdate),
    name(name),
    username(username),
    password(password),
    balance(balance),
    userCart(userCart){}

    //Setters
    void changeBirthDate(std::string newBirthDay);
    void changeName(std::string newName);
    void changeUsername(std::string newUsername);
    void changePassword(std::string newPassword);

    //Getters
    std::string getBirthDate();
    std::string getName();

    //Others
    void payCart();
};