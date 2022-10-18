# include<stdio.h>

int binarySearch(int a[], int n, int key) {
	int left = 0, right = n - 1, mid;

	while (left <= right) {
		mid = (left + right) / 2;
		if (key == a[mid])
			return mid; // 어떤 함수든지 간에 return을 만나면 함수 종료가 된다
		else if (key > a[mid])
			left = mid + 1; // key값이 크면 left값이 이동
		else 
			right = mid - 1; // key값이 작으면 right값이 이동
	}
}

int main(void) {
	int a[] = { 3, 7, 10, 12, 14, 18, 21, 33, 35, 48 };
	int n = sizeof(a) / sizeof(int);
	int index, key = 21;

	index = binarySearch(a, n, key);

	if (index >= 0)
		printf("%d을(를) %d에서 찾음!\n", key, index);
	else
		printf("찾고자 하는 Data가 없음!\n");
	return 0;
}