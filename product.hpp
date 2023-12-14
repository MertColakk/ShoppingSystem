#include <iostream>

class product{
private:
    std::string name;
    int id;
    float price;
public:
    //Constructor
    product(std::string newName="",int newID=0,float newPrice=0):name(newName),id(newID),price(newPrice){}

    //Setters
    void setName(std::string newName);
    void setID(int newID);
    void setPrice(float newPrice);

    //Getters
    std::string getName();
    int getID();
    float getPrice();
};