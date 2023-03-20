#include <iostream>
#include "Person.h"

int main() {
    Person person;
    person.setName("Earth");
    person.setAge(4.543);
    std::cout << "Name: " << person.getName() << std::endl;
    std::cout << "Age: " << person.getAge() << std::endl;
    return 0;
}
