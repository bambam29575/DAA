#include <iostream>
using namespace std;

int main()  
{
    int m , n, min;
    cout << "enter the value of m and n" << endl;
    cin >> a >> b >> c >> n;
    cout << "Enter the no of matrix" << endl;
    cin >> n;
    int a1[a][b],a2[b][c], a3[c][h], c[n][n], mk[n][n];
    p[3] = {a,b,c,h}
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(i = j)
            {
                c[i][j] = 0;
            }
            if(j>i)
            {
                for(int d = j-i; d < n; d++){
                    for(k=i; k<j; k++)
                    {
                     c[i][j] = c[i][k]+c[k+1][j]+p[i-1]*p[k]*p[j];
                     if(k == 1){
                     min = c[i][j];
                     }else if(c[i][j] < min)
                     {
                        min = c[i][j];
                     }
                   }
                }
                
            }
        }
    }
    return 0;
}
