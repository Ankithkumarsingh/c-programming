#include<stdio.h>
#include<stdint.h>
void user_input(void);

int main(void)
{
	int32_t num1, num2;
	printf("Enter 2 numbers (give space between two numbers  \n");
	scanf("%d %d", &num1, &num2);
	printf("The bitwise AND is %d\n", (num1 & num2));
	printf("The bitwise NOT is %d\n", ~num2);
	printf("The bitwise Left shift is %d\n", (num1 << num2));
	printf("The bitwise Right shift is %d\n", (num1 >> num2));
	printf("The bitwise XOR is %d\n", (num1 ^ num2));
return 0;
};

void user_input(void){
	printf("Press enter key to exit");
	while(getchar() !=  '\n')
	{

	}
	getchar();
}
