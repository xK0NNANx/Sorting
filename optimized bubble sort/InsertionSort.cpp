
template<typename type> void InsertionSort(int N, type* Array) {
	
	int k = 0;

	for (int i = 1; i < N; i++) {
		type key = Array[i];
		int j = i - 1;
		while (j >= 0 && Array[j] > key) {
			Array[j + 1] = Array[j];
			--j;
		}
		Array[j + 1] = key;
	}
}