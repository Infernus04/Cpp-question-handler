// Below is an example of C++ code that prints the Floyd's triangle

#include <iostream>

using namespace std;

int main()
{
  int n;
  cout<<"Enter the number of rows : "<<endl;
  cin>>n;

  cout<<"Floyd's triangle for given number of rows is"<<endl;

  int count = 1;
  
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout<<count<<" ";
      count++;
    }

    cout<<endl;
    
  }
  
  
  
   return 0;
}