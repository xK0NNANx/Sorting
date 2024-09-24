#define CATCH_CONFIG_MAIN

#include <catch.hpp>

#include "BubbleSort.h"




TEST_CASE() {
	int N = 5;
	bool flag = 1;
	int Array[5] = { 1, 6,3,6,8 };
	BubbleSort(N, Array);
	for (int i = 0; i < N-1; i++) {
		if (Array[i] > Array[i + 1]) {
			flag = 0;
		}
	}
	REQUIRE(flag);
	Array[5];
	flag = 1;
	BubbleSort(N, Array);
	for (int i = 0; i < N - 1; i++) {
		if (Array[i] > Array[i + 1]) {
			flag = 0;
		}
	}
	REQUIRE(flag);
	flag = 1;
	double arr[5] = {-5, 4.2, 8, 3.8, -10};
	BubbleSort(N, arr);
	for (int i = 0; i < N - 1; i++) {
		if (Array[i] > Array[i + 1]) {
			flag = 0;
		}
	}
	REQUIRE(flag);
}