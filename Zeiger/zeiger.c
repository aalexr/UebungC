#include <stdio.h>

void swap(int* a, int* b) {
	int t = *a;
	*a = *b;
	*b = t;
}

/*
* TODO
* Diese Funktion nimmt ein Array, seine Länge, einen Wert und einen Zeiger.
* Sie muss im Array den Wert finden und ihn mit 0 ersetzen.
* Der Variable auf dem Zeiger muss der Index des ersetzten Wertes zugewiesen.
* Sie muss 0 zurückgeben, wenn den Wert gefunden wurde. Falls nicht, dann return 1.
*/
int replace_and_get_index(int* arr, int length, int value, int* index) {
	return 1;
}

/*
* TODO
* Diese Funktion nimmt ein Array, seine Länge, einen Wert.
* Sie muss im Array all die Werte finden und sie mit 0 ersetzen.
* Sie muss replace_and_get_index verwenden.
* Sie muss die Anzahl der ersetzen Werten zurückgeben.
* Sie muss 0 zurückgeben, wenn keine Werte gefunden wurde.
*/
int replace_all(int* arr, int length, int value) {
	int offset = 0;
	while (0) {
		;
	}

	return -1;
}

/*
* TODO
* Diese Funktion nimmt ein Array, seine Länge, einen Zeiger auf Funktion.
* Sie muss mit der Funktion die neue Werte zuweisen.
*/
void map_inplace(int* arr, int length, int (*func)(int)) {
	;
}

// https://de.wikipedia.org/wiki/Zeiger_(Informatik)
// Der Zeiger referenziert (verweist, zeigt auf) einen Ort im Hauptspeicher des Computers.
// Hier können Variablen, Objekte oder Programmanweisungen gespeichert sein.

int plusTwo(int x) {
	return x + 2;
}

static void printf_array(int* arr, int len) {
	for (int i = 0; i < len; ++i) {
		printf("%i ", arr[i]);
	}
	printf("\r\n");
}

int main() {
	int x = 7;
	// int* - Typ, Zeiger auf int. Hier ist '*' ein Typmodifikator. '*' macht aus einem Typ
	// einen Zeiger darauf
	// & liefert die Addresse von der Variable
	int* p_x = &x;
	
	printf("x = %i, die Addresse von x = 0x%p\r\n", x, p_x);
	// Das Erlangen der dort hinterlegten Daten wird als dereferenzieren oder rückverweisen bezeichnet.
	// Operator * ist Inhalts-Operator, der dereferenziert/rückverweist/die Daten zugreift
	printf("x durch die Addresse = %i\r\n", *p_x);

	// ändern durch die Addresse
	*p_x = 77;
	printf("geänderte x durch die Addresse = %i\r\n", *p_x);

	// Zeigerarithmetik
	printf("sizeof(int) = %llu\r\n", sizeof(int));
	printf("die Addresse von x = 0x%p, x + 1 = 0x%p\r\n", p_x, p_x + 1);
	printf("die Addresse von x = 0x%p, x - 1 = 0x%p\r\n", p_x, p_x - 1);

	int m[10] = { 0, 9, 2, 3, 9, 5, 6, 7, 8, 9 };
	int* p = &m[0]; // Addresse des ersten Elements
	int* q = &m[9]; // Addresse des letzten Elements

	// ADDRESSES ... | 0x0 | 0x4 | 0x8 | 0xC | 0x10| 0x14| 0x18| 0x1C| 0x20| 0x24| ...
	// ADDRESSES ... |  p  |     | p+3 |     | p+5 |     | q-3 |     |     |  q  | ...
	// VALUES    ... |  1  |  9  |  3  |  4  |  9  |  6  |  7  |  8  |  9  |  10 | ...

	printf("&m[0] = 0x%p\r\n", p);
	printf("&m[3] = 0x%p\r\n", p + 3);
	printf("&m[7] = 0x%p\r\n", q - 3);

	printf("*(p + 5) = %i\r\n", *(p + 5));
	printf("m[5] = %i\r\n", m[5]);

	printf_array(m, 10);
	swap(p, q);
	printf_array(m, 10);

	replace_all(m, 10, 9);
	printf_array(m, 10);

	// Zeiger auf Funktion
	// return_typ (*name)(arg1_typ, ...)
	int (*fn_ptr)(int);
	fn_ptr = plusTwo;
	printf("Addresse von plusTwo = 0x%p\r\n", fn_ptr);

	map_inplace(m, 10, fn_ptr);
	printf_array(m, 10);

	return 0;
}