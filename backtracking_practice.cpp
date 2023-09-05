//print abbreviation 

#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void solve(string&s, string ans,int count, int i){
    //base case
    if(i>=s.size()){
        if(count>0){
            ans+=to_string(count);
         cout<<ans<<endl;
        }
        else{
            cout<<ans<<endl;
        }
        return ;
    }
    if(count>0)
    solve(s,ans+to_string(count)+s[i],0,i+1);
    else
    solve(s,ans+s[i],0,i+1);



    
    solve(s,ans,count+1,i+1);
}
int main()
{
    #ifndef ONLINE_JUDGE
 
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
 
    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);
 
#endif
     string s;
     cin>>s;
     solve(s,"",0,0);
    return 0;
}