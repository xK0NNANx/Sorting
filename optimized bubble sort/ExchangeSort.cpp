

template<typename type> void ExchangeSort(int N, type* Array) {

	type time;

	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (Array[i] > Array[j]) {
				time = Array[i];
				Array[i] = Array[j];
				Array[j] = time;
			}
		}
	}
}