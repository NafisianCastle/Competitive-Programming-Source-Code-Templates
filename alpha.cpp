#include <bits/stdc++.h>
using namespace std;
#define int long long
#define nl '\n'
#define mp make_pair
#define pb  push_back
#define all(x) (x).begin(), (x).end()
#define dbg(x) cout << (#x) << " is " << (x) << nl;
#define MAX 200005

void solve(int testcase) {
	string a, b;
	cin >> a >> b;
	int n = min(a.length(), b.length());
	for (int i = 0; i < n; i++) {
		if (a[i] < b[i]) {
			cout << "Yes" << nl;
			return;
		} else if (a[i] > b[i]) {
			cout << "No" << nl;
			return;
		}
	}
	if (a.length() == b.length())cout << "No" << nl;
	else cout << "Yes" << nl;
}
int32_t main() {
	ios_base::sync_with_stdio(0), cin.tie(0);
	int x = 1;
	//cin >> x;
	for (int i = 1; i <= x; i++) solve(i);
	return 0;
}
