#include <iostream>
#include "singleton.h"

using namespace std;

int main(int argc, char** argv)
{
    Singleton *a  = NULL;

    a = Singleton::GetSingleton(); 
    a = Singleton::GetSingleton();
}