#include<bits/stdc++.h>
#include<algorithm>
using namespace std;


class Animal{
    //state or properties
    private:
    long long number;
    public:
    int age;
    int weight;
    string name;

    //default constructor
    Animal(){
        this->age=0;
        this->name="";
        this->number=0;
        this->weight=0;
        cout<<"I am inside constructor"<<endl;
    }
    //parameterised constructor
    Animal(int age){
        this->age=age;
        cout<<"I am inside parameterised constructor"<<endl;
    }
    //multi parameter
    Animal(int age, int weight){
        this->age=age;
        this->weight=weight;
        cout<<"I am inside multi parameterised constructor"<<endl;
    }

    Animal(Animal&obj){
        this->age=obj.age;
        this->weight=obj.weight;
        cout<<"I am inside copy constructor"<<endl;
    }
    ~Animal(){
        cout<<"I am inside destructor"<<endl;
    }
    //behaviour
    void sleep(){
        cout<<"sleeping"<<endl;
    }
    void eat(){
        cout<<"eating"<<endl;
    }
    int getnumber(){
        return number;
    }
    void setnumber(long long number){
        this->number=number;
    }
    void print(){
        cout<<this->age<<" "<<this->weight<<endl;
    }
};


int main()
{
    //object creation 

        //static memory allocation

    // Animal dog;
    // dog.age = 12;
    // dog.name= "shadow";
    // cout<<dog.age<<endl<<dog.name<<endl;
    // dog.eat();
    // dog.sleep();

    // //access a private member

    // dog.setnumber(38493);
    // cout<<dog.getnumber()<<endl;

        //Dynamic memory allocation

    // Animal* cat = new Animal;
    // cat->age=12;
    // cat->weight=8;
    // cat->name="pussy";

    // cout<<cat->age<<endl<<cat->name<<endl;

    // cat->eat();
    // cat->sleep();


    // cat->setnumber(898);
    // cout<<cat->getnumber()<<endl;

    // cout<<endl<<endl<<endl;

//without argument
    // Animal elephant;
    // Animal* lion = new Animal;
//with single argument
    // Animal elephant(7);
    // Animal* lion = new Animal(17);
//with multi arguments
    // Animal elephant(7,10);
    // Animal* lion = new Animal(17,18);

    // elephant.weight=23;


//object copy
    
    // Animal baby_elephant=elephant; //type 1
    // Animal xyz(elephant);
    // baby_elephant.age=5;
    // elephant.print();
    // baby_elephant.print();

//static
    Animal owl;
//dyanamic
    Animal* whale=new Animal;
    delete whale;
    return 0;
}