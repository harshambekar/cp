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
        ll n,k;
        cin>>n>>k;

        vi v;
        bool flag=true;
        f(i,0,n){
            int a;
            cin>>a;
            v.push_back(a);
        }

        asort(v);
        set<ll> s;
        f(i,0,n){
                    if(s.find(v[i]-k) != s.end())   
        {
            flag=false;
            p("YES");
          
        }
        s.insert(v[i]);

        }
        if(flag==false){
             p("NO");

        }
       
              
              
              
    }
    return 0;
}