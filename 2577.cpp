#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;

	int n = a * b * c;
	int i = 0;
	int arr[10] = {};
	int x = 1;

	while (n / x != 0) {
		x = pow(10, i + 1);
		int y = pow(10, i);
		int z = (n % x) / y;
		arr[z]++;
		i++;
	}
	
	for (int j = 0; j < 10; j++) {
		cout << arr[j] << "\n";
	}
}