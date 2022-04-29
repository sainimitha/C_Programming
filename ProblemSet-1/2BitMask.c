#include<stdio.h>
int SetBit(int a, int b)
{
	return (a | (1 << b));
}
int ResetBit(int a, int b)
{
	return (a & (~(1 << b)));
}
int FilpBit(int a, int b)
{
	 return (a ^ (1 << b));
}
int QueryBit(int a, int b)
{
	a =(a&(1 << b));
	if(a>=1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int a,b;
	printf("Enter any two numbers\n");
	scanf("%x %x",&a,&b);
	//printf("a=%x b=%x\n", a,b);
	printf("Set Bit = %x\n",SetBit(a,b));
	printf("Reset Bit = %x\n",ResetBit(a,b));
	printf("Filp Bit = %x\n",FilpBit(a,b));
	printf("Query Bit = %x",QueryBit(a,b));
	
}
