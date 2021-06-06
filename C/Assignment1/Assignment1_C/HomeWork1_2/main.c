#include <stdio.h>

/* Ex1 */
void PrintSentence(void);

/* Ex2 */
void PrintNumber(void);

/* Ex3 */
void AddTwoIntegers(void);

/* Ex4 */
void MultiplyTwoFloats(void);

/* Ex5 */
void FindAsciiValue(void);

/* Ex6 */
void Swap(void);

/* Ex7 */
void TrickySwap(void);

/**** End of Homework1 ****/

/**** Homework2 ****/

/* Ex1 */
void CheckEvenOdd(void);

/* Ex2 */
void CheckVowelConsonant(void);

/* Ex3 */
void FindLargestNum(void);

/* Ex4 */
void CheckPosNegativeNum(void);

/* Ex5 */
void CheckAlphabetChar(void);

/* Ex6 */
void SumNums(void);

/* Ex7 */
void Factorial_(void);

/* Ex8 */
void Calculator(void);

/**** End of Homework2 ****/

int main(void)
{
 /* Uncomment the function you want to use

	PrintSentence();
	PrintNumber();
	AddTwoIntegers();
	MultiplyTwoFloats();
	FindAsciiValue();
	Swap();
    TrickySwap();
    CheckEvenOdd();
	CheckVowelConsonant();
	FindLargestNum();
	CheckPosNegativeNum();
	CheckAlphabetChar();
	SumNums();
	Factorial_();
 */
	Calculator();
	return 0;
}

void PrintSentence(void)
{
	printf("C Programming");
}

void PrintNumber(void)
{
	int num;

	printf("Enter an integer: ");

	/* fflush function is used frequently in eclipse projects due to
	 * the buffer bug
	 */

	fflush(stdout);
	scanf("%d", &num);
	printf("You entered: %d", num);

}

void AddTwoIntegers(void)
{
	int num1, num2;

	printf("Enter two integers: ");
	fflush(stdout);
	scanf("%d %d", &num1, &num2);
	fflush(stdin);
	printf("Sum: %d", num1 + num2);

}

void MultiplyTwoFloats(void)
{
	float num1, num2;

	printf("Enter two numbers: ");
	fflush(stdout);
	scanf("%f %f", &num1, &num2);
	fflush(stdin);
	printf("Product: %f", num1 * num2);
}

void FindAsciiValue(void)
{
	char ch;

	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c", &ch);
	printf("ASCII Value of %c = %d", ch, ch);
}

void Swap(void)
{
	float a,b;
	float temp;

	printf("Enter value of a: ");
	fflush(stdout);
	scanf("%f", &a);
	fflush(stdin);

	printf("Enter value of b: ");
	fflush(stdout);
	scanf("%f", &b);

	printf("\n");

	temp = a;
	a = b;
	b = temp;

	/* in order to show the output numbers as specified in the assignment
	 * requirements, %.2f added to show the float number fraction in two digits
	 * only. Note: with numbers of more than two digits in precision
	 * like 2.445656 the shown output will not be accurate
	 */

	printf("After swapping, value of a = %.2f \n", a);
	printf("After swapping, value of b = %.2f \n", b);

}

void TrickySwap(void)
{
	float a,b;

	printf("Enter value of a: ");
	fflush(stdout);
	scanf("%f", &a);
	fflush(stdin);

	printf("Enter value of b: ");
	fflush(stdout);
	scanf("%f", &b);

	printf("\n");

	/* Note: we can also use a = a*b; b = a/b; a = a/b; to swap the variables
	 * also we can use this method: a = a^b; b = a^b; a = a^b; but the latter
	 * method can't be applied on floats as in this function
	 */

	a = a + b;
	b = a - b;
	a = a - b;

	/* in order to show the output numbers as specified in the assignment
	 * requirements, %.2f added to show the float number fraction in two digits
	 * only. Note: with numbers of more than two digits in precision
	 * like 2.445656 the output will not be accurate
	 */

	printf("After swapping, value of a = %.2f \n", a);
	printf("After swapping, value of b = %.2f \n", b);
}

void CheckEvenOdd(void)
{
	int x;

	printf("Enter an integer you want to check: ");
	fflush(stdout);
	scanf("%d", &x);

	/*More efficient method to check even or odd for both +ve and -ve numbers*/
	(x & 1) ? printf("%d is odd.", x) : printf("%d is even.", x);

}

void CheckVowelConsonant(void)
{
	char alpha;
	char vowelChars[] = "aeiou";
	int i;

	printf("Enter an alphabet: ");
	fflush(stdout);
	scanf("%c", &alpha);

	for(i = 0; vowelChars[i]; i++)
	{
		if(vowelChars[i] == alpha)
		{
			printf("%c is a vowel.", alpha);
			return;
		}
	}

	printf("%c is a consonant.", alpha);

}

void FindLargestNum(void)
{
	float num1, num2, num3;

	printf("Enter three numbers: ");
	fflush(stdout);
	scanf("%f", &num1);
	fflush(stdin);
	scanf("%f", &num2);
	fflush(stdin);
	scanf("%f", &num3);
	fflush(stdin);

	/* It's not good practice from readability point of view
	 * to type control statement without enclosed curly braces
	 * even with one statement of execution. This implementation is just
	 * for practicing
	 */
	if(num1 > num2 && num1 > num3)
		printf("Largest number = %f", num1);

	else if(num2 > num1 && num2 > num3)
			printf("Largest number = %f", num2);

	else if(num3 > num1 && num3 > num2)
		printf("Largest number = %f", num3);
}

void CheckPosNegativeNum(void)
{
	float num;

	printf("Enter a number: ");
	fflush(stdout);

	scanf("%f", &num);
	fflush(stdin);

	if(num > 0)
		printf("%f is positive.", num);
	else if(num < 0)
		printf("%f is negative.", num);
	else
		printf("You entered zero.", num);
}

void CheckAlphabetChar(void)
{
	char ch;

	printf("Enter a character: ");
    fflush(stdout);
	scanf("%c", &ch);

	if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') )
		printf("%c is an alphabet", ch);
	else
		printf("%c is not an alphabet", ch);
}

void SumNums(void)
{
	int num, i, sum = 0;

	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d", &num);

	for(i = 1; i <= num; i++)
		sum += i;

	printf("Sum = %d", sum);
}

void Factorial_(void)
{
	int num, i;

	/* unsigned long long is used to result in maximum number of integer
	 * factorial. long double also can be used to out even more range, less
	 * accurate numbers. For more range of numbers representation, you can
	 * implement your own long number representation library like the one
	 * used in C# or java programming languages
	 */
	unsigned long long factorial = 1;

	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d", &num);
	fflush(stdin);

	if(num < 0)
	{
		printf("Error!!! factorial of negative number doesn't exist.");
		return;
	}

	for(i = 1; i <= num; i++)
		factorial *= i;

	printf("Factorial = %llu", factorial);

}


void Calculator(void)
{
	double num1, num2;
	char op;

	printf("Enter operator either + or - or * or divide : ");
	fflush(stdout);
	scanf("%c", &op);

	printf("Enter two operands: ");
	fflush(stdout);

	scanf("%lf", &num1);
	fflush(stdin);

	scanf("%lf", &num2);
	fflush(stdin);

	switch(op)
	{
	case '+':
		printf("%lf %c %lf = %lf", num1, op, num2, num1 + num2);
		break;

	case '-':
		printf("%lf %c %lf = %lf", num1, op, num2, num1 - num2);
		break;

	case '*':
		printf("%lf %c %lf = %lf", num1, op, num2, num1 * num2);
		break;

	case '/':
		printf("%lf %c %lf = %lf", num1, op, num2, num1 / num2);
		break;

	default:
		printf("Invalid input operator, exiting..");
	}

}
