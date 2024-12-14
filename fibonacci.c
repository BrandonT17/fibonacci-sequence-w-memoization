#include <stdio.h> 
#include <stdlib.h>

// f(n) = f(n-1) + f(n-2) for n > 1 : FIBONACCI SEQUENCE FORMULA 

#define MAX_SIZE 1000
int memo[MAX_SIZE]; // memoization array

int fibonacci(int n) {
	// base cases
	if (n == 0) { 
		return 0;
	}
	if (n == 1) {
		return 1;
	}
	// return values that were already calculated 
	if (memo[n] != -1) {
		return memo[n];
	}
	// recursive calls 
	memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
	return memo[n];
}

int main() {
	// initialize memoization array with -1 as a placeholder for "empty" spots 
	for (int i = 0; i < MAX_SIZE; i++) {
		memo[i] = -1;
	}

	int n = 0;
	printf("Enter a number (n): ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		printf("%d ", i);
	}

	return 0;
}
