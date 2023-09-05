// #include<iostream>
// using namespace std;
// void printrowsum(int arr[][3]){
    
//     for (int i=0;i<3;i++)
//     {
//         int sum=0;
//         for(int j=0;j<3;j++){
//             sum+=arr[i][j];
//         }
//         cout<<sum<<endl;
//     }
// }
// void printcolsum(int arr[][3]){
    
//     for (int i=0;i<3;i++)
//     {
//         int sum=0;
//         for(int j=0;j<3;j++){
//             sum+=arr[j][i];
//         }
//         cout<<sum<<endl;
//     }
// }
// int main()
// {
//     int arr[3][3];
//     for (int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++){
//             cin>>arr[i][j];
//         }
//     }
//     printcolsum(arr);
//     printrowsum(arr);
//     return 0;
// }

// #include<bits\stdc++.h>
// using namespace std;
// int main()
// {
//     vector<vector<int>> arr;
//     vector<int> a{1,2,3};
//     vector<int> b{4,5,6};
//     vector<int> c{7,8,9};
//     arr.push_back(a);
//     arr.push_back(b);
//     arr.push_back(c);
    
//     for(int i=0;i<arr.size();i++){
//         for(int j=0;j<arr[i].size();j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     int rows =3,cols=5;

//     vector<vector<int>> arr(rows,vector<int>(cols,0));
//     vector<vector<int>> brr(5,vector<int>(5,-8));
//     return 0;
// } 



//dutch National flag algorithm

// #include<bits\stdc++.h>
// using namespace std;
// void moveallnegtoleft(int arr[],int size){
// int l=0,h=size;
// while(l<h){
//     if(arr[l]<0)
//         l++;
//     else if(arr[h]>0)
//         h--;
//     else
//         swap(arr[l],arr[h]);
// }
// }
// int main()
// {
//     int arr[5];
//     for (int i=0;i<5;i++){
//         cin>>arr[i];
//     }
//     moveallnegtoleft(arr,5);
//     for(auto val: arr){
//         cout<<val<<" ";
//     }
//     return 0;
// }


//missing elements from an array with duplicates

// #include<bits\stdc++.h>
// using namespace std;
// void findmissing(int arr[],int size){
//     //visited method

//     for(int i=0;i<size;i++){
//         int index = abs(arr[i]);
//         if (arr[index - 1] > 0){
//             arr[index - 1] *= -1;
//         }
//     }

//     // all positive index are missing
//     for(int i=0; i<size;i++){
//         if(arr[i]>0){
//             cout<<i+1<<" ";
//         }
//     }
// }

// void method2(int arr[],int size){
//    //we can sort the given array and compare the no. with indexes
//    for(int i=0;i<size;i++){
//     for (int j=0;j<size;j++){
//         if(arr[i]>arr[j]){
//             swap(arr[i],arr[j])
//         }
//     }
//    }
// }
// int main()
// {
//     int arr[10];
//     for(int i=0;i<10;i++){
//         cin>>arr[i];
//     }
// findmissing(arr,10);
//     return 0;
// }



//wave print


// #include<bits\stdc++.h>
// using namespace std;
// void waveprintmatrix(vector<vector<int>> arr){
//     int rows=arr.size();
//     int cols=arr[0].size();
//     for(int startingcol=0;startingcol<cols;startingcol++){
//         //even no of col---> top to bottom
//         if(startingcol%2==0){
//             for (int i=0;i<rows;i++)
//             {
//                 cout<<arr[i][startingcol]<<" ";
//             }
//         }
//         else{
//             for(int i=rows-1;i>=0;i--){
//                 cout<<arr[i][startingcol]<<" ";
//             }
//         }
//     }
// }
// int main()
// {
//    vector <vector<int>> arr{
//     {1,2,3,4},{5,6,7,8},{9,10,11,12,13}
//    };
//  waveprintmatrix(arr);
//     return 0;
// }

//factorial of a large no.

// #include<bits\stdc++.h>
// using namespace std;
// vector<int> factorial(int n){
    
// }
// int main()
// {
    
//     return 0;
// }


//tate by one

// #include<bits\stdc++.h>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     int arr[7];
//     for(int i =0 ; i<7;i++){
//         cin>>arr[i];
//     }
    
//         int temp=arr[0];
//         for(int j=1;j<7;j++){
//             arr[j-1]=arr[j];
//         }
//         arr[6]=temp;
    
//     for(auto val: arr){
//         cout<<val<<" ";
//     }

//     return 0;
// }


//union of two sorted array

// #include <bits/stdc++.h>

// using namespace std;

// vector < int > FindUnion(int arr1[], int arr2[], int n, int m) {
//   int i = 0, j = 0; // pointers
//   vector < int > Union; // Uninon vector
//   while (i < n && j < m) {
//     if (arr1[i] <= arr2[j]) // Case 1 and 2
//     {
//       if (Union.size() == 0 || Union.back() != arr1[i])
//         Union.push_back(arr1[i]);
//       i++;
//     } else // case 3
//     {
//       if (Union.size() == 0 || Union.back() != arr2[j])
//         Union.push_back(arr2[j]);
//       j++;
//     }
//   }
//   while (i < n) // IF any element left in arr1
//   {
//     if (Union.back() != arr1[i])
//       Union.push_back(arr1[i]);
//     i++;
//   }
//   while (j < m) // If any elements left in arr2
//   {
//     if (Union.back() != arr2[j])
//       Union.push_back(arr2[j]);
//     j++;
//   }
//   return Union;
// }

// int main()

// {
//   int n = 10, m = 7;
//   int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//   int arr2[] = {2, 3, 4, 4, 5, 11, 12}; 
//   vector < int > Union = FindUnion(arr1, arr2, n, m);
//   cout << "Union of arr1 and arr2 is  " << endl;
//   for (auto & val: Union)
//     cout << val << " ";
//   return 0;
// }

//intersection of two sorted array

// #include<bits\stdc++.h>
// #include<algorithm>
// using namespace std;
// vector<int> Findintersection(int arr1[],int arr2[],int n, int m){
//   vector < int > intersection;
//   int i=0,j=0;
//   while(i<n and j<m){
//     if(arr1[i]==arr2[j]){
//       intersection.push_back(arr1[i]);
//       i++;
//       j++; 
//     }
//     else if(arr1[i]<arr2[j]){
//       i++;
//     }
//     else{
//       j++;
//     }
//   }
//   return intersection;  
// }
// int main()

// {
//   int n = 10, m = 7;
//   int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//   int arr2[] = {2, 3, 4, 4, 5, 11, 12}; 
//   vector < int > Union = Findintersection(arr1, arr2, n, m);
//   cout << "Union of arr1 and arr2 is  " << endl;
//   for (auto & val: Union)
//     cout << val << " ";
//   return 0;
// }


#include<bits\stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> arr;
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    cout<<*max_element(arr.begin(),arr.end());
    return 0;
}