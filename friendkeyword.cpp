#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

class abc{
    private:
    int x;
    public:
    abc(int _x): x(_x) {}
    
    int getx()const{return x;}

    int setx(int x){ this->x=x;}

    friend class xyz;
};

class xyz{
    public:
    void print(const abc &ABC){
        cout<<ABC.getx()<<endl;
        cout<<ABC.x<<endl;
    }
};
int main()
{
    abc A(5);
    xyz b;
    b.print(A);
    return 0;
}