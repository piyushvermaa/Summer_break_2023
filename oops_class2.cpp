//ENCAPSULATION//

// #include<bits/stdc++.h>
// #include<algorithm>
// using namespace std;

// class animal{
//     private:
//         int age;
//         int weight;
//     public:
//         void eat(){
//             cout<<"eating"<<endl;
//         }
//         void setage(int age){
//             this->age=age;
//         }
//         int getage(){
//             return this->age;
//         }    
// };

// int main()
// {
    
//     return 0;
// }


//INHERITANCE//


// #include<bits/stdc++.h>
// #include<algorithm>
// using namespace std;

// class animal{
//     private:
//         int age;
//         int weight;
//     public:
//         void eat(){
//             cout<<"eating"<<endl;
//         }
//         void setage(int age){
//             this->age=age;
//         }
//         int getage(){
//             return this->age;
//         }    
// };
// class dog:public animal{

// };
// int main()
// {
//     dog i;
//     i.setage(4);
//     cout<<i.getage()<<endl;
//     i.eat();
//     return 0;
// }

//single//

// #include<bits/stdc++.h>
// #include<algorithm>
// using namespace std;

// class car{
//     public:
//     int speed;
//     int weight;

//     void sportsmode(){
//         cout<<"sports mode activated"<<endl;
//     }
//     void nitro(){
//         cout<<"nitro activated"<<endl;
//     }
// };

// class urus: public car{

// };
// int main()
// {
//     urus a;
//     a.speed=400;
//     cout<<a.speed<<endl;
//     a.sportsmode();
//     a.nitro();
//     return 0;
// }

//multi//

// #include<bits/stdc++.h>
// #include<algorithm>
// using namespace std;

// class fruit{
//     public:
//     string name;
// };
// class mango:public fruit{
//     public:
//     int weight;
// };
// class alponso: public mango{
//     public:
//     int sugarlevel;
// };

// int main()
// {
//     alponso a;
//     a.name="aam";
//     a.weight=30;
//     a.sugarlevel=98;
//     cout<<a.name<<" "<<a.weight<<" "<<a.sugarlevel<<endl;
//     return 0;
// }

//another example

// #include<bits/stdc++.h>
// #include<algorithm>
// using namespace std;

// class a{
//     public:
//     int maths;
// };
// class aa{
//     public:
//     int maths;
// };
// class b{
//     public:
//     int chemistry;
// };
// class c: public a,public aa,public b{
//     public:
//     int physics;
// };
// int main()
// {
//     c obj;
//     // cout<<obj.maths<<" "<<obj.chemistry<<" "<<obj.physics<<endl;

//     cout<<obj.a::maths<<" "<<obj.aa::maths<<" "<<obj.chemistry<<" "<<obj.physics<<endl;
//     return 0;
// }

//hirarechicel inheritance//

// #include<bits/stdc++.h>
// #include<algorithm>
// using namespace std;

// class car{
//     public:
//     int speed;
//     int weight;
//     string name;

//     void speedup(){
//         cout<<"speeding up"<<endl;
//     }
// };

// class scorpio: public car{

// };
// class forturner: public car{

// };

// int main()
// {
//     scorpio s11;
//     s11.speedup();
//     forturner legender;
//     legender.speedup();
//     return 0;
// }

//hybrid inheritance//

// #include<bits/stdc++.h>
// #include<algorithm>
// using namespace std;

// class phone{
//     public:
//     int camera;
//     int storage;
//     string name;

//     void clickpicture(){
//         cout<<"picture captured"<<endl;
//     }
//     void download(){
//         cout<<"downloading..."<<endl;
//     }
//     void openinstagram(){
//         cout<<"opening instagram"<<endl;
//     }
// };

// class samsung: public phone{
//     public:
//     void start(){
//         cout<<"samsung"<<endl;
//     }
// };
// class s22:public samsung{

// };
// class s22ultra: public s22{};
// class iphone: public phone{
//     public:
//     void start(){
//         cout<<"apple"<<endl;
//     }
// };
// class iphone14pro: public iphone{};
// int main()
// {
//     iphone14pro c1;
//     c1.start();
//     s22ultra c2;
//     c2.start();
//     return 0;
// }

//polymorphism

//compile time-> function overloading//

// #include<bits/stdc++.h>
// #include<algorithm>
// using namespace std;

// class math{
//     public:
//     int add(int a, int b){
//         return a+b;
//     }
//     int add(int a,int b, int c){
//         return a+b+c;
//     }
//     float add(int a, float b){
//         return a+b;
//     }

// };
// int main()
// {
//     math a;
//     cout<<a.add(1,2,3)<<" "<<a.add(100,200)<<" "<<a.add(1,2.5f)<<endl;
//     return 0;
// }


//operator overloading

// #include<bits/stdc++.h>
// #include<algorithm>
// using namespace std;
// class param{
//     public:
//     int n;
//     void operator+(param& object2){
       
//         int value1= this->n;
//         int value2= object2.n;
//         cout<<value2-value1<<endl;
//     }
// };
// int main()
// {
//     param object1,object2;
//     object1.n=212;
//     object2.n=293;
//     object1+object2;  // + operator is used to give diff among these two values
//     return 0;
// }



//polymorphism//
