class Singleton
{
public:
    ~Singleton();
    static Singleton* GetSingleton();

protected:
    Singleton();

private:
    static Singleton * _instance;
};