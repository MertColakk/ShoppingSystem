#include <iostream>
#include <list>
#include "product.hpp"
#include "cart.hpp"

void cart::listProducts(){
    std::cout<<"Your Shopping Cart!"<<std::endl;
    for(product element:productList)
        std::cout<<element.getName()<<"     "<<element.getPrice()<<std::endl;    
}

void cart::addToCart(product newProduct){
    this->productList.push_front(newProduct);
    setPrice(newProduct.getPrice());
}

void cart::setPrice(float productPrice){this->totalAmount += productPrice;}

float cart::getTotalAmount(){return this->totalAmount;}

void cart::removeFromCart(std::string oldProductName){
    listProducts();
    if(!productList.empty())
        for(auto it = productList.begin();it!=productList.end();++it)
            if(it->getName()==oldProductName)
               it = productList.erase(it);
}
