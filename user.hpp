#include <iostream>
#include "cart.hpp"

class User{
private:
    std::string name,username,password;
    float balance;
    cart userCart;
public:
    //Constructor
    User(
    std::string name="",
    std::string username="",
    std::string password="",
    float balance=0,
    cart userCart):
    name(name),
    username(username),
    password(password),
    balance(balance),
    userCart(userCart){}

    //Setters
    void changeName(std::string newName);
    void changeUsername(std::string newUsername);
    void changePassword(std::string newPassword);

    //Getters
    std::string getName();

    //Others
    void payCart();
};