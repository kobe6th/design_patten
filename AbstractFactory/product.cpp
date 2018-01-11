#include <iostream>
#include "product.h"

using namespace std;

AbstractProduct::AbstractProduct()
{

}

AbstractProduct::~AbstractProduct()
{

}

std::string AbstractProduct::GetProductName()
{
    return name;
}

AbstractProduct1::AbstractProduct1()
{

}

AbstractProduct1::~AbstractProduct1()
{

}



AbstractProduct2::AbstractProduct2()
{

}

AbstractProduct2::~AbstractProduct2()
{
    
}



ConcreteProduct1A::ConcreteProduct1A()
{
    name = "ConcreteProduct1A";
    cout<<"create ConcreteProduct1A"<<endl;
}

ConcreteProduct1A::~ConcreteProduct1A()
{

}



ConcreteProduct1B::ConcreteProduct1B()
{
    name = "ConcreteProduct1B";
    cout<<"create ConcreteProduct1B"<<endl;
}

ConcreteProduct1B::~ConcreteProduct1B()
{

}



ConcreteProduct2A::ConcreteProduct2A()
{
    name = "ConcreteProduct2A";
    cout<<"create ConcreteProduct2A"<<endl;
}

ConcreteProduct2A::~ConcreteProduct2A()
{

}



ConcreteProduct2B::ConcreteProduct2B()
{
    name = "ConcreteProduct2B";
    cout<<"create ConcreteProduct2B"<<endl;
}

ConcreteProduct2B::~ConcreteProduct2B()
{

}