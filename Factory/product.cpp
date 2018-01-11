#include <iostream>
#include "product.h"

using namespace std;

Product::Product()
{

}

Product::~Product()
{
    
}

std::string Product::GetProductName()
{
    return name;
}

ConcreteProduct1::ConcreteProduct1()
{
    name = "Product1";
    cout<<"ConcreteProduct1 create"<<endl;
}

ConcreteProduct1::~ConcreteProduct1()
{

}

ConcreteProduct2::ConcreteProduct2()
{
    name = "Product2";
    cout<<"ConcreteProduct2 create"<<endl;
}

ConcreteProduct2::~ConcreteProduct2()
{
    
}