#include <stdio.h>
#include "factory.h"
#include "product.h"

Factory::Factory()
{

}

Factory::~Factory()
{
    
}

ConcreteFactory::ConcreteFactory()
{
    
}

ConcreteFactory::~ConcreteFactory()
{

}

Product* ConcreteFactory::CreateProduct(int type)
{
    switch(type){
        case PRODUCT_TYPE1:
            return new ConcreteProduct1();
        case PRODUCT_TYPE2:
            return new ConcreteProduct2();
        default:
            return NULL;
    }
}