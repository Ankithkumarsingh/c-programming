// #include<stdio.h>

// int main()
// {
//     char charVal = 'A';
//     unsigned char ucharVal = 'B';
//     short shortint= 15;
//     unsigned short ushortint= 20;
//     int intVal=40;
//     unsigned int uintVal=50;
//     long longtVal=56354;
//     unsigned long ulongVal=78568;
//     long long longlongVal=567856;
//     unsigned long long ulonglongVal=546887;
//     float floatVal=56.65;
//     double doubleVal=456.45;
//     long double longdoubleVal=5468.68;

//     printf("%c\n", charVal);
//     printf("%c\n", ucharVal);
//     printf("%hd\n", shortint);
//     printf("%hu\n", ushortint);
//     printf("%d\n", intVal);
//     printf("%u\n", uintVal);
//     printf("%ld\n", longtVal);
//     printf("%lu\n", ulongVal);
//     printf("%lld\n", longlongVal);
//     printf("%llu\n", ulonglongVal);
//     printf("%f\n", floatVal);
//     printf("%lf\n", doubleVal);
//     printf("%Lf\n", longdoubleVal);
//     return 0;  
// }



// #include<stdio.h>

// int main()
// {
//     unsigned int distance1 = 125;
//     unsigned int distance2 = 45;
//     unsigned int result;
//     result = distance1 + distance2;
//     printf("%u\n", result);
//     return 0;
// }


// #include<stdio.h>

// int main()
// {
//     printf("size of char data type = %ld\n", sizeof(char));
//     printf("size of int data type = %ld\n", sizeof(int));
//     printf("size of short data type = %ld\n", sizeof(short));
//     printf("size of double data type = %ld\n", sizeof(double));
//     return 0;
// }


// #include<stdio.h>
// int my;
// int main()
// {
//     my = 100;
//     printf("%d\n", my);
// return 0;
// }


#include<stdio.h>

int main()
{
   int myvar1 = 1234;
   char char1 = 'A';
   char char2 = 'B';
    printf("Address is %p\n", &myvar1);
    printf("Address is %p\n", &char1);
    printf("Address is %p\n", &char2);
return 0;
}