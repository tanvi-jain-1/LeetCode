//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
    

    //   int hash[n+1]={0};
      
    //   for(int i =0;i<n;i++)
    //   {
    //       hash[arr[i]]+=1;
    //   }
    //   for(int i=1;i<=n;i++)
    //   {
    //       if(hash[i]==0) {
    //   return i;
    //   break;
    //       }
    //   }
//     Easy C++ Solution using Hashing :
// Explanation : Better Solution
// 1.) First we will sort the array in order to find the maximum positive number in the array(in case when all the array elements are negative or zero , then answer will be 1).

// 2.) Now make a variable num which is just greater than the last element of sorted array(max positive number).

// 3.) Now we will iterate through the array and mark the first positive number as start .

// 4.) Make a hash array of size num+1 which will store all the elements as index from 0 to num .

// 5.) Iterate through array from start to last element and mark each of them as 1 . 

// 6.) Now we will iterate from 1 to num in hash array and check if  which number is marked 0 and return it.

// CODE:
       
      sort(arr , arr + n);
        
        if(arr[n-1] <= 0){
            return 1 ;
            
        }
  
        int num = arr[n-1] + 1 ;    // -20  -10   0   1   3
        int start , ans ;
        
        for(int i = 0; i<n ; i++){
            if(arr[i]>0){
               start = i ;
               break;
            }
        }
        
        int hash[num + 1] = {0};
        
        for(int i = start; i<n; i++){
            hash[arr[i]] += 1;
        }
        
        for(int i = 1 ; i<=num ; i++){
            if(hash[i] == 0){
                return i;
                break;
            }
        }
    } 
   
};

//{ Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
} 
// } Driver Code Ends