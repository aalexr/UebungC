/*
* Diese Funktion nimmt ein Array, seine Länge, einen Wert und einen Zeiger.
* Sie muss im Array den Wert finden und ihn mit 0 ersetzen.
* Der Variable auf dem Zeiger muss der Index des ersetzten Wertes zugewiesen.
*/
int replace_and_get_index1(int* arr, int length, int value, int* index) {
	for (int i = 0; i < length; ++i) {
		if (arr[i] == value) {
			arr[i] = 0;
			*index = i;
			return 0;
		}
	}

	return 1;
}

int replace_all1(int* arr, int length, int value) {
	int offset = 0, count = 0;
	while (count += replace_and_get_index(arr + offset, length - offset, value, &offset)) {
		;
	}

	return count;
}

void map_inplace1(int* arr, int length, int (*func)(int)) {
	for (int i = 0; i < length; ++i) {
		arr[i] = func(arr[i]);
	}
}