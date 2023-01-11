#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	int grd[1001] = {};
	int s[1001] = {};
	for (int i = 0; i < n; i++) {
		cin >> s[i] >> grd[i];
	}
	int cnt = 0;
	int g[6] = {};
	int b[6] = {};
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < n; j++) {
			if (grd[j] == i + 1) {
				if (s[j] == 0)
					g[i]++;
				else
					b[i]++;
			}
		}
		cnt += (g[i] + k - 1) / k;
		cnt += (b[i] + k - 1) / k;
	}
	cout << cnt;
}