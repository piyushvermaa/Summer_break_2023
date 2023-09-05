// #include<bits/stdc++.h>
// #include<algorithm>
// using namespace std;
// class abc{
//     int x;
//     int* y;
//     int z;

//     public:

//         abc(){
//             x=0;
//             y= new int(0);
            
//         }
//         abc(int _x, int _y,int _z=0){
//             x=_x;
//             y= new int(_y);
//             z= _z;
//         }
//         int getx() const{
//             return this->x;
//         }

//         void setx(int x){
//             this->x=x;
//         }
//         int gety() const{
//             return *y;
//         }

//         void sety(int _y){
//             *y=_y;
//         }
//         int getz() const{
//             return z;
//         }

//         void setz(int _z){
//             z=_z;
//         }        
// };

// void printabc( const abc &a){
//     cout<<a.getx()<<" "<<a.gety()<<" "<<a.getz()<<endl;
// }
// int main(){
//     abc a(1,2,3);
//     printabc(a);
//     return 0;
// }
// int main2()
// {
    // 1.Simple const

    // const int pi=3.14; // pi is now become constant 
    //initialization can be done but re-initialization or modification can not be done 

    //2. const with pointers
    // const int* pi= new int(3.14); //constant data, non constant pointer
    // int const *pi= new int(3.14); //same mean as line no 12
    // *pi=3.14;
    // cout<<*pi<<endl;
    // *pi=10;// can't change the content of the pointer
    // int b=10;
    // pi=&b; //pointer itself can be change
    // cout<<*pi<<endl;

    //3. constant pointer, but non constant data

    // int *const a= new int(10);
    // cout<<*a<<endl;
    // *a=20; //chal jaega
    // cout<<*a<<endl;
    // int b=50;
    // a = &b; //pointer can not be modified
    // cout<<*a<<endl;

    //4. Const data, Const pointer

//     const int *const a = new int(10);
//     cout<<*a<<endl;//neither pointer nor data can be change



//     return 0;
// }


//INITIALISATION LIST

// #include<bits/stdc++.h>
// #include<algorithm>
// using namespace std;
// class abc{
//     int x;
//     int* y;
//     int z;

//     public:
        //CONSTRUCTOR OR CTOR: OLD STYLE
        // abc(int _x, int _y, int _z=0){
        //     x= _x;
        //     y= new int(_y);
        //     z= _z; 
        // }


         //INITIALISATION LIST => a way to write constructor, it can also initialalize the const members
//             abc(int _x, int _y, int _z=0): x(_x),y(new int(_y)),z(_z) {}

// };        
// int main()
// {
    
//     return 0;
// }


//  MACROS

// #include<bits/stdc++.h>
// #include<algorithm>
// #define pi 3.14;
// using namespace std;

// float area(float& r){
//     float area=pi * (r) * (r);
//     return area;
// }
// int main()
// {
//     cout<<area(6.6)<<endl;
//     return 0;
// }