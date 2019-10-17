#ifndef PERSON_H
#define PERSON_H

using namespace std;

class Person{
private:
    string name;
    int age;
public:
    Person();
    ~Person();
    string getName();
    void setName(string name);
    int getAge();
    void setAge(int age);
    void show();
};

#endif // Person_H

Person::Person(){
}

Person::~Person(){
}

string Person::getName(){
    return this->name;
}

void Person::setName(string name){
    this->name = name;
}

int Person::getAge(){
    return this->age;
}

void Person::setAge(int age){
    this->age = age;
}

void Person::show(){
    cout << endl;
    cout<< "Name: " << this->name << endl;
    cout<< "Age: " << this->age << endl;
}