//Transpose of a square matrix

#include <iostream>
using namespace std;

int main (){
   int n, m;
   cout << "Enter the number of rows :" << endl;
   cin >> n;
   cout << "Enter the number of column :" << endl;
   cin >> m;

   int A[n][m];

   for (int i = 0; i < n; i++)
   {
      cout << "Enter numbers for row" << i + 1 << " :";
      for (int j = 0; j < m; j++)
      {
         cin >> A[i][j];
      }
   }

   for (int i = 0; i < n; i++)
   {
      for (int j = i; j < n; j++)
      {
         int temp = A[i][j];
         A[i][j] = A[j][i];
         A[j][i] = temp;
      }  
      
   }
   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         cout<<A[j][i]<<endl;
      }
      cout<<endl;
      
   }
   

}