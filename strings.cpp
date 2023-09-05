// #include<bits\stdc++.h>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     char name[100];
//     cin.getline(name,100);
//     cout<<endl<<"Hello!! "<<name<<endl;
//     return 0;
// }


//length of given string

// #include<bits\stdc++.h>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     char name[30];
//     cin.getline(name,30);

//     // classical method

//     int count=0;
//     for(int i=0;name[i];i++){
//         count++;
//     }
//     cout<<count<<endl;

//     //predefined function
//     cout<<strlen(name);
//     return 0;
// }

//reverse a string

// #include<bits\stdc++.h>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     char ch[20];
//     cin.getline(ch,20);
//     int s=0,e=strlen(ch)-1;
//     while(s<=e){
//         swap(ch[s],ch[e]);
//         s++;
//         e--;
//     }
//     cout<<ch<<endl;
//     return 0;
// }

//replace all spaces with @

// #include<bits\stdc++.h>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     char ch[50];
//     cin.getline(ch,50);
//     for(int i=0;ch[i];i++){
//         if(ch[i]==' '){
//             ch[i]='@';
//         }
//     }
//     cout<<ch<<endl;
//     return 0;
// }


//check palindrome

// #include<bits\stdc++.h>
// #include<algorithm>
// using namespace std;
// bool checkpalindrome(char ch[]){
//     int s=0;
//     int e=strlen(ch)-1;
//     while(s<=e){
//         if(ch[s]!=ch[e]){
//             return false;
//         }
//         s++;
//         e--;
//     }
//     return true;
// }

// int main()
// {
//     char ch[20];
//     cin.getline(ch,20);
//     int x=checkpalindrome(ch);
//     if (x) cout<<"PALINDROME"<<endl;
//     else cout<<"NOT PALINDROME"<<endl;
//     return 0;
// }

// #include<bits\stdc++.h>
// #include<algorithm>
// using namespace std;
// void convertlowercase(char ch[]){
//     for(int i=0;ch[i];i++){
//         if (int(ch[i])>=65 and int(ch[i])<=90){
//             ch[i]=char(int(ch[i])+32);
//         }
//     }
// }
// void convertuppercase(char ch[]){
//     for(int i=0;ch[i];i++){
//         if (int(ch[i])>=97 and int(ch[i])<=122){
//             ch[i]=char(int(ch[i])-32);
//         }
//     }
// }
// int main()
// {
//     char ch[20];
//     cin.getline(ch,20);
//     convertuppercase(ch);
//     cout<<ch<<endl;
//     convertlowercase(ch);
//     cout<<ch<<endl;
//     return 0;
// }

//strings

#include<bits\stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    cout<<str<<endl<<"Length : "<<str.length()<<endl;

    return 0;
}