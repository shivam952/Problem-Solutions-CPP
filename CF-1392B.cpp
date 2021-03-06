//This code is written by Shammi Anand
#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define Max(a,b,c)      max(a,max(b,c))
#define Min(a,b,c)      min(a,min(b,c))
#define pb              push_back
#define mp              make_pair
#define f               first
#define s               second
#define mod             1000000007
#define nl              "\n"
#define w(x)            int x; cin>>x; while(x--)

inline bool isPowerOfTwo(int x) {
	//O(v) -> v is the number of bits in the binary form of x
	return x && (!(x & (x - 1)));
}

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
		ll n, k; cin >> n >> k;
		ll A[n];
		for (int i = 0; i < n; i++) {
			cin >> A[i];
		}
		ll d;
		if (k > 1) {
			k = 2 + (k % 2);
		}
		while (k--) {
			d = -mod;
			for (int i = 0; i < n; i++) d = max(d, A[i]);
			for (int i = 0; i < n; i++) A[i] = d - A[i];
		}
		for (int i = 0; i < n; i++) {
			cout << A[i] << (i + 1 == n ? nl : " ");
		}
	}
	return 0;
}