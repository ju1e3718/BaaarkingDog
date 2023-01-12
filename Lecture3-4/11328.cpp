#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	while (n > 0) {
		string s1, s2;
		cin >> s1 >> s2;
		int freq1[26] = {};
		int freq2[26] = {};
		int result = 1;
		for (int i = 0; i < 1001; i++) {
			if (s1[i] - 'a' >= 0)
				freq1[s1[i] - 'a']++;
			else
				break;
		}
		for (int i = 0; i < 1001; i++) {
			if (s1[i] - 'a' >= 0)
				freq2[s2[i] - 'a']++;
			else
				break;
		}
		for (int i = 0; i < 26; i++) {
			if (freq1[i]) {
				if (freq1[i] != freq2[i]) {
					result = 0;
					break;
				}
			}
			else
				if (freq2[i]) {
					result = 0;
					break;
				}
		}
		if (result)
			cout << "Possible" << "\n";
		else
			cout << "Impossible" << "\n";
		n--;
	}
	return 0;
}
