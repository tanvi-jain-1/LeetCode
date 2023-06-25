//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){
        int k=N;
        if(k==0)
        {
            return 1;
        }
        int count=0;
        while(k>0)
        {
            int last_num=k%10;
            if(last_num>0 && N%last_num==0)
            {
                count++;
            }
            
            k=k/10;
            
        }
        return count;
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends