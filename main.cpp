// Below is an example of C++ code that prints the sum of subarray of the given array

#include <iostream>

using namespace std;

int main(){

   int n;
   cout<<"Enter the number of elements for an array"<<endl;
   cin >> n;

   cout<<"Enter the elements :"<<endl;

   int arr[n];
   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }
   
   int sum = 0;
   for (int i = 0; i < n; i++)
   {
      sum = 0;
      for (int j = i; j < n ; j++)
      {
         sum += arr[j];
         cout<<sum<<endl;
      };
      
   };
   
  
  
   return 0;
}