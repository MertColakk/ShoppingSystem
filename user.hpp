#include <iostream>
#include "cart.hpp"

class User{
private:
    std::string username,password;
    float balance;
    cart userCart;
public:
    //Constructor
    User(
    std::string username="",
    std::string password="",
    float balance=0,
    cart userCart):
    username(username),
    password(password),
    balance(balance),
    userCart(userCart){}

    //Setters
    void changeUsername(std::string newUsername);
    void changePassword(std::string newPassword);

    //Getters
    std::string getuserName();

    //Others
    void payCart();
};