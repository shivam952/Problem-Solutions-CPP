//This code is written by Shammi Anand
#include<bits/stdc++.h>
using namespace std;

#define ll             	long long
#define Max(a,b,c)		max(a,max(b,c))
#define pb              push_back
#define mp              make_pair
#define mod             1000000007
#define nl				"\n"
#define w(x)            int x; cin>>x; while(x--)

void shammi() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
int main() {
	shammi();
	w(t) {
		string a = "", b; cin >> b;
		int n = b.length();
		a += b[0];
		if (b.length() <= 2) {
			cout << b << nl;
			continue;
		} else {
			for (int i = 1; i < n - 1; i += 2) {
				a += b[i];
			}
			a += b[n - 1];
			cout << a << nl;
		}
	}
	return 0;
}