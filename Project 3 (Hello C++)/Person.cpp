#include "Person.h"

void Person::setName(std::string newName) {
    name = newName;
}

void Person::setAge(float newAge) {
    age = newAge;
}

std::string Person::getName() {
    return name;
}

float Person::getAge() {
    return age;
}
