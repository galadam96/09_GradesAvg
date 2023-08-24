/*Date: 2023.06.19
Purpose: Ask the user for 10 grades, and display the sum and average of them*/

#include <stdio.h>

int main() {

	int grades[10];
	int count = 10;
	long sum = 0;
	float average = 0.0f;

	printf("\nEnter the 10 grades:\n");

	for (int i = 0; i < count; ++i) {
		printf("%2u>", i + 1);
		scanf_s("%d", &grades[i]);
		sum = sum + grades[i];
		printf("Sum of the grades: %i", sum);
		
	}
	average = (float)sum / count;
	printf("\nAverage of the ten grades: %.2f\n", average);
}