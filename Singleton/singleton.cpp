#include <iostream>
#include "singleton.h"

using namespace std;

// Singleton * Singleton::_instance = new Singleton(); // thread safe
Singleton * Singleton::_instance = NULL;

Singleton::Singleton()
{

}

Singleton::~Singleton()
{

}

Singleton* Singleton::GetSingleton()
{
    //thread un safe
    if(!_instance){
        cout<<"init Singleton!"<<endl;
        _instance = new Singleton();
    }

     cout<<"return Singleton!"<<endl;
    return _instance;
}