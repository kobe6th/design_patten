#include <iostream>
#include "factory.h"
#include "product.h"

using namespace std;

int main(int argc, char** argv)
{
    ConcreteFactory* fac = new ConcreteFactory();
    Product *p1 = fac->CreateProduct(PRODUCT_TYPE1);
    Product *p2 = fac->CreateProduct(PRODUCT_TYPE2);

    cout<<"p1: "<<p1->GetProductName()<< " "<<"p2: "<<p2->GetProductName()<<endl;
}