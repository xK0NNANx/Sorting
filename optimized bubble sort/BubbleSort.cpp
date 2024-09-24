
template<typename type> void BubbleSort(int N, type* Array) {
	type time;
	for (int j = N; j > 0; j--) {
		for (int i = 0; i < j - 1; i++) {
			if (Array[i] > Array[i + 1]) {
				time = Array[i];
				Array[i] = Array[i + 1];
				Array[i + 1] = time;
			}

		}
	}
}
