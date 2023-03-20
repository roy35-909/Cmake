#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
  private:
    std::string name;
    float age;

  public:
    void setName(std::string newName);
    void setAge(float newAge);
    std::string getName();
    float getAge();
};

#endif
