#include<iostream>
#include<list>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	while(n) {
		list<char> L;
		auto t = L.begin();
		string s;
		cin >> s;
		for (int i = 0; s[i]; i++) {
			if (s[i] == '<') {
				if (t != L.begin())
					t--;
			}
			else if (s[i] == '>') {
				if (t != L.end())
					t++;
			}
			else if (s[i] == '-') {
				if (t != L.begin()) {
					t--;
					t = L.erase(t);
				}
			}
			else {
				L.insert(t, s[i]);
				//t++ Àü ¹®Á¦¶û ¶È°°Àº°Å;
			}
		}
		for (auto i : L)
			cout << i;
		cout << '\n';
		n--;
	}
	return 0;
}
