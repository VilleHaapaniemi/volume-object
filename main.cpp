#include<iostream>

#include "Volume.h"

int main() {
    using std::cout;

    Volume v1(35);
    std::cout << "v1 = " << v1.getValue() << std::endl;
    Volume v2;
    std::cout << "v2 = " << v2.getValue() << std::endl;
    v2.setValue(5000);

    return 0;
}