/*
 * calc_lib.c - helper math functions used by the stack calculator
 * (Collatz sequence, Fibonacci, and related utilities).
 */

#include "calc_lib.h"

int next_collatz_number(int n) {
	if (n % 2 == 0) {
		return n/2;
 } else {
	return 3 * n + 1;
 }
}

int count_collatz_steps(int n) {
  int steps = 0;
	  while (n != 1) {
		  n = next_collatz_number(n);
		  steps++;
	  }
	return steps;
} 

int maximum(int *nums, int len) {
	if (len == 0) return 0 ;
	int max_val = nums[ 0 ] ;
	for (int i = 1 ; i < len ; i++ ) {
		if (nums[i] > max_val) { 
			max_val = nums[ i];
			}
		}
		return max_val;
}

int sum_positive(int *nums, int len) {
	int sum = 0;
	for (int i=0; i < len; i++) { 
		if (nums[i] > 0) { 
			sum += nums[i];
		  }
	  }
          return sum;
} 

int count_negative(int *nums, int len) {
	int count = 0;
	for (int i = 0; i < len; i++) { 
		if (nums[i] < 0) { 
			count++;
		} 
	}
        return count;
}

