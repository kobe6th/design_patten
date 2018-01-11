class AbstractProduct1;
class AbstractProduct2;

class AbstractFactory 
{
public:
    virtual ~AbstractFactory() = 0;
    virtual AbstractProduct1* AbstractGetProduct1()=0;
    virtual AbstractProduct2* AbstractGetProduct2()=0;

protected:
    AbstractFactory();
};

class  ConcreteFactoryA : public AbstractFactory
{
public:
     ConcreteFactoryA();
    ~ ConcreteFactoryA();
    AbstractProduct1* AbstractGetProduct1();
    AbstractProduct2* AbstractGetProduct2();
};

class  ConcreteFactoryB : public AbstractFactory
{
public:
     ConcreteFactoryB();
    ~ ConcreteFactoryB();
    AbstractProduct1* AbstractGetProduct1();
    AbstractProduct2* AbstractGetProduct2();
};