//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    int remove_duplicate(int arr[],int n){
        // code here
        // int arr[n];
        // int cnt=0;
        // for(int i=0;i<n-1;i++)
        // {
        //     if(a[i]==a[i+1]){
        //         cnt++;
        //     }
            
        // }
        // if(cnt==1)
        // {
        //     for(int i=0;i<n-1;i++)
        //     {
        //     a[i]=arr[i];
        //     }
        // }
        set<int>set;
        for(int i=0;i<n;i++)
        {
            set.insert(arr[i]);
        }
        int index=0;
        for(int x:set)
        {
         arr[index++]=x;
        
        }
        return index;
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