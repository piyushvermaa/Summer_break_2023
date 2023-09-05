#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
bool isSafe(vector<vector<char>> &board, int row, int col, int n)
{
    int i = row;
    int j = col;

    // row checking
    while (j >= 0)
    {
        if (board[i][j] == 'Q')
            return false;
        j--;
    }

    // upper left digonal checking
    i = row;
    j = col;
    while (i >= 0 and j >= 0)
    {
        if (board[i][j] == 'Q')
            return false;
        i--;
        j--;
    }

    // lower left digonal checking
    i = row;
    j = col;
    while (i < n and j >= 0)
    {
        if (board[i][j] == 'Q')
            return false;
        i++;
        j--;
    }

    return true;
}
void printboard(vector<vector<char>> &board, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl
         << endl;
}
void solve(vector<vector<char>> &board, int col, int n)
{
    // base case
    if (col >= n)
    {
        printboard(board, n);
        return;
    }

    // we have to solve one case

    for (int row = 0; row < n; row++)
    {
        if (isSafe(board, row, col, n))
        {
            // placing 1st queen at right positon
            board[row][col] = 'Q';
            // recursive call to place queen in next col
            solve(board, col + 1, n);
            // backtracking
            board[row][col] = '.';
        }
    }
}
int main()
{
    int n;
    cin >> n;
    if (n == 3 or n == 2 or n <= 0)
    {
        cout << "Not Possible to Place N Queens" << endl;
        return 0;
    }
    vector<vector<char>> board(n, vector<char>(n, '.'));
    int col = 0;
    solve(board, col, n);
    return 0;
}










// class Solution {
// public:

//     unordered_map<int,bool> rowCheck;
//     unordered_map<int,bool> upperLeftDiagnolCheck;
//     unordered_map<int,bool> bottomLeftDiagnolCheck;

//     void storeSolution(vector<vector<char>> &board, int n, vector<vector<string> > &ans) {
//         vector<string> temp;
//         for(int i=0; i<n; i++) {
//             string output = "";
//             for(int j=0; j<n ;j++) {
//                 output.push_back(board[i][j]);
//             }
//             temp.push_back(output);
//         }
//         ans.push_back(temp);
//     }


//     bool isSafe(int row, int col, vector<vector<char>> &board, int n) {

//         if(rowCheck[row] == true )
//             return false;
            
//         if(upperLeftDiagnolCheck[n-1+col-row] == true)
//             return false;
            
//         if(bottomLeftDiagnolCheck[row+col] == true)
//             return false;

//         return true;


	
  //check karna chahte h , k kya main 
  //current cell [row,col] pr    QUEEN rakh 
  //sakta hu ya nahi
  // int i = row;
  // int j = col;

  // //check row
  // while(j >= 0) {
  //   if(board[i][j] == 'Q') {
  //     return false;
  //   }
  //   j--;
  // }

  // //check upper left diaglnol 
  // i = row;
  // j = col;
  // while(i>=0 && j>=0 ) {
  //   if(board[i][j] == 'Q'){
  //     return false;
  //   }
  //   i--;
  //   j--;
  // }


  // //check bottom left diagnol
  // i = row;
  // j = col;
  // while( i < n && j >=0) {
  //   if(board[i][j] == 'Q') {
  //     return false;
  //   }
  //   i++;
  //   j--;
  // }

  // //kahin pr bhi queen nahi mili
  // //iska matlab ye position safe hai 
  // //iska matlab eturn kardo true
  // return true;   
// }


//     void solve(vector<vector<char>> &board, int col, int n, vector<vector<string> > &ans  ) {
//     //base case
//     if(col >= n) {
//         storeSolution(board, n, ans);
//         return ;
//     }

//     //1 case solve karna h , baaki recursion sambhal lega

//     for(int row = 0; row <n; row++) {
//         if(isSafe(row, col, board, n)) {
//         //rakh do
//         board[row][col] = 'Q';
//         rowCheck[row] = true;
//         upperLeftDiagnolCheck[n-1+col-row] = true;
//         bottomLeftDiagnolCheck[row+col] = true;
            
//         //recursion solution laega
//         solve(board, col+1, n, ans);
//         //backtracking
//         board[row][col] = '.';
//         rowCheck[row] = false;
//         upperLeftDiagnolCheck[n-1+col-row] = false;
//         bottomLeftDiagnolCheck[row+col] = false;
//         }

//     }
// }


//     vector<vector<string>> solveNQueens(int n) {
//         vector<vector<char>> board(n, vector<char>(n,'.'));
//         vector<vector<string> > ans;
//         int col = 0;
//         //0 -> empty cell
//         //1 -> Queen at the cell
//         solve(board, col, n, ans);
//         return ans;
//     }
// };