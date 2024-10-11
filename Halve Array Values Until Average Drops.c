#include <stdio.h>

void arrayDividieren(double arr[], int count, int parameter) {

	while (1) {

		double sum = 0.0;

		for (int i = 0; i < count; i++) {
			sum += arr[i];
		}

		double average = sum / count;

		if (average < parameter) {
			printf("End. The average is smaller than the given parameter. \n");
			printf("\n");
			break;
		}

		printf("The results are: \n");

		for (int i = 0; i < count; i++) {
			arr[i] /= 2;
			printf("%.2lf ", arr[i]);
		}

		printf("\n");
	}
}

void printResult(double arr[], int count){

	printf("The final values: ");

	for (int i = 0; i < count; i++) {
		printf("%.2lf ", arr[i]);
	}

	printf("\n");
}

int main() {

	int count, parameter;
	double arr[100];

	printf("Number of values: ");
	scanf_s("%d", &count);


	while (count > 100 || count < 0) {

		printf("Please enter a correct value: ");
		scanf_s("%d", &count);
	}


	for (int i = 0; i < count; i++) {

		printf("All values: ");
		scanf_s("%lf", &arr[i]);

	}

	printf("Value for parameter: ");
	scanf_s("%d", &parameter);
	printf("\n");

	arrayDividieren(arr, count, parameter);
	printResult(arr, count);


	return 0;
}
