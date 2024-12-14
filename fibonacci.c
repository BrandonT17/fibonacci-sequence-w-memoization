#include <stdio.h> 
#include <stdlib.h>

// f(n) = f(n-1) + f(n-2) for n > 1

#define MAX_SIZE 1000
int memo[MAX_SIZE];

int fibonacci(int n) {
	if (n == 0) {
		return 0;
	}
	if (n == 1) {
		return 1;
	}
	if (memo[n] != -1) {
		return memo[n];
	}
	memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
	return memo[n];
}

int main() {

	// initialize memoization array
	for (int i = 0; i < MAX_SIZE; i++) {
		memo[i] = -1;
	}

	int n = 0;
	printf("Hello World\n");
	printf("Enter a number (n): ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		printf("%d ", i);
	}

	return 0;
}
