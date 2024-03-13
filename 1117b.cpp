#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int,int>
#define vi vector<int>
#define spc <<' '<<
#define asort(v) sort(v.begin(), v.end())
#define dsort(v) sort(v.rbegin(), v.rend())
#define f(i, a, b) for(ll i = a; i < b; i++)
#define p(a) cout<<a<<endl;
#define st string
#define size(s) s.size()
const ll mod=1e9 + 7;
              
              
int gcd(int a, int b)
{
    int result = min(a, b);
    while (result > 0) {
       if (a % result == 0 && b % result == 0) {
            break;
            }
        result--;
    }
    return result;
}
              
              
/***********************************************START**********************************************************/
              
              
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        st s,s1;
        cin>>s>>s1;

        int b=0,c=0;
        f(i,0,a){
            if(s[i]==s1[i] && s[i]=='1'){
                continue;
            }

            else
            {if(s[i]=='1'){
                b++;
            }
            if(s1[i]=='1'){

                b--;
            }
            }

             

        }
        
       

        p(b);
              
              
              
    }
    return 0;
}