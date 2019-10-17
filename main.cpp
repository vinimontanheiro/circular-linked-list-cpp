#include <iostream>
#include<string>
#include "queue.h"
#include "person.h"

void objectExample(){
  Queue<Person> queue;
  queue.setCapacity(3);

  Person person;
  person.setName("Fulano");
  person.setAge(39);
  queue.enqueue(person);

  Person person1;
  person1.setName("Ciclano");
  person1.setAge(21);
  queue.enqueue(person1);

  Person person2;
  person2.setName("Beltrano");
  person2.setAge(26);
  queue.enqueue(person2);

  Person p = queue.dequeue();
  p.show();

  cout<< "Person queue size >> " << queue.size();

  Person p1 = queue.dequeue();
  p1.show();

  Person p2 = queue.dequeue();
  p2.show();

  cout<< "Person queue size >> " << queue.size();
}

int main(){
  objectExample();
  
  int capacity = 200;
  Queue<float> queue;
  queue.setCapacity(200);

  for(int i = 0;i < capacity; i++){
    float random = ((float) rand()) / (float) RAND_MAX;
    queue.enqueue(random);
  }

  for(int i = 0;i < 40; i++){
    cout << endl;
    cout << "Value :" << queue.dequeue(); 
  }

  cout << endl;
  cout << "Flot queue size >> " << queue.size();
  
  return 0;
}