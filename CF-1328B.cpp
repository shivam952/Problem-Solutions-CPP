//This code is written by Shammi Anand
#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define pb              push_back
#define mp              make_pair
#define f               first
#define s               second
#define mod             1000000007
#define INF             1e9+7
#define nl              "\n"
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
		int n, k;
		cin >> n >> k;
		string s(n, 'a');
		for (int i = n - 2; i >= 0; i--) {
			if (k <= (n - i - 1)) {
				s[i] = 'b';
				s[n - k] = 'b';
				cout << s << endl;
				break;
			}
			k -= (n - i - 1);
		}
	}
	return 0;
}