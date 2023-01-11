#include<iostream>
#include<list>
using namespace std;

int main(void) {
	list<char>L;
	string s;
	cin >> s;
	for (auto c : s) L.push_back(c);
	auto t = L.end();
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		char c1, c2;
		cin >> c1;
		if (c1 == 'P') {
			cin >> c2;
			L.insert(t, c2); //t자리에 새로 문자를 삽입하는 것이라서 t는 그대로 다음 문자를 가리키는 것처럼 됨
			/*if (t != L.end())
				t++;*/
		}
		else if (c1 == 'L') {
			if (t != L.begin())
				t--;
		}
		else if (c1 == 'D') {
			if (t != L.end())
				t++;
		}
		else {
			if (t != L.begin()) {
				t--;
				t = L.erase(t);
			}
		}
	}
	for (auto i : L)
		cout << i;
}