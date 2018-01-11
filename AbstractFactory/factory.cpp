#include <stdio.h>
#include "factory.h"
#include "product.h"

AbstractFactory::AbstractFactory()
{

}

AbstractFactory::~AbstractFactory()
{

}



ConcreteFactoryA::ConcreteFactoryA()
{

}

ConcreteFactoryA::~ConcreteFactoryA()
{

}

AbstractProduct1* ConcreteFactoryA::AbstractGetProduct1()
{
    return new ConcreteProduct1A();
}

AbstractProduct2* ConcreteFactoryA::AbstractGetProduct2()
{
    return new ConcreteProduct2A();
}



ConcreteFactoryB::ConcreteFactoryB()
{

}

ConcreteFactoryB::~ConcreteFactoryB()
{

}

AbstractProduct1* ConcreteFactoryB::AbstractGetProduct1()
{
    return new ConcreteProduct1B();
}

AbstractProduct2* ConcreteFactoryB::AbstractGetProduct2()
{
    return new ConcreteProduct2B();
}

