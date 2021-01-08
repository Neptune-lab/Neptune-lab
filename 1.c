#include <stdio.h>
#include <stdlib.h>

int fun(int n)	//十进制转换成二进制递归函数 
{
	if(n)	//递归停止的条件 
	{
		fun(n/2);	//递归 
		printf("%d",n%2);
	}
}

int main()
{
	int a;
	scanf("%d",&a);		//输入要转换成二进制的数 
	fun(a);		//运用函数 
	system("pause");
	return 0;
}

