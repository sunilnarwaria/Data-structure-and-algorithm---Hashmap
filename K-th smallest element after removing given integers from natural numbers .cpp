
#include <bits/stdc++.h> 
using namespace std; 
 
int ksmallest(int arr[], int n, int k) 
{ 
    for (int i = 0; i < n; i++) { 
        if (arr[i] <= k) 
            k++; 
        else
            break; 
    } 
    return k; 
} 
  

int main() 
{ 
    int k = 1; 
    int arr[] = { 1 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << ksmallest(arr, n, k); 
    return 0; 
} 
