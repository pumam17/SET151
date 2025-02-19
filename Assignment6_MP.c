// --------------------------------------------------------------------------------
// Name: Mitch Puma
// Class: SET 151
// Abstract: Assignment6_MP
// --------------------------------------------------------------------------------

// --------------------------------------------------------------------------------
// Includes
// --------------------------------------------------------------------------------
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// --------------------------------------------------------------------------------
// Constants
// --------------------------------------------------------------------------------
const int intARRAY_SIZE = 5;
// --------------------------------------------------------------------------------
// User Defined Types (UDT)
// --------------------------------------------------------------------------------

// --------------------------------------------------------------------------------
// Prototypes
// --------------------------------------------------------------------------------
void ValidateInteger(int* pintUserInput);
void InitializeArray(int aintMyArray[]);
void PopulateArray(int aintMyArray[]);
void PrintArray(int aintMyArray[]);
int CalculateArraySum(int aintMyArray[]);
float CalculateArrayAverage(intArraySum);
int CalculateArrayMax(int aintMyArray[]);
int CalculateArraySumOnlyEvenNumbers(int aintMyArray[]);
int CalculateArraySumEvenNumbersWithoutZero(int aintMyArray[]);
void PrintOutput(int intArraySum, float sngArrayAvg, int intArrayMax, int intArraySumEvenNumbers, int intArraySumEvenNumbersWithoutZero);
// --------------------------------------------------------------------------------
// Name: main
// Abstract: main program
// --------------------------------------------------------------------------------
int main()
{
	int intIndex = 0;
	int aintMyArray[5];
	int intArraySum = 0;
	float sngArrayAvg = 0;
	int intArrayMax = 0;
	int intArraySumEvenNumbers = 0;
	int intArraySumEvenNumbersWithoutZero = 0;
	InitializeArray(aintMyArray);
	PopulateArray(aintMyArray);
	PrintArray(aintMyArray);
	intArraySum = CalculateArraySum(aintMyArray);
	sngArrayAvg = CalculateArrayAverage(intArraySum);
	intArrayMax = CalculateArrayMax(aintMyArray);
	intArraySumEvenNumbers = CalculateArraySumOnlyEvenNumbers(aintMyArray);
	intArraySumEvenNumbersWithoutZero = CalculateArraySumEvenNumbersWithoutZero(aintMyArray);
	PrintOutput(intArraySum, sngArrayAvg, intArrayMax, intArraySumEvenNumbers, intArraySumEvenNumbersWithoutZero);
	system("pause");
	return 0;
}



// --------------------------------------------------------------------------------
// Name: ValidateUserInteger
// Abstract: Validate an integer from 1 to 1,000,000
// --------------------------------------------------------------------------------
void ValidateInteger(int* pintUserInput)
{
	bool blnValidation = false;
	while (blnValidation != true)
	{
		scanf("%d", pintUserInput);
		if (*pintUserInput > 0 && *pintUserInput <= 1000000)
		{
			blnValidation = true;
		}
		else
		{
			printf("Input must be between 1 & 1,000,000.\n");
		}
	}
}



// ---------------------------------
// Name: InitializeArray
// Abstract: Initialize all the array elements to zero.
// ---------------------------------
void InitializeArray(int aintMyArray[])
{
	int intIndex = 0;
	for (intIndex = 0; intIndex < intARRAY_SIZE; intIndex += 1)
	{
		aintMyArray[intIndex] = 0;
	}
}



// ---------------------------------
// Name: PopulateArray
// Abstract: Populate the array with numbers you read from the user.
// ---------------------------------
void PopulateArray(int aintMyArray[])
{
	int intIndex = 0;
	for (intIndex = 0; intIndex < intARRAY_SIZE; intIndex += 1)
	{
		int intUserInput = 0;
		printf("Enter a number\n");
		ValidateInteger(&intUserInput);
		aintMyArray[intIndex] = intUserInput;
	}
}



// ---------------------------------
// Name: PrintArray
// Abstract: Print all the numbers in the array.
// ---------------------------------
void PrintArray(int aintMyArray[])
{
	int intIndex = 0;
	for (intIndex = 0; intIndex < intARRAY_SIZE; intIndex += 1)
	{
		printf("%d\n", aintMyArray[intIndex]);
	}
}



// ---------------------------------
// Name: CalculateArraySum
// Abstract: Calculate the array total.
// ---------------------------------
int CalculateArraySum(int aintMyArray[])
{
	int intArraySum = 0;
	int intIndex = 0;
	for (intIndex = 0; intIndex < intARRAY_SIZE; intIndex += 1)
	{
		intArraySum += aintMyArray[intIndex];
	}
	return intArraySum;
}



// ---------------------------------
// Name: CalculateArrayAverage
// Abstract: Calculate the array average.
// ---------------------------------
float CalculateArrayAverage(intArraySum)
{
	float sngArrayAvg = 0;
	sngArrayAvg = intArraySum / intARRAY_SIZE;
	return sngArrayAvg;
}



// ---------------------------------
// Name: CalculateArrayMax
// Abstract: Calculate the array Max.
// ---------------------------------
int CalculateArrayMax(int aintMyArray[])
{
	int intIndex = 0;
	int intArrayMax = aintMyArray[0];
	for (intIndex = 0; intIndex < intARRAY_SIZE; intIndex += 1)
	{
		if (aintMyArray[intIndex] >= intArrayMax)
		{
			intArrayMax = aintMyArray[intIndex];
		}
	}
	return intArrayMax;
}



// ---------------------------------
// Name: CalculateArraySumOnlyEvenNumbers
// Abstract: Calculate the array total with only even numbers.
// ---------------------------------
int CalculateArraySumOnlyEvenNumbers(int aintMyArray[])
{
	int intArraySumEvenNumbers = 0;
	int intIndex = 0;
	for (intIndex = 0; intIndex < intARRAY_SIZE; intIndex += 2)
	{
		intArraySumEvenNumbers += aintMyArray[intIndex];
	}
	return intArraySumEvenNumbers;
}



// ---------------------------------
// Name: CalculateArraySumEvenNumbersWithoutZero
// Abstract: Calculate the array total with only even numbers not including zero.
// ---------------------------------
int CalculateArraySumEvenNumbersWithoutZero(int aintMyArray[])
{
	int intArraySumEvenNumbersWithoutZero = 0;
	int intIndex = 0;
	for (intIndex = 2; intIndex < intARRAY_SIZE; intIndex += 2)
	{
		intArraySumEvenNumbersWithoutZero += aintMyArray[intIndex];
	}
	return intArraySumEvenNumbersWithoutZero;
}

// ---------------------------------
// Name: PrintOutput
// Abstract: Print the results of questions 5-9
// ---------------------------------
void PrintOutput(int intArraySum, float sngArrayAvg, int intArrayMax, int intArraySumEvenNumbers, int intArraySumEvenNumbersWithoutZero)
{
	printf("5.Calculate the array total and print. %d \n", intArraySum);
	printf("6.Calculate the array average and print. %f \n", sngArrayAvg);
	printf("7.Find the maximum array value and print. %d \n", intArrayMax);
	printf("8.Add all the numbers at every even location (starting at 0) and print the total. %d \n", intArraySumEvenNumbers);
	printf("9.Add all the even numbers in the array and print the total. %d \n", intArraySumEvenNumbersWithoutZero);
}