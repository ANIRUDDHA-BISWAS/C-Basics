// Program to print the sum of two numbers
# include <stdio.h> /* Preprocessor Directive */

/* Program Body */
int main()
{
    int num1,num2,sum; /* Variable declarations */

    printf("Enter values of num1 and num2:\n");
    scanf("%d %d",&num1,&num2);
    
    sum = num1 + num2;  /* Sum computed */
    printf("Sum = %d\n",sum);

    return 0;   /* Terminates the program */
}
