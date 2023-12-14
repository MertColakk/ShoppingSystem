#include <iostream>
#include "system.hpp"
#include <fstream>
//Menu Operations
void printMainMenu(){

}

void printSettingsMenu(){

}

void printRegisterLoginMenu(){
    std::cout<<"Welcome to NoTrendWay!\n"
    <<"1-Login\n"
    <<"2-Register\n"
    <<"Choice: ";
}

//General Operations
void userRegister(){
    //Variables for operation
    std::fstream registerFile;
    std::string username,password;

    registerFile.open("users.db",std::ios::app);
    if(registerFile){
        std::cout<<"Enter username: ";
        std::cin>>username;

        std::cout<<"Enter password: ";
        std::cin>>password;

        registerFile<<username<<' '<<password<<std::endl;
        registerFile.close();
    }
}

void userLogin(){
    //Variables for operation
    std::fstream loginFile;
    std::string username,inputUsername,password,inputPassword;
    bool isLogined=false;

    loginFile.open("users.db",std::ios::app);
    if(loginFile){
        std::cout<<"Enter username: ";
        std::cin>>inputUsername;
        std::cin.ignore();

        std::cout<<"Enter password: ";
        std::cin>>inputPassword;
        std::cin.ignore();
        while(loginFile>>username>>password){
            if(username==inputUsername&&password==inputPassword)
                isLogined=true;
            else
                isLogined=false;
        }

        if(isLogined)
            std::cout<<"Welcome to NoTrendWay!"<<std::endl;
        else
            std::cout<<"Wrong username or password!"<<std::endl;
        
        loginFile.close();  
    }
}