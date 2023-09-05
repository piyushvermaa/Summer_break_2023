//binary search

// #include<bits\stdc++.h>
// using namespace std;
// bool binarysearch(vector<int> arr,int n,int target){
//     int start=0,end=n-1;
//     int mid=(start+end)/2;
//     while(start<=end){
//         if(arr[mid]==target){
//          return true;
//         }
//         else if(arr[mid]>target){
//             end=mid-1;
//         }
//         else{
//             start=mid+1;
//         }
//         mid=(start+end)/2;
//     }
//     return false;
// }
// int main()
// {
//     int n,target;
//     cin>>n>>target;

//     vector <int> arr(n);
//     for(int i=0;i<n;i++)
//         cin>>arr[i];
//     int x=binarysearch(arr,n,target);
//     if(x==1) cout<<"element present";
//     else cout<<"element not found";
//     return 0;
// }


//binary search with the help of function

// #include<bits\stdc++.h>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     int brr[]={1,2,3,4,5,6,7,8,9,10};
//     int size=10;
//     vector<int> arr{1,2,3,4,5,6,7,8,9,10};
//     //for array
//     if(binary_search(brr,brr+ size,8)) cout<<"present"<<endl;
//     //for vector
//     if(binary_search(arr.begin(),arr.end(),2)){
//         cout<<"element present";
//     }

//     return 0;
// }

//first occurance
// #include<bits\stdc++.h>
// using namespace std;
// int firstoccurance(int arr[],int n,int target){
    
//     int start=0,end=n-1;
//     int mid=start + (end-start)/2;
//     int ans=-1;
//     while(start<=end){
//         if(arr[mid]==target){
//             ans=mid;
//            end=mid-1;  //first occurance of target
//             //start=mid+1;   //last occurance of target
//         }
//         else if(arr[mid]>target){
//             end=mid-1;
//         }
//         else{
//             start=mid+1;
//         }
//         mid=(start+end)/2;
//     }
//     return ans;
// }
// int main()
// {
//     int arr[]={1,3,4,4,4,4,7,8};
//     cout<<firstoccurance(arr,8,4)<<endl;

//     return 0;
// }


//first and last occurance with function


//SQ. ROOT OF A NO. USING BINARY SEARCH

// #include<bits\stdc++.h>
// #include<algorithm>
// using namespace std;
// int sq(int target){
//     int s=0,e=target/2;
//     int m=s+(e-s)/2;
//     int ans=-1;
//     while(s<=e){
//         if(m*m==target){
//             return m;
//         }
//         else if(m*m>target){
//             e=m-1;
//         }
//         else{
//            ans=m;
//            s=m+1;
//         }
//         m=s+(e-s)/2;
//     }
//     return ans;
// }
// int main()
// {
//     cout<<sq(16);
//     return 0;
// }


//binary search in 2d array

// #include<bits\stdc++.h>
// #include<algorithm>
// using namespace std;
// bool findelement(int arr[][3], int row , int col, int target){
//     int s=0,e=row*col-1;
//     int m=s+(e-s)/2;
//     while(s<=e){
//         int rowi=m/col;  //gives row index
//         int coli=m%col;  //gives col index
//         if(arr[rowi][coli]==target){
//             return true;
//         }
//         else if(arr[rowi][coli]<target){
//             s=m+1;
//         }
//         else{
//             e=m-1;
//         }
//         m=s+(e-s)/2;
//     }
//     return false;
// }
// int main()
// {
//     int arr[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<findelement(arr,3,3,5)<<endl;
//     return 0;
// }

 //binary search in a nearly sorted array

//nearly sorted array--> when the i th element of array can be present at (i-1)th or ith or (i+1)th position 

 #include<bits\stdc++.h>
 #include<algorithm>
 using namespace std;
 bool nearlysorted(int arr[], int n, int target){
    int s=0,e=n-1;
    int m=s+(e-s)/2;
    while(s<=e){
        if(arr[m]==target or arr[m-1]==target or arr[m+1]==target){
            return true;
        }
        else if (arr[m]<target){
            s=m+2;
        }
        else{
            e=m-2;
        }
        m=s+(e-s)/2;
    }
 }
 int main()
 {
    int arr[]={10,3,40,20,50,80,70};  
    cout<<nearlysorted(arr,7,40);
    return 0;
 }