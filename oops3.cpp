#include <bits/stdc++.h>
using namespace std;
class animal{
    public:
    
    animal(){
        cout<<"I am inside animal constructor"<<endl;
    }
    virtual void speak(){
      cout<<"speaking"<<endl;
    }
};

class dog:public animal{
    public:
    dog(){
        cout<<"I am inside dog constructor"<<endl;
    }

    void speak(){
      cout<<"barking"<<endl;
    }
};

int main() {
   
//   animal* a= new dog;

//   dog* b= (dog*) new animal;

//   a->speak();

//   b->speak();

//         delete[] a;
//         delete[] b;

        dog* a= (dog*)new animal;
  return 0;
}






















































// #include <iostream>
// using namespace std;

// class Animal{
//         public:
//         Animal() {
//                 cout << "i am inside animal constructor" << endl;
//         }
//          void speak() {
//                 cout << "Speaking " << endl;
//         }
// };

// class Dog: public Animal {
//         public:
//         Dog() {
//                 cout << "i am inside Dog constructor" << endl;
//         }
//         //override
//         void speak() {
//                 cout << "barking" << endl;
//         }
// };

// int main() {
// //   Dog a;
// //   a.speak();

//         // Animal* a = new Animal();
//         // a->speak();

//         // Dog* a = new Dog();
//         // a->speak();

//         //UpCasting
//         // Animal* a = new Dog();
//         // a->speak();

//         // //DownCasting
//         // Dog* b = (Dog* )new Animal();
//         // b->speak();

//         Dog* a = (Dog*)new Animal();
//         // Dog a;



//   return 0;
// }