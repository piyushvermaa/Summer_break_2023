#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    string a="I hate it";
    string b="I love it";
    string ans="";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==1) ans+=a;
        else ans+=b;
        
        if(i+1<=n){
            int s=ans.size();
         ans.erase(s-2);
         ans+=" that ";
        }
    }
    cout<<ans;
    
    return 0;
}