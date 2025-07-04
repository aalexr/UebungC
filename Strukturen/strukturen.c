// Strukturen.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <stdio.h>
#include <math.h>

double segment_length(double x1, double y1, double x2, double y2) {
	return 0.;
}

//struct Name_der_Struktur {
//	...
//} variable_name1, variable_name2;

struct _point {
	double x;
	double y;
};

typedef struct _point point_t;

/* Abschnitt */
typedef struct _segment {
	point_t start;
	point_t end;
} segment_t;

double hoch2(double x) {
	return x * x;
}

int main() {
	point_t p1 = { 1.78, 2. }, p2 = { 7.432, 9.4 };
	segment_t seg = { p1, p2 };
	double dx = p2.x - p1.x, dy = p2.y - p2.x;
	return 0;
}

// Programm ausführen: STRG+F5 oder Menüeintrag "Debuggen" > "Starten ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.
