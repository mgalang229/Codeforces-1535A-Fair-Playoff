#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		vector<int> s(4);
		for (int i = 0; i < 4; i++) {
			cin >> s[i];
		}
		// find the highest element
		int highest1 = *max_element(s.begin(), s.end());
		int highest2 = INT_MIN;
		for (int i = 0; i < 4; i++) {
			if (s[i] != highest1) {
				// find the second highest element
				highest2 = max(highest2, s[i]);
			}
		}
		// check if the two highest elements are in the same bracket
		if ((s[0] + s[1] == highest1 + highest2) || (s[2] + s[3] == highest1 + highest2)) {
			// if it's true, then print NO
			cout << "NO";
		} else {
			// otherwise, YES
			cout << "YES";
		}
		cout << '\n';
	}
	return 0;
}
