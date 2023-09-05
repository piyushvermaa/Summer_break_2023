// #include <iostream>
// using namespace std;

// int main() {
// //   int a = 5;
// //   int b = 5;

// //   cout << a << endl;

// //   cout << &a << endl;
// //   cout << &b << endl;

//         // int a = 5;
//         // //pointer create
//         // int* ptr = &a;

//         // //access the value ptr is pointing to
//         // cout << "Address of a is: " << &a << endl;
//         // cout <<"value stored at ptr is: " << ptr << endl;
//         // cout <<"value ptr is pointing to is: " << *ptr << endl;
//         // cout << &ptr << endl;

//         // int a = 5;
//         // int* p = &a ;

//         // cout <<sizeof(p) << endl;

//         // char ch = 'b';
//         // char* c = &ch ;

//         // cout <<sizeof(c) << endl;

//         // double dtr = 5.03;
//         // double* d = &dtr ;

//         // cout <<sizeof(d) << endl;

//         //BAD PRACTICE
//         // int* ptr;

//         // cout << *ptr << endl;

//         //NULL POINTER
//         // int* ptr = 0;

//         // cout << *ptr << endl;
        
//         // int a = 5;

//         // int* ptr = &a;

//         // //copy pointer
//         // int* dusraPtr = ptr;

//         // cout << *ptr << endl;
//         // cout << *dusraPtr << endl;
 

//         int a = 10;
//         int* p = &a;
//         int* q = p;
//         int* r = q;

//         cout << a << endl; //10
//         cout << &a << endl; //address of a 
//         cout << p << endl; //address of a 
//         cout << &p << endl; //address of p
//         cout << *p << endl; //10
//         cout << q << endl; //address of a
//         cout << &q << endl; //address of q
//         cout << *q << endl; //10
//         cout << r << endl; //address of a
//         cout << &r << endl; //address of r
//         cout << *r << endl; //10
//         cout << (*p + *q + *r) << endl; //30
//         cout << (*p)*2 + (*r)*3 << endl; //50
//         cout << (*p/2) - (*q)/2 << endl; //0


  




//   return 0;
// }


// #include<bits\stdc++.h>
// #include<algorithm>
// using namespace std;
// int main()
// {
//   int arr[10]={10,20,30,40,50,60,70,80,90,100};
//   // cout<<arr<<endl<<&arr<<endl<<&arr[0]<<endl;
 
//   // cout<<*arr<<endl;
//   // cout<<*arr+1<<endl;
//   // cout<<*(arr+1)<<endl;
//   // cout<<*arr*2<<endl;
//   // cout<<*arr+5<<endl;
//   // cout<<*(arr+9)<<endl;
  
//   for(int i=0;i<10;i++){
//     // cout<<*(arr+i)<<endl;
//     // cout<<i[arr]<<endl;
//     cout<<*(i+arr)<<endl;
//   }
//   // *(arr+10)=5;
//   // cout<<*(arr+10);
//   return 0;
// }

//char pointer

// #include<bits\stdc++.h>
// #include<algorithm>
// using namespace std;
// int main()
// {
//   char ch[]="Piyush";
//   char* c = ch;
//   cout<<c
//   <<endl;
//   cout<<c+2<<endl;
//   cout<<&c<<endl;
//   cout<<*c<<endl;

//   cout<<&ch<<endl;
//   cout<<ch[0]<<endl;
//   cout<<&ch[0]<<endl;
//   return 0;
// }

#include <iostream>
using namespace std;

void solve(int arr[]) {
        cout <<"Size inside solve function " << sizeof(arr) << endl;
        cout <<"arr: " << arr << endl;
        cout << "&arr: " << & arr << endl;

        arr[0] = 50;
}

void update(int *p) {
        cout << "Address stored inside p is: " << p << endl;
        cout << "Address of p  is:" << &p << endl;
        *p = *p + 10;
}

int main() {

        //int arr[4] = {12,44,66,18};

        // cout << arr << endl;
        // cout << arr[0] << endl;
        // cout << &arr << endl;
        // cout << &arr[0] << endl;

        // int* p = arr;
        // cout << p << endl;
        // cout << &p << endl;

        // cout << *arr << endl;
        // cout << arr[0] << endl;
        // cout << *arr + 1 << endl;
        // cout << *(arr) + 1 << endl;
        // cout << *(arr + 1) << endl;
        // cout << arr[1] << endl;
        // cout << *(arr + 2) << endl;
        // cout << arr[2] << endl;
        // cout << *(arr + 3) << endl;
        // cout << arr[3] << endl;

        // int i = 0;
        // cout << arr[i] << endl;
        // cout << i[arr] << endl;
        // cout << *(arr + i) << endl;
        // cout << *(i + arr) << endl;

        // //arr = arr + 2;

        // // int* p = arr;
        // // p = p + 2;

        // // int arr[10];
        // // cout << sizeof(arr) << endl;

        // // int* p = arr;
        // // cout << sizeof(p) << endl;

        // // cout << sizeof(*p) << endl;

        // // char ch[10] = "Babbar";
        // // char* c = ch;

        // // cout << ch << endl;
        // // cout << &ch << endl;
        // // cout << ch[0] << endl;

        // // cout << &c << endl;
        // // cout << *c << endl;
        // // cout << c << endl;

        // char name[9] = "SherBano";
        // char* c = &name[0];

        // cout << name << endl;
        // cout << &name << endl;
        // cout << *(name + 3) << endl;
        // cout << c << endl;
        // cout << &c << endl;
        // cout << *(c + 3) << endl;
        // cout << c+2 << endl;
        // cout << *c << endl;
        // cout << c+8 << endl; 

        // char ch = 'k';
        // // char* cptr = &ch;

        // // cout << cptr << endl;

        // // char name[10] = "babbar";
        // // cout << name << endl;

        // // char* c = "babbar";
        // // cout << c << endl;


        // int arr[10] = {1,2,3,4};
        // cout << "Size inside main function. " << sizeof(arr) << endl;
        // cout << arr << endl;
        // cout << &arr << endl;

        // //printing array inside main
        // for(int i=0; i<10; i++) {
        //         cout << arr[i] << " ";
        // }cout << endl;
        // cout << endl << endl << "Now calling solve function" << endl;

        // solve(arr);

        // cout << "Wapas main function me aagye h " << endl;

        // for(int i=0; i<10; i++) {
        //         cout << arr[i] << " ";
        // }cout << endl;

        int a = 5;
        cout << "Address of a is: " << &a << endl;
        int* ptr = &a;
        cout << "address stored in ptr is: " << ptr << endl;
        cout << "Address of ptr is: " << &ptr << endl;
        update(ptr);
        cout<<"value of a is: " << a << endl;



        return 0;
}