#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	int len = s.size();
	int cnt = 0;
	for (int i = 'a'; i <= 'z'; i++) {
		for (int j = 0; j < len; j++) {
			if (s[j] == i)
				cnt++;
		}
		cout << cnt << ' ';
		cnt = 0;
	}
}
//freq라는 배열을 하나 만들어서 freq[c-'a']++; 요런식으로 늘려주고
//freq를 출력하면 됨
//즉, 한번씩만 돌면 된다는 뜻