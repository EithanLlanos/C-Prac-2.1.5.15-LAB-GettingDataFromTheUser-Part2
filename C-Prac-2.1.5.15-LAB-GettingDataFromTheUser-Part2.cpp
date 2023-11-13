//Scenario
//Write a program which records two float values.Next, print the sum, the difference and the result of the multiplication of these two values.
//Your version of the program must print the same result as the expected output.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Sample Input
//5.5
//5.6
//
//Sample output
//Value A : 5.5
//Value B : 5.6
//5.500000 + 5.600000 = 11.100000.
//5.500000 - 5.600000 = -0.100000.
//5.500000 * 5.600000 = 30.799999.
//
//Sample Input
//9.13
//4.18
//
//Sample output
//Value A : 9.13
//Value B : 4.18
//9.130000 + 4.180000 = 13.309999.
//9.130000 - 4.180000 = 4.950000.
//9.130000 * 4.180000 = 38.163399.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

int main() {
	float var1 = 0;
	float var2 = 0;
	printf("Enter the first value: ");
	scanf_s("%f", &var1);
	printf("Enter the second value: ");
	scanf_s("%f", &var2);
	printf("Value A: %f\nValue B: %f\n%f + %f = %f\n %f - %f = %f\n%f * %f = %f", var1, var2, var1, var2, var1 + var2, var1, var2, var1 - var2, var1, var2, var1 * var2);
	return 0;
}