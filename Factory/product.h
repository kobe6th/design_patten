#include <string>

#define PRODUCT_TYPE1 1
#define PRODUCT_TYPE2 2

class Product 
{
public:
    virtual ~Product() = 0;
    std::string GetProductName();

protected:
    Product();
    std::string name;
    
};

class  ConcreteProduct1 : public Product
{
public:
     ConcreteProduct1();
    ~ ConcreteProduct1();
};

class  ConcreteProduct2 : public Product
{
public:
     ConcreteProduct2();
    ~ ConcreteProduct2();
};