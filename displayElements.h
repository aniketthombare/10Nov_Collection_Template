#pragma once
#include "MyTemplate.h"
template <class T>
void displayCollection(const Collection<T>& c) {
    std::cout << "Using Function Template, displaying the elements:\n";
    for (int i = 0; i < c.size; i++) {
        std::cout << c.getData(i) << "\n";
    }
}
