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
//freq��� �迭�� �ϳ� ���� freq[c-'a']++; �䷱������ �÷��ְ�
//freq�� ����ϸ� ��
//��, �ѹ����� ���� �ȴٴ� ��