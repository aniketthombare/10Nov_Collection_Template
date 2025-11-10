#include "MyTemplate.h"
#include "displayElements.h"
#include <iostream>
#include <string>
//application using Templates

int main() {
    Collection<int> cn1(5);
    for (int i = 0; i < 5; i++) {
        cn1.setData(i, i * 10);
    }

    std::cout << "Elements in integer collection:\n";
    for (int i = 0; i < 5; i++) {
        std::cout << cn1.getData(i) << "\n";
    }
    //or
    displayCollection(cn1);

    Collection<std::string> cn2(3);
    cn2.setData(0, "Hello");
    cn2.setData(1, "World");
    cn2.setData(2, "C++ Templates");

    std::cout << "Elements in string collection:\n";
    for (int i = 0; i < 3; i++) {
        std::cout << cn2.getData(i) << "\n";
    }
    //or
    //function template use
    displayCollection(cn2);

    // Resizing the string collection
    cn2.resize();
    std::cout << "New size of string collection: " << cn2.size << "\n";
    std::cout << "List of elements after resizing:\n";
    for (int i = 0; i < 3; i++) {
        std::cout << cn2.getData(i) << "\n";
    }

    return 0;
}

