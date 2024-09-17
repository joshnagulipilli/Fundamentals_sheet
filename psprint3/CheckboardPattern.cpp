#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char a='X';
    for(int i=0;i<n;i++)
    {
        if(i%2==0) a='X';
        else a='O';
        for(int j=0;j<n;j++)
        {
            cout<<a;
            if(a=='O') a='X';
            else a='O';
            
        }
        cout<<endl;
    }
}


// i+j %2==0 then we put x since even +even = even , odd +odd=even;

// #include <iostream>
// using namespace std;

// void printCheckerboard(int rows, int cols) {
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             if ((i + j) % 2 == 0) {
//                 cout << "X";
//             } else {
//                 cout << "O";
//             }
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int n = 4;  // Number of rows
//     int cols = 6;  // Number of characters per row
//     printCheckerboard(n, cols);
//     return 0;
// }
