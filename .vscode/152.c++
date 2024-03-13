//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxLength(string S){
        int res=0;
        stack<char> a;
        a.push(S[0]);
        for(int i=1;i<S.length();i++){
            
            
            if(a.top()=='(' && S[i]==')'){
                res=res+2;
                a.pop();
            }
            else{
                a.push(S[i]);
            }
            
        }
        
        return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.maxLength(S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends