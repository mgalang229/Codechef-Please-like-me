#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long l, d, s, c;
		cin >> l >> d >> s >> c;
		long long total_likes = s;
		for (int i = 2; i <= d; i++) {
			// calculate the total likes per day based on the formula
			// from the problem statement
			total_likes = total_likes + (c * total_likes);
			if (total_likes >= l) {
				// if 'total_likes' is greater than or equal to 'l', then
				// break the loop so it doesn't receive "TIME LIMIT EXCEEDED" error
				break;
			}
		}
		// check if 'total_likes' is greater than or equal to 'l'
		cout << (total_likes >= l ? "ALIVE AND KICKING" : "DEAD AND ROTTING") << '\n';
	}
	return 0;
}
