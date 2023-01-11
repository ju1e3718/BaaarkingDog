#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int arr[10] = {};
	
	while (n > 0) {
		if (n % 10 == 6)
			arr[9]++;
		else
			arr[n % 10]++;
		n /= 10;
	}
	int max = 0;
	for (int i = 0; i < 9; i++) {
		if (arr[i] > max)
			max = arr[i];
	}
	arr[9] = arr[9] / 2 + arr[9] % 2;
	if (arr[9] > max)
		max = arr[9];

	cout << max;
}