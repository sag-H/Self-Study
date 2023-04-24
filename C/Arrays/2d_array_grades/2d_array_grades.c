/*This program calculates the average scores of two subjects in a 2d array: 0 and 1.
subject 0's scores are where i=0 in the array, and subject 1's are where i=1.

The program prints the subject number and its corrosponding average score.*/

#include <stdio.h>

int main() {

	int grades[5][5];
	float average;
	float subject_sum = 0;
	int i;
	int j;

	//Populating the array with scores of subject 0
	grades[0][0] = 80;
	grades[0][1] = 70;
	grades[0][2] = 65;
	grades[0][3] = 89;
	grades[0][4] = 90;

	//Populating the array with scores in indexes of subject 1
	grades[1][0] = 85;
	grades[1][1] = 80;
	grades[1][2] = 80;
	grades[1][3] = 82;
	grades[1][4] = 87;

	for (i = 0; i <= 1; i++) {
		average = 0;
		subject_sum = 0;
		for (j = 0; j <= 4; j++) {
			subject_sum += grades[i][j];
		}
		average = subject_sum /j;
		printf("The average score obtained in subject %d is: %.2f\n", i, average);
	}

	return 0;
}