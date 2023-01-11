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
			L.insert(t, c2); //t�ڸ��� ���� ���ڸ� �����ϴ� ���̶� t�� �״�� ���� ���ڸ� ����Ű�� ��ó�� ��
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