
template<typename type> void SelectionSort(int N, type* Array) {
 
    int min = 0;

    for (int i = 0; i < N; i++) {
        min = i;
        for (int j = i; j < N; j++) {
            if (Array[j] < Array[min]) {
                min = j;
            }
        }
        type time = Array[i];
        Array[i] = Array[min];
        Array[min] = time;
    }
}
