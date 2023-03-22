#include <stdio.h>

void swap(int data[], int n) {
	
	int a;
	int b;
	int t;
	int dataSwap[n];
	
	for (a = 0; a < n; a++) {
		dataSwap[a] = 0;
	}
	
	for (a = 0; a < n - 1; a++) {
	for (b = 0; b < n - a - 1; b++) {
		
		if (data[b] > data[b + 1]) {
			t = data[b];
			data[b] = data[b + 1];
			data[b + 1] = t;
			dataSwap[b]++;
		}
	}
}


printf("Array: {97, 16, 45, 63, 13, 22, 7, 58, 72} \n");
	
	for (a = 0; a < n; a++) {
		
		printf("Iteration #%d: %d\n", a, dataSwap[a]);
	}

	
	}


int main() {
	
	int data[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
	int n = sizeof(data) / sizeof(data[0]);
	
	swap(data, n);
	
}
