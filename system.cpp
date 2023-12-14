#include <iostream>
#include "system.hpp"
#include <fstream>
//Menu Operations
void printMainMenu(){

}

void printSettingsMenu(){

}

//General Operations
void userRegister(){
    //Variables for operation
    std::fstream registerFile;
    std::string username,password;

    registerFile.open("users.db",std::ios::out);
    if(!registerFile){
        std::cout<<"Enter username: ";
        std::cin>>username;

        std::cout<<"Enter password: ";
        std::cin>>password;

        registerFile<<username<<"   "<<password;
    }
}
void userLogin(){

}