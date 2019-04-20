#include<stdio.h>
#include<stdlib.h>
int BinarySearch(int arr[], int size, int to_find) {
	int left = 0;
	int right = size - 1;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (to_find < arr[mid]) {
			right = mid - 1;
		}
		else if (to_find > arr[mid]) {
			left = mid + 1;
		}
		else {
			return mid;
		}
	}
	return -1;
}
int main() {
	int arr[4] = { 1,2,3,4 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int ret = BinarySearch(arr, size, 3);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
