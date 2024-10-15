/*
@author: soert2003
@date: 2024-10-15
*/

#include <iostream>

using namespace std;

void printArray(int a[], int N) {
	for (int i = 0; i < N; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

void bubbleSort(int a[], int n, int& cnt) {
	int i = 0, j = 0;
	for (; i < n - 1; i++) {
		for (j = n - 1; j > i; j--) {
			if (a[j] < a[j - 1]) {
				int temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
				cnt++;
			}
		}
	}
}

int main(void) {
	int length = 0, count = 0;
	cin >> length;
	int* arr = new int[length];
	for (int i = 0; i < length; i++)
		cin >> arr[i];
	bubbleSort(arr, length, count);
	printArray(arr, length);
	cout << count << endl;
	cin.get();
	return 0;
}
