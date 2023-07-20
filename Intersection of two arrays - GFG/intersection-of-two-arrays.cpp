//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        // Your code goes here
        sort(a,a+n);
        sort(b,b+m);
        int i=0;
        int j=0;
        set<int>ans;
        while(i<n && j<m )
        {
            if(a[i]<b[j])
            {
                i++;
            }
            else if(b[j]<a[i])
            {
                j++;
            }
            else{
                ans.insert(a[i]);
                i++;
                j++;
            }
        }
        return ans.size();
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < m; i++) cin >> b[i];
        Solution ob;
        cout << ob.NumberofElementsInIntersection(a, b, n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends