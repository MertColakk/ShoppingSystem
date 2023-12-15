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
            system("clear");
            printMainMenu();
            while (true){
                std::cin>>op;
                switch (op)
                {
                    case 1:
                        break;
                }
            }
            
            break;
        case  2:
            userRegister();
            userLogin();
            system("clear");
            printMainMenu();
            while (true){
                
            }
            break;
    }


    return 0;
}