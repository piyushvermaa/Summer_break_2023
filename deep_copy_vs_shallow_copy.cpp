#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

class abc{
    public:
    int x;
    int* y;
    
    abc(int x, int y){
        this->x=x;
        this->y= new int (y);
    }
    //default dumb copy constructor: it does shallow copy
    // abc(const abc &obj){
    //     this->x=obj.x;
    //     this->y=obj.y;
    // }

    //my smart copy constructor : it does deep copy
    abc(const abc &obj){
       x= obj.x;
       y= new int (*obj.y);

    }
    void print()const{
        cout<<this->x<<endl<<*y<<endl<<y<<endl;
    }
    ~abc(){
        delete y;
     }
};
int main()
{
    abc a(1,2);
    cout<<endl;
    a.print();

    abc b(a);

    cout<<endl;
    b.print();

    abc c(b);
    cout<<endl;
    c.print();
    cout<<endl;
    return 0;
}