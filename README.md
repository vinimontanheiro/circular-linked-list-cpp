## C++ Circular Linked List

# Features

- Template support
- Dynamic capacity
- High performace

# To build
 - g++ compiler

# Example
```
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
```

### Full code is avalaible in project-folder

