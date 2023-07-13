//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        //Brute
        
        //SOLUTION-1
        // sort(arr.begin(),arr.end());
        // int last=arr[n-1];
        // return last;
        
        //TC->O(NlogN),can use any sorting alogorithm 
        // merge sort and quick sort the time complexity is O(NlogN)
        //SC->O(1)
        
        //There is no better solution 
        //Optimal 
        //SOLUTION-2
        int largest=arr[0];
        for(int i=1;i<n;i++)
        {
            if(arr[i]>largest)
            {
                largest=arr[i];
            }
        }
        return largest;
        
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int>arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        cout << ob.largest(arr, n) << "\n";
    }
    return 0;
}

// } Driver Code Ends