#pragma once
#include "MyTemplate.h"
template <class T>
void displayCollection(Collection<T>& v) {
    std::cout << "Using Function Template, displaying the elements:\n";
    for (int i = 0; i < v.size; i++) {
        std::cout << v.getData(i) << "\n";
    }
}
