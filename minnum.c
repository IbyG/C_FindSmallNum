#include <stdio.h>

/*this is lab practice question 3 created on 12 of march 2019*/

main()
{
	/*three variables to store user input and the smallest int */
	int num1, num2, num3, small;
	
	printf("Type in 3 numbers: ");
	scanf("%d %d %d", &num1, &num2, &num3);	

	small = num1;
	if(small > num2)
	{
		small = num2;
	}else if(small > num3)
	{
		small = num3;
	}

	printf("The smallest number you typed is: %d\n ", small);
}
