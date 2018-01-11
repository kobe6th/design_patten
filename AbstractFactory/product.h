#include <string>

#define PRODUCT_TYPE1 1
#define PRODUCT_TYPE2 2

class AbstractProduct
{
public:
    virtual ~AbstractProduct() = 0;
    std::string GetProductName();

protected:
    AbstractProduct();
    std::string name;
    
};

class AbstractProduct1 : public AbstractProduct
{
public:
    virtual ~AbstractProduct1() = 0;

protected:
    AbstractProduct1();    
};

class AbstractProduct2 : public AbstractProduct
{
public:
    virtual ~AbstractProduct2() = 0;

protected:
    AbstractProduct2();    
};

class  ConcreteProduct1A : public AbstractProduct1
{
public:
     ConcreteProduct1A();
    ~ ConcreteProduct1A();
};

class  ConcreteProduct1B: public AbstractProduct1
{
public:
     ConcreteProduct1B();
    ~ ConcreteProduct1B();
};

class  ConcreteProduct2A : public AbstractProduct2
{
public:
     ConcreteProduct2A();
    ~ ConcreteProduct2A();
};

class  ConcreteProduct2B: public AbstractProduct2
{
public:
     ConcreteProduct2B();
    ~ ConcreteProduct2B();
};