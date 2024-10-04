#include <stdio.h>

void arrayDividieren(double arr[], int anzahl, int parameter) {

	while (1) {

		double summe = 0.0;

		for (int i = 0; i < anzahl; i++) {
			summe += arr[i];
		}

		double durchschnitt = summe / anzahl;

		if (durchschnitt < parameter) {
			printf("Ende.Mittelwert ist kleiner als der gegebene Parameter. \n");
			printf("\n");
			break;
		}

		printf("Die Ergebnisse sind: \n");

		for (int i = 0; i < anzahl; i++) {
			arr[i] /= 2;
			printf("%.2lf ", arr[i]);
		}

		printf("\n");
	}
}

void printResult(double arr[], int anzahl){

	printf("Die endlichen Werte: ");

	for (int i = 0; i < anzahl; i++) {
		printf("%.2lf ", arr[i]);
	}

	printf("\n");
}

int main() {

	int anzahl, parameter;
	double arr[100];

	printf("Anzahl der Werte: ");
	scanf_s("%d", &anzahl);


	while (anzahl > 100 || anzahl < 0) {

		printf("Bitte geben Sie einen korrekten Wert: ");
		scanf_s("%d", &anzahl);
	}


	for (int i = 0; i < anzahl; i++) {

		printf("Alle Werte: ");
		scanf_s("%lf", &arr[i]);

	}

	printf("Value for parameter: ");
	scanf_s("%d", &parameter);
	printf("\n");

	arrayDividieren(arr, anzahl, parameter);
	printResult(arr, anzahl);


	return 0;
}
