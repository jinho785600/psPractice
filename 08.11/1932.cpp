#include <iostream>

using namespace std;

int main(void) {
	int arr[1000];
	int n;
	cin >> n;
	arr[0] = 1;
	arr[1] = 2;
	for (int i = 2; i < n; i++) {
		arr[i] = arr[i - 1] + arr[i - 2]%10007;
	}
	cout << arr[n - 1];
}