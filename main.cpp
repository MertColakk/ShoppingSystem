#include <iostream>
#include "system.hpp"



int main(){
    //Variables
    int attemp=3,op;
    
    printRegisterLoginMenu();
    std::cin>>op;

    switch(op){
        case 1:
            userLogin();
            break;
        case  2:
            userRegister();
            break;
    }


    return 0;
}