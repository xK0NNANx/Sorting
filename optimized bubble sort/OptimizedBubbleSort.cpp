

template<typename Type> void OpBubbleSort(int N, Type* Array)
{
	bool flag = 1;
	Type time;
	int j;
	int k;
	int i;
	while (flag == 1) {
		flag = 0;
		for (j = N; j > 0; j--) {
			i = 0;
			k = 1;
			while (i < j - 1 && k < j) {
				if (Array[i] > Array[i + 1]) {
					time = Array[i];
					Array[i] = Array[k];
					Array[k] = time;
					flag = 1;
				}
				i++;
				k++;
			}
		}

	}
}
