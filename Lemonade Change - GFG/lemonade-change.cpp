//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool lemonadeChange(int N, vector<int> &bills) {
        
//         stack<int> st5,st10;
// for(auto i :bills)
// {
// if(i==5) st5.push(5);
// else if(i==10)
// {
// if(st5.empty())return false;
// else{
// st5.pop();
// st10.push(10);
// }
// }
// else{
// if(st10.empty())
// {
// if(st5.size()<3) return false;
// else{
// st5.pop();st5.pop();st5.pop();
// }
// }
// else{
// st10.pop();
// if(st5.empty()) return false;
// else{
// st5.pop();
//     }
// }
// }
// return true;
// }
int five=0,ten=0;
        for(int i=0;i<bills.size();i++){
            if(bills[i] ==5) five++;
           else if(bills[i] ==10){
                if(five>0){five--;ten++;}
               else return 0;
            }
            else {
                if(five>0 && ten>0){
                    five--;ten--;
                    }
                   else if(five>=3){five-=3;}
                   else return 0;
                }
            
        }
        return 1;    
    
}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> bills(N);
        for (int i = 0; i < N; i++) cin >> bills[i];

        Solution obj;
        int ans = obj.lemonadeChange(N, bills);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends