#include "MyTemplate.h"
#include "displayElements.h"
#include <iostream>
#include <string>
//application using Templates


//make a user-defined class and pass it to the template class
class Student {
public:
    int marks;
    std::string name;
	Student() : marks(0), name("") {} //default constructor
	Student(int m, const std::string& n) : marks(m), name(n) {}//parameterized constructor

    // Overloading the << operator for easy printing
    friend std::ostream& operator<<(std::ostream& os, const Student& s) {
        os << "Name: " << s.name << ", Marks: " << s.marks;
        return os;
	}
};

int main() {
	//object creation for int type
    Collection<int> cn1(5);
    for (int i = 0; i < 5; i++) {
        cn1.setData(i, i * 10);
    }

    std::cout << "Elements in integer collection:\n";
    for (int i = 0; i < 5; i++) {
        std::cout << cn1.getData(i) << "\n";
    }
    //or
	//function template use
    displayCollection(cn1);


	// Objeect creation for string type
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
    Collection<Student> cn3(2);
	cn3.setData(0, Student(85, "Aniket"));
	cn3.setData(1, Student(90, "Raj"));
	std::cout << "Elements in Student collection:\n";
	for (int i = 0; i < 2; i++) {
		Student s = cn3.getData(i);
		std::cout << "Name: " << s.name << ", Marks: " << s.marks << "\n";
	}
	//or
	//function template use
	displayCollection(cn3);

    return 0;
}

