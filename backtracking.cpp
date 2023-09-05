// permutations of a string ;

// #include<bits/stdc++.h>
// #include<algorithm>
// using namespace std;
// void printpermutation(string& s,int i){
//     //base case
//     if(i>=s.length()){
//         cout<<s<<endl;
//         return;
//     }

//     for(int j=i;j<s.length();j++){
//         //swap
//         swap(s[i],s[j]);
//         //recursive call
//         printpermutation(s,i+1);
//         //backtracking
//         swap(s[i],s[j]);
//     }
// }
// int main()
// {
//     string s;
//     cin>>s;
//     int i=0;
//     printpermutation(s,i);
//     return 0;
// }

// RAT IN A MAZE

// #include<bits/stdc++.h>
// #include<algorithm>
// using namespace std;
// int issafe(int i,int j, int row, int col, vector<vector<int>> &maze,vector<vector<bool>>& visited ){
//     if(((i>=0 and i<row) and (j>=0 and j<col)) and maze[i][j]==1 and visited[i][j]==0){
//         return true;
//     }
//     else return false;
// }
// void solvemaze(vector<vector<int>> &maze,int row,int col, int i, int j,vector<string>& path, string output, vector<vector<bool>>& visited){
//     //base case
//     if(i==row-1 and j==col-1){
//         path.push_back(output);
//         return;
//     }

//     //left
//     if(issafe(i,j-1,row,col,maze,visited)){
//         //visit
//         visited[i][j-1]=true;
//         //recurcive call
//         solvemaze(maze, row, col, i, j-1, path, output + 'L', visited);
//         //backtracking
//         visited[i][j-1]=false;
//     }

//     //right
//     if(issafe(i,j+1,row,col,maze,visited)){
//         //visit
//         visited[i][j+1]=true;
//         //recurcive call
//         solvemaze(maze, row, col, i, j+1, path, output + 'R', visited);
//         //backtracking
//         visited[i][j+1]=false;
//     }

//     //up
//     if(issafe(i-1,j,row,col,maze,visited)){
//         //visit
//         visited[i-1][j]=true;
//         //recurcive call
//         solvemaze(maze, row, col, i-1, j, path, output + 'U', visited);
//         //backtracking
//         visited[i-1][j]=false;
//     }

//     //down
//     if(issafe(i+1,j,row,col,maze,visited)){
//         //visit
//         visited[i+1][j]=true;
//         //recurcive call
//         solvemaze(maze, row, col, i+1, j, path, output + 'D', visited);
//         //backtracking
//         visited[i+1][j]=false;
//     }

// }
// int main()
// {
//     int row,col;
//     cin>>row>>col;

//     vector<vector<int>> maze(row,vector<int>(col));

//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cin>>maze[i][j];
//         }
//     }
//     if(maze[0][0]==0){
//         cout<<"PATH NOT EXICTED"<<endl;
//         return 0;
//     }
//     vector<vector<bool>> visited(row, vector<bool>(col, false));
//     visited[0][0]=true;

//     vector<string> path;
//     string output="";

//     int i=0,j=0;

//     solvemaze(maze,row, col, i, j, path, output, visited);
//     if(path.size()==0){
//         cout<<"PATH NOT EXICTED"<<endl;
//         return 0;
//     }
//     for(auto val: path) cout<<val<<endl;
//     return 0;
// }

// N-queens

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int count=0;
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
        count++;
        return;
    }

    // we have to solve one case

    for (int row = 0; row < n; row++)
    {
        if (isSafe(board, row, col, n))
        {
            // placing 1st queen at right positon
            board[row][col] = 'Q';
            // recursive call
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
    cout<<"NO. of ways "<<count;
    return 0;
}