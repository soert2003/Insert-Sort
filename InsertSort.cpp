#include <iostream>
#include <cstdio>

using namespace std;

void printArray(int a[], int length)
{
	for (int i = 0; i < length; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}


//Insert sort
void InsertSort(int a[], int length)
{
	int i = 1;
	int j = 0;
	int v = 0;
	for (; i < length; i++) {
		v = a[i];
		j = i - 1;
		while (j >= 0 && a[j] > v) {
			a[j + 1] = a[j];
			j--;
		}
		a[j+1] = v;
		printArray(a, length);
	}
}

int main(void)
{
	int length = 0;
	cin >> length;
	int* arr = new int[length];
	for (int i = 0; i < length; i++) {
		cin >> arr[i];
	}
	InsertSort(arr, length);
	cin.get();
	return 0;
}