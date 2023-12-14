#include <iostream>
#include "user.hpp"
#include "cart.hpp"

//Setters
void User::changeName(std::string newName){this->name=newName;}
void User::changeUsername(std::string newUsername){this->username=newUsername;}
void User::changePassword(std::string newPassword){this->password=newPassword;}

//Getters
std::string User::getName(){return this->name;}

//Others
void User::payCart(){
    if(this->balance>=(this->userCart).getTotalAmount()){
        this->balance -= (this->userCart).getTotalAmount();
        this->userCart.removeAllCart();
    }
}