//Below is an example of C++ code that sort the array by selection sort

#include<iostream>

using namespace std;

int main(){
    
    int n ;
    cout<<"Enter the number of elements in your array"<<endl;
    cin >> n;

    cout<<"Enter the numbers"<<endl;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j< n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
            
        }
        
    }

    cout<<"Sorted array is : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<arr[i];
    }
    
    
        
    

    
    return 0;
}