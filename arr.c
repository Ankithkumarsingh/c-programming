// // #include <stdio.h>

// // int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

// // int main(void)
// // {
	
// // 	size_t bytes = sizeof(arr);
// // 	size_t count = sizeof(arr) / sizeof(arr[0]);
// // 	printf("bytes: %lu, elements: %lu\n", bytes, count);
// // 	return 0;
// // }


// #include<stdio.h>

// int main(void)
// {
//     int i,n;
//     printf("Enter the number of element: \n");
//     scanf("%d", &n);
//     int arr[n];

//     printf("Enter the elements: ");
//     for(i=0; i<n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }


//     // printf("the elements in the array are :");
//     // for(i=0; i<n; i++)
//     // {
//     //     printf("%d", arr[i]);
//     // }
//     int j;
//     int x1[n];
//     for(j=0; j<n; j++)
//     {
//         x1[j] = j+1;
//     }
    
//     int result[n];
//     for(i=0; i<n; i++)
//     {
//         result[i]= x1[i]^arr[i];
//     }

//     for(i=0; i<n; i++)
//     {
//         printf("%d", result[i]);
//     }
// }




//Write a C program to declare an integer array of size 5 and initialize it with values {1, 2, 3, 4, 5}. Print all the elements using a for loop.

// #include<stdio.h>

// int main(){
    
//     int a[5] = {1,2,3,4,5};

//         for (int i = 0; i<=4; i++)  //declared the i inside the for loop
//         {
//             printf("%d\n", a[i]);
//         }

// return 0;
// }

//Write a program to take 5 integers as input from the user and store them in an array. Then print them.

// #include<stdio.h>

// int main(){
//  int a[5];
//  for(int i =0; i<=4; i++){
//     scanf("%d", &a[i]);
//  };

//  for(int i=0; i<=4; i++){
//     printf("%d\n", a[i]);
//  };

//     return 0;
// }



//Declare an array arr[10]. Assign arr[0] = 100, arr[5] = 200, and print both values.
// #include<stdio.h>

// int main(){
//     int a[10];
//     a[0] = 100;
//     a[5] = 200;
//     printf("%d\n %d", a[0],a[5]);
//     return 0;
// }


//Read 5 numbers into an array and find their sum.

// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>

// int main(){
//     srand(time(0));
//     int a[20];
//     for(int i= 0; i<=19; i++){
//         a[i]= rand() % 100;
//     }

//     for(int i = 0; i<=19; i++){
//         printf("%d\n", a[i]);
//     }
//     printf("\n \n");

//     int sum = 0;

// for(int j= 0; j<=4; j++){
//     int k= rand() %20;
//     printf("%d\n",a[k]);
//     sum += a[k];
// }
// printf("%d", sum);

//     return 0;
// }



//Read 10 numbers into an array and calculate the average.
// #include<stdio.h>

// int main(){
// int a[] = {31,45,3,44,52,3,4,5,6,7,8};
// int sum = 0;
// for(int i = 0;i<=4;i++){
//     sum +=a[i];
// };
// printf("%d", sum/5);

// return 0;
// }

//Read 5 numbers into an array and print them in reverse order.

