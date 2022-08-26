//Name:- Pranshu Kumar Soni
//Roll no.:- 2010990540
//Set no.:- 03
//Ques 1.

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;     //Taking the number of elements
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];     //Initializing array
    cout<<"Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        
        cin>>arr[i];    //Taking inputs for array
    }

    sort(arr,arr+n);    //Using in-built function sort()

    for (int i = 0; i < n; i++)
    {
        if (i%2!=0 && i!=n-1)
        {
            swap(arr[i],arr[i+1]);     //Using in-built function swap()
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
 
}