class Product;
class Factory 
{
public:
    virtual ~Factory() = 0;
    virtual Product* CreateProduct(int type)=0;
protected:
    Factory();
    
};

class  ConcreteFactory : public Factory
{
public:
     ConcreteFactory();
    ~ ConcreteFactory();
    Product* CreateProduct(int type);
};