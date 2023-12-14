#include <iostream>
#include <list>
#include "product.hpp"

class cart{
private:
    float totalAmount;
public:
    std::list<product> productList;
    //Constructor
    cart(float totalAmount):totalAmount(totalAmount){}

    //Setters
    void setPrice(float amount);

    //Getter
    float getTotalAmount();
    
    //Others
    void addToCart(product newProduct);
    void removeFromCart(std::string oldProductName);
    void listProducts();
};