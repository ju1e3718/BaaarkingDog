#include<iostream>
#include<list>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	list<int>L;
	for (int i = 1; i < n+1; i++)
		L.push_back(i);
	cout << '<';
	auto t = L.begin();
	while (n) {
		for (int i = 0; i < k-1; i++) {
			t++;
			if (t == L.end()) {
				t = L.begin();
			}
			else
				continue;
		}
		cout << *t;
		t = L.erase(t);
		if (t == L.end()) {
			t = L.begin();
		}
		n--;
		if (n)
			cout << ", ";
	}
	cout << '>';
}