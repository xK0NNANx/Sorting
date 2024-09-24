
#include <catch.hpp>

#include "ExchangeSort.h"



TEST_CASE() {
	int N = 5;
	bool flag = 1;
	int Array[5] = { 1, 6,3,5,8 };
	ExchangeSort(N, Array);
	for (int i = 0; i < N - 1; i++) {
		if (Array[i] > Array[i + 1]) {
			flag = 0;
		}
	}
	REQUIRE(flag);
	Array[5];
	flag = 1;
	ExchangeSort(N, Array);
	for (int i = 0; i < N - 1; i++) {
		if (Array[i] > Array[i + 1]) {
			flag = 0;
		}
	}
	REQUIRE(flag);
	double arr[5] = { -5, 4.2, 8, 3.8, -10 };
	flag = 1;
	ExchangeSort(N, arr);
	for (int i = 0; i < N - 1; i++) {
		if (Array[i] > Array[i + 1]) {
			flag = 0;
		}
	}
	REQUIRE(flag);
}