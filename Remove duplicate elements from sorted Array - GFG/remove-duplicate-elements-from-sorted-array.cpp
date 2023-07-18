//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    int remove_duplicate(int arr[],int n){
       //BRUTE --------------------------->TC : O(N)+O(NlogN)
        // set<int>set;
        // for(int i=0;i<n;i++)
        // {
        //     set.insert(arr[i]);//----------------->O(NlongN)
        // }
        // int index=0;
        // for(int x:set)
        // {
        //  arr[index]=x;
        // index++;
        // }
        // return index;
        
        //OPTIMAL --------------->2 pointer 
        int i=0;
        for(int j=1;j<n;j++)
        {
            if(arr[j]!=arr[i])
            {
                arr[i+1]=arr[j];
                i++;
            }
        }
        return i+1;
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    Solution ob;
    int n = ob.remove_duplicate(a,N);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}
// } Driver Code Ends