//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
long long factorial(long long N)
{
    if(N==0) return 0;
    if(N==1) return 1;
    return N*factorial(N-1);
}
vector<long long>ans;
long long num=1;
    vector<long long> factorialNumbers(long long N)
    {
        long long fac=factorial(num);
        if(fac>N) return ans;
        ans.push_back(fac);
        num++;
        factorialNumbers(N);
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin>>N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for(auto num : ans){
            cout<<num<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
// } Driver Code Ends