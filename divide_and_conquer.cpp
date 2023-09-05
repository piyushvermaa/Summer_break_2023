// Merge sort //

// #include<bits/stdc++.h>
// #include<algorithm>
// using namespace std;
// void merge(int* arr, int s, int e){
//     int mid= s+(e-s)/2;

//     int len1= mid-s+1;
//     int len2= e-mid;

//     int* left= new int[len1];
//     int* right= new int[len2];

// // copy values
//     // left
//     int k=s;
//     for(int i=0;i<len1;i++){
//         left[i]= arr[k];
//         k++;
//     }
//     // right
//     k=mid+1;
//      for(int i=0;i<len2;i++){
//         right[i]= arr[k];
//         k++;
//     }

//     // merging

//     int leftindex=0;
//     int rightindex=0;
//     int mainindex=s;

//     while(leftindex < len1 and rightindex < len2){
//         if(left[leftindex]< right[rightindex]){
//             arr[mainindex++]= left[leftindex++];
//         }
//         else{
//             arr[mainindex++]=right[rightindex++];
//         }
//     }

//     // copy logic for left index

//     while(leftindex < len1){
//         arr[mainindex++]= left[leftindex++];
//     }

//     // copy logic for right index

//     while(rightindex < len2){
//         arr[mainindex++]=right[rightindex++];
//     }

//     // TODO: delete newly created left and right array
//     delete[] left;
//     delete[] right;

// }
// void mergesort(int* arr, int s, int e){
//     // base case
//                                 // if s==e ---> single element
//                                 // if s > e ---> invalid array
//     if(s>=e) return;

//     int m= s+(e-s)/2;

//     // left part
//     mergesort(arr, s, m);

//     // right part
//     mergesort(arr, m+1,e);

//     // now we have to merge two sorted array

//     merge(arr, s, e);

// }
// int main()
// {
//     int n;
//     cin>>n;
//     int* arr= new int[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int s=0;
//     int e=n-1;

//     mergesort(arr,s,e);

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     delete[] arr;
//     return 0;
// }

// QUICK SORT //

// #include <bits/stdc++.h>
// #include <algorithm>
// using namespace std;

// int partition(int arr[], int s, int e)
// {
//     int count = 0;
//     int pivotindex = s;
//     int ele = arr[s];
//     // we will count how many element are smaller than the pivot ele
//     for (int i = s + 1; i <= e; i++)
//     {
//         if (ele >= arr[i])
//             count++;
//     }

//     // now we will move pivot element to its correct postion
//     int rightindex = s + count;
//     swap(arr[pivotindex], arr[rightindex]);
//     // update pivotindex also
//     pivotindex = rightindex;

//     // move smaller element left side of pivot element and move greater element to right side of pivot index
//     int i = s;
//     int j = e;

//     while (i < pivotindex and j > pivotindex)
//     {
//         while (arr[i] <= ele)
//         {
//             i++;
//         }
//         while (arr[j] > ele)
//         {
//             j--;
//         }

//         // if we have a greater value at right side we have to move it visa versa;
//         if (i < pivotindex and j > pivotindex)
//             swap(arr[i], arr[j]);
//     }

//     return pivotindex;
// }
// void quicksort(int *arr, int s, int e)
// {
//     // base case
//     if (s >= e)
//         return;

//     // partition logic

//     int p = partition(arr, s, e);

//     // Recursive call

//     // left
//     quicksort(arr, s, p - 1);

//     // right
//     quicksort(arr, p + 1, e);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int *arr = new int[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int s = 0;
//     int e = n - 1;

//     quicksort(arr, s, e);

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// Merge sort  with count inversions //

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;
    int c = 0;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *left = new int[len1];
    int *right = new int[len2];

    // copy values
    // left
    int k = s;
    for (int i = 0; i < len1; i++)
    {
        left[i] = arr[k];
        k++;
    }
    // right
    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        right[i] = arr[k];
        k++;
    }

    // merging

    int leftindex = 0;
    int rightindex = 0;
    int mainindex = s;

    while (leftindex < len1 and rightindex < len2)
    {
        if (left[leftindex] < right[rightindex])
        {
            arr[mainindex++] = left[leftindex++];
        }
        else
        {
            arr[mainindex++] = right[rightindex++];
            {
                c += mid - leftindex + 1;
            }
        }
    }

    // copy logic for left index

    while (leftindex < len1)
    {
        arr[mainindex++] = left[leftindex++];
    }

    // copy logic for right index

    while (rightindex < len2)
    {
        arr[mainindex++] = right[rightindex++];
    }

    // TODO: delete newly created left and right array
    delete[] left;
    delete[] right;

    return c;
}
int mergesort(int *arr, int s, int e)
{
    // base case
    // if s==e ---> single element
    // if s > e ---> invalid array
    if (s >= e)
        return 0;

    int m = s + (e - s) / 2;
    int c = 0;
    // left part
    c += mergesort(arr, s, m);

    // right part
    c += mergesort(arr, m + 1, e);

    // now we have to merge two sorted array

    c += merge(arr, s, e);

    return c;
}
int countinversion(int *arr, int e)
{
    int c = 0;
    c = mergesort(arr, 0, e);
    return c;
}
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int s = 0;
    int e = n - 1;

    // mergesort(arr,s,e);
    int c = countinversion(arr, e);

    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    cout << endl
         << endl
         << c;
    delete[] arr;
    return 0;
}