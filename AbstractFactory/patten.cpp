#include <iostream>
#include "factory.h"
#include "product.h"

using namespace std;

int main(int argc, char** argv)
{
    AbstractFactory* facA = new ConcreteFactoryA();
    AbstractProduct* p1A =  facA->AbstractGetProduct1();
    AbstractProduct* p2A =  facA->AbstractGetProduct2();

    AbstractFactory* facB = new ConcreteFactoryB();
    AbstractProduct* p1B =  facB->AbstractGetProduct1();
    AbstractProduct* p2B =  facB->AbstractGetProduct2();

    cout<< p1A->GetProductName()<<endl;
    cout<< p1B->GetProductName()<<endl;
    cout<< p2A->GetProductName()<<endl;
    cout<< p2B->GetProductName()<<endl;
}