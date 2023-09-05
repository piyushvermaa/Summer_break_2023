#include<bits/stdc++.h>
#include "bird.h"
#include<algorithm>
using namespace std;

void birddoessomething(Bird *&bird){
    bird->eat();
    bird->fly();
    bird->eat();
    bird->fly();
    bird->eat();
    bird->fly();
    bird->eat();
    bird->fly();
    bird->eat();
    bird->fly();
    bird->eat();
    bird->fly();
    bird->eat();
    bird->fly();
    bird->eat();
    bird->fly();
}
int main()
{
    Bird *bird= new eagle();
    birddoessomething(bird);
    return 0;
}