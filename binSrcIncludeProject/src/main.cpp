#include <iostream>

#include"headerA.hpp"
#include"headerB.hpp"

using namespace std;

int main(){


    cout << "Ola mundo do makefile!" << endl;

    classA a;
    classB b;

    a.run();
    b.run();

    return 0;

}


