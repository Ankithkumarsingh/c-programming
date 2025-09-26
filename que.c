//Declare and print an integer, float, and char.

// #include<stdio.h>

// int main()
// {
//     int a = 13;
//     float c = 0.2;
//     char b = 'A';
// printf("%i\n", a);
// printf("%f\n", c);    
// printf("%c\n", b);
// return 0;    
// }

//Input two integers and print their sum.

// #include<stdio.h>

// int main()
// {
//     int a,b,result;
//     printf("Ente the numbers\n");
//     scanf("%d\n %d", &a,&b);
//     result = a+b;
//     printf("The result is %d\n", result);
//     return 0;
// }

// Swap two variables using a third variable.

// #include<stdio.h>

// int main()
// {
//     int a,b,c;
//     printf("Enter the number a ");
//     scanf("%i", &a);
//     printf("Enter the number b ");
//     scanf("%i", &b);
//     c = a;
//     a = b;
//     b = c;
//     printf("%i\n", a);
//     printf("%i\n", b);
//     return 0;
// }


//Find the ASCII value of a character.

// #include<stdio.h>

// int main()
// {
//     char a;
//     printf("Enter the character\n");
//     scanf("%c", &a);
//     printf("%i\n", a);
//     return 0;
// }

//Write a program that takes float input and prints the rounded integer.

// #include<stdio.h>
// #include<math.h>

// int main()
// {
//     float a;
//     int round;
//     printf("Enter the float that to be rounded\n");
//     scanf("%f", &a);

//     printf("%i\n", round(a));
//     return 0;
// }


// Input a character and check if it’s uppercase, lowercase, or a digit

// #include<stdio.h>

// int main(){
// char ch;
// printf("Enter the character\n");
// scanf("%c", &ch);

// if (ch>= 'A' && ch<='Z')
// {
//     printf("Uppercase letter\n");
// }else if (ch>= 'a' && ch<='z')
// {
//    printf("lowercase letter\n");
// }
// return 0;
// }


//Print the size of all basic data types using sizeof

// #include<stdio.h>

// int main()
// {
// printf("The size is : %ld\n", sizeof(int));
// printf("The size is : %ld\n", sizeof(float));
// printf("The size is : %ld\n", sizeof(char));
// printf("The size is : %ld\n", sizeof(long double));
// return 0;    
// }

//Write a program to demonstrate overflow and underflow of an integer.

// #include<stdio.h>
// #include <limits.h>

// int main()
// {
//     int max = INT_MAX;
//     int min = INT_MIN;

//     printf("INT_MAX: %d\n", max);
//     printf("INT_MAX + 1 (Overflow): %d\n", max + 1);
//     printf("INT_MIN: %d\n", min);
//     printf("INT_MIN - 1 (Underflow): %d\n", min - 1);
//     return 0;
// }

//Input two integers and print their sum, difference, product, quotient, and remainder.

#include<stdio.h>

int main()
{
    int a,b,operator,result;
    printf("Enter the first number");
    scanf("%d", &b);
    printf("Enter the first number");
    scanf("%d", &a);
    printf("Enter the operator");
    scanf("%d", &operator);
    result = a  b;
    printf("%d", result);
    return 0;
}