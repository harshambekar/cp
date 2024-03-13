/* BqhCZr1PlO9OZZgShHXSanaEBSDpRRSeQr+/RpqELDk= */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define spc << ' ' <<
#define asort(v) sort(v.begin(), v.end())
#define dsort(v) sort(v.rbegin(), v.rend())
#define f(i, a, b) for (ll i = a; i < b; i++)
#define p(a) cout << a << endl;
#define st string
#define sz(s) s.size()
#define len(s) s.length()
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;
const ll mod = 1e9 + 7;

ll lcm(ll a, ll b)
{
	ll g = __gcd(a, b);
	return (a * b / g);
}

void vinp(vector<int> &v, int vsize)
{
	f(i, 0, vsize)
	{
		int e;
		cin >> e;
		v.push_back(e);
	}
}

void vout(vector<int> &v, int vsize)
{
	f(i, 0, vsize)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}

/***************************************************Ye+iqoY449glA1XvCWFNZg==*****************************************************/
/* ░░░░░░███████ ]▄▄▄▄▄▄▄▄
	▂▄▅█████████▅▄▃▂
	███████████████████].
	◥⊙▲⊙▲⊙▲⊙▲⊙▲⊙▲⊙◤...*/

void solve()
{
	int a, b, maxi = 0, mini = 0;
	ll c, d;

	bool flag = true;

	string s;
	cin >> s;
	ll n = len(s);

	ll ans = n;

	ll v[n] = {0};
	f(i, 0, n)
	{
		v[i] = 0;
		if (s[i] == '1')
			v[i] = 1;
		if (i != 0)
			v[i] += v[i - 1];
	}
	f(i, 0, n)
	{
		ll d = v[i] + (n - 1 - i) - (v[n - 1] - v[i]);
		ll d1 = i + 1 - v[i] + v[n - 1] - v[i];
		ans = min(ans, min(d, d1));
	}

	ans = min(ans, min(n - v[n - 1], v[n - 1]));
	p(ans);
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}