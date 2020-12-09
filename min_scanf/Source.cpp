#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int minMethod(int*, int);
int main()
{
    int input;
    int* p;
    printf("how many number you have : ");
    scanf("%d", &input);
    p = (int*)malloc(input*sizeof(int));
    printf("what are they : ");
    for (int i = 0;i < input;i++)
    {
        scanf("%d", &p[i]);
    }
    printf("\nMin number is : %d \n",minMethod(p,input));
	return 0;
}

int minMethod(int*p , int input)
{
    int min = 21478364;
    for (int i = 0;i < input; i++)
    {
        if (p[i] < min)
            min = p[i];
        
    }
    return min;
}