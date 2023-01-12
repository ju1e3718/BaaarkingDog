#include<bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s1, s2;
	cin >> s1 >> s2;
	int freq[26] = {};
	for (auto c : s1)
		freq[c - 'a']++;
	for (auto c : s2)
		freq[c - 'a']--;
	int cnt = 0;
	for (int i = 0; i < 26; i++) {
		if (freq[i] > 0)
			cnt += freq[i];
		else
			cnt -= freq[i];
	}
	cout << cnt;
}
