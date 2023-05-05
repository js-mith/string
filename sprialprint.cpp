#include<iostream>
using namespace std;

int main() {
       int a[100][100];
    int m, n;
    cin >> m >> n;
    // taking input
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
       
    }
     return 0;
}