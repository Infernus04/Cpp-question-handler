//Checking palindrome

#include <iostream>
using namespace std;

int main (){
   int n;
   cout<<"Enter no. of characters in your array"<<endl;
   cin>>n;  

   cout<<"Enter the word"<<endl;
   char arr[n + 1];
   cin>>arr;

   bool check =true ;

   for (int i = 0; i < n; i++)
   {
      if (arr[i] != arr[n - 1 - i ])
      {
         check = 0;
         break;
      }

   }

   if (check == true)
   {
      cout<<"Word is a palindrome"<<endl;
   }
   else
   {
      cout<<"Word is not palindrome"<<endl;
   }
   
   return 0;
   

}