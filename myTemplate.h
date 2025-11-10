#pragma once
#include <iostream>

template<class T>
class Collection {
public:
    T* arr;
    int size;

public:
    // Constructor
    Collection(int sz) {
        size = sz;
        arr = new T[size];
    }

    // Destructor
    ~Collection() {
        delete[] arr;
    }

    // Get element at index
    T getData(int index) {
        return arr[index];
    }

    // Set element at index
    void setData(int index, T value) {
        arr[index] = value;
        std::cout << "Value set at index " << index << ": " << value << "\n";
    }

    // Double the size of vector
    void resize() {
        T* newArr = new T[3 * size];
        for (int i = 0; i < size; i++) {
            newArr[i] = arr[i];
        }
        delete[] arr;       // Free old memory
        arr = newArr;       // Point to new array
        size = 3 * size;    // Update size
    }
};
