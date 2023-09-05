// #include<bits\stdc++.h>
// #include<algorithm>
// using namespace std;
// bool check(int arr[],int n,int i){
//     if(i>=n-1){
//         return true;
//     }
//     if(arr[i]>arr[i+1]){
//         return false;
//     }
//     check(arr,n,i+1);
// }
// bool findd(string str,char target,int i,int n){
//     if(i>=n) return false;
// if(str[i]==target) return true;
// return findd(str,target,i+1,n);

// }
// void maxofarray(int arr[],int i,int n,int& maxi){
//     if(i>=n){
//         return;
//     }
//     if(maxi<arr[i]){
//         maxi=arr[i];
//     }
//     maxofarray(arr,i+1,n,maxi);
// }
// void printforward(int n){
//      if(n==0){
//         return;
//      }
//      printforward(n-1);
//      cout<<n<<" ";
// }
// void printreverse(int n){
//     if (n<=1){
//         cout<<n<<" ";
//         return;
//     }
//     else{
//         cout<<n<<" ";
//         return printreverse(n-1);
//     }
// }
// int fib(int n){
//     if (n==1){
//         return 0;
//     }
//     if(n==2){
//         return 1;
//     }
//     return fib(n-1)+fib(n-2);
// }
// int powerr(int num, int power){
//     if(power==0)
//         return 1;
//     else if(power==1)
//         return num;
//     else{
//         return num*powerr(num,power-1);
//     }        
// }
// int fac(int num){
//     if(num==1){
//         return 1;
//     }
//     else{
//         return num*fac(num-1);
//     }
// }
// int main()
// {
//     // int num,power;
//     // cin>>num;
//     // // int ans=powerr(num,power);
//     // // int ans=fac(num);
//     // // cout<<ans;3
//     // printreverse(num);
//     // cout<<endl;
//     // printforward(num);
//     // cout<<endl<<fib(num);
// // int maxi=INT_MIN;
// // int arr[5]={1,2,3,14,5};

// maxofarray(arr,0,5,maxi);

// // // cout<<maxi<<endl;
// // string str="piyushsoni";
// // bool ans=findd(str,'o',0,12);   
// // cout<<ans;      

// int arr[5]={10,20,30,60,50};

// // if(check(arr,5,0)){
// //     cout<<"True";
// // }
// // else{
// //     cout<<"False";
// // } 
//     return 0;
// }



//Binary search
// #include<bits\stdc++.h>
// #include<algorithm>
// using namespace std;
// bool findd(int arr[],int s,int e,int m,int target){
//     if(m[arr]==target){
//         return true;
//     }
//     if(arr[m]>target) e=m-1;
//     if(arr[m]<target) s=m+1;
//     if(e==s) return false;
//     m=s+(e-s)/2;
//     findd(arr,s,e,m,target);

// }
// int main()
// {
//     int arr[10]={1,2,3,4,5,6,7,9,10};
//     int s=0,e=9;
//     int m=s+(e-s)/2;
//     int target=6;
//     if(findd(arr,s,e,m,target)) cout<<"found";
//     return 0;
// }


// #include <iostream>
// #include<vector>
// using namespace std;

// bool checkSorted(vector<int> &arr, int& n, int i) {
//   //base case
//   if(i == n-1) {
//     return true;
//   }

//   //1 case solve krna h
//   if(arr[i+1] <= arr[i])
//     return false;

//   //baaki recursio sambhal lega
//   bool ans = checkSorted(arr, n, i+1);
//   return ans;

// }

// int main() {
//   vector<int> v{4,3,1,2,4,4};
//   int n = v.size();
//   int i = 0;
//   bool isSorted = checkSorted(v, n, i);

//   if(isSorted) {
//     cout << "Array is sorted" << endl;
//   }
//   else {
//     cout << "Array is not sorted" << endl;
//   }

//   return 0;
// }
// #include <iostream>
// #include<vector>
// using namespace std;

// int main() {
//   vector<int> v(10);
//   cin >> v[0];
//   cout << v[0] << " ";

//   return 0;
// }

// #include <iostream>
// #include<vector>
// using namespace std;

// int binarySearch(vector<int>& arr, int& s, int& e, int& key) {
//   //base case

//   if(s > e) 
//     return -1;
  
//   int mid = (s+e)/2;
//   if(arr[mid] == key)
//     return mid;

//   if(arr[mid] < key) {
//     s = mid+1;
//     int ans =  binarySearch(arr,s,e, key );
//     return ans;
//   }
//   else {  
//     e= mid-1;
//     int ans =  binarySearch(arr,s,e, key);
//     return ans;
//   }

// }

// int main() {
//   vector<int> v{10,20,40,60,70,90,99};
//   int target = 99;

//   int n = v.size();
//   int s = 0;
//   int e = n-1;
//   int ans = binarySearch(v, s, e, target );

//   cout << "Answer is: " << ans << endl;

//   return 0;
// }

// #include <iostream>
// #include<vector>
// using namespace std;

// void printSubsequences(string str, int n, string output, int i, vector<string>& v) {
//   //base case
//   if(i == n ) {
//     v.push_back(output);
//     return;
//   }

//   //include
//   printSubsequences(str,n, output + str[i], i+1,v);

//   //exclude
//   printSubsequences(str,n, output, i+1,v);


// }

// int main() {
//   string str = "abcd";
//   string output = "";
//   vector<string> v;
//   int i = 0;
//   int n = str.length();
//   printSubsequences(str,n, output, i, v);

//   cout << "Printing all subsequences " << endl;
//   for(auto val: v) {
//     cout << val << " " ; 
//   }

//   cout << endl << "Size of vector is: " << v.size() << endl;

//   return 0;
// }


//question ---> cuts into segment 


// #include<bits\stdc++.h>
// #include<algorithm>
// using namespace std;
// int solve(int n,int x, int y, int z){
//     if(n==0) return 0;
//     if(n<0) return INT_MIN;

//     int ans1=solve(n-x,x,y,z)+1;
//     int ans2=solve(n-y,x,y,z)+1;
//     int ans3=solve(n-z,x,y,z)+1;
//     int ans= max(ans1, max(ans2,ans3));

//     return ans;
// }
// int main()
// {
//     int n=7;
//     int x=5;
//     int y=2;
//     int z=2;
//     int ans=solve(n,x,y,z);
//     if(ans==INT_MIN) ans=0;
//     cout<<ans;
//     return 0;
// }

// #include<bits\stdc++.h>
// #include<algorithm>
// using namespace std;

// bool ispalindrome(string&s, int i, int e){
//     //base case
//     if(i>=e){
//         return true;
//     }
//     //ek case solve krte h
//     if(s[i]!=s[e]){
//         return false;
//     }
//     //recursion bhai handle 
//     return ispalindrome(s,i+1,e-1);
// }
// int main()
// {
//     string s,part;
//     cin>>s;
//     cin>>part;
//     // if(ispalindrome(s,0,s.size()-1)){
//     //     cout<<"Palindrome";
//     // }
//     // else cout<<"Not palindrome";
//     return 0;
// }

// #include<bits\stdc++.h>
// #include<algorithm>
// using namespace std;
// void solve(int n,int i){
//     if(i>n) return;
//     cout<<i<<" ";
//     solve(n,i+1);
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int i=1;
//     solve(n,i);
//     return 0;
// }

// #include<bits\stdc++.h>
// #include<algorithm>
// using namespace std;
// void solve(int n, int k){
//     if(k==0) return;
//     solve(n,k-1);
//     cout<<n*k<<", ";
// }
// int main()
// {
//     int n,k;
//     cin>>n>>k;
//     solve(n,k);

//     return 0;
// }

// #include<bits\stdc++.h>
// #include<algorithm>
// using namespace std;
// void solve(int n, int &ans){
//     if(n==0) return;
//     if(n%2==0) ans-=n;
//     else ans+=n;
//     solve(n-1,ans);
// }
// int main()
// {
//     int n,ans=0;
//     cin>>n;
//     solve(n,ans);
//     cout<<ans;
//     return 0;
// }

// convert int to english word (in indian number system)

#include<bits\stdc++.h>
#include<algorithm>
using namespace std;
vector<pair<int,string>> mp={{10000000,"Crore"},{100000,"Lakh"},{1000,"Thousand"},{100,"Hundred"},{90,"Ninety"},{80,"Eighty"},{70,"Seventy"},{60,"Sixty"},{50,"Fifty"},{40,"Forty"},{30,"Thirty"},{20,"Twenty"},{19,"Nineteen"},{18,"Eighteen"},{17,"Seventeen"},{16,"Sixteen"},{15,"Fifteen"},{14,"Fourteen"},{13,"Thirteen"}, {12,"Twelve"}, {11,"Eleven"},{10,"Ten"},{9,"Nine"},{8, "Eight"},{7,"Seven"},{6,"Six"},{5,"Five"},{4,"Four"},{3,"Three"},{2,"Two"},{1,"One"}};

string numbertoword(int num){
    if(num==0) return "Zero";
     for(auto it: mp){
        if(num>=it.first){
            string a="";
            if(num>=100){
                a=numbertoword(num/it.first)+" ";
            }
            string b=it.second;
            string c="";
            if(num%it.first!=0){
                c=" "+numbertoword(num%it.first);
            }
            return a+b+c;
        }
    }
    return "";
}
int main()
{

    int num;
    cin>>num;
    cout<<numbertoword(num)<<endl;
   
    
    return 0;
}