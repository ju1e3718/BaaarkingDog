#include<iostream>
using namespace std;

int arr[1000001];
int freq[2000001];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, x;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cin >> x;

	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (x - arr[i] > 0) {
			if (freq[arr[i]] != 0)
				cnt++;
			freq[x - arr[i]]++;
		}
	}
	cout << cnt;
}
