
#include <catch.hpp>

#include "OptimizedBubbleSort.h"




TEST_CASE() {
	int N = 5;
	bool flag = 1;
	int Array[5] = { 1, 6,3,5,8 };
	OpBubbleSort(N, Array);
	for (int i = 0; i < N - 1; i++) {
		if (Array[i] > Array[i + 1]) {
			flag = 0;
		}
	}
	REQUIRE(flag);
	flag = 1;
	Array[5];
	OpBubbleSort(N, Array);
	for (int i = 0; i < N - 1; i++) {
		if (Array[i] > Array[i + 1]) {
			flag = 0;
		}
	}
	REQUIRE(flag);
	flag = 1;
	double arr[5] = { -5, 4.2, 8, 3.8, -10 };
	OpBubbleSort(N, arr);
	for (int i = 0; i < N - 1; i++) {
		if (Array[i] > Array[i + 1]) {
			flag = 0;
		}
	}
	REQUIRE(flag);
}