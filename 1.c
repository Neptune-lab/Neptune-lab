#include <stdio.h>
#include <stdlib.h>

int fun(int n)	//ʮ����ת���ɶ����Ƶݹ麯�� 
{
	if(n)	//�ݹ�ֹͣ������ 
	{
		fun(n/2);	//�ݹ� 
		printf("%d",n%2);
	}
}

int main()
{
	int a;
	scanf("%d",&a);		//����Ҫת���ɶ����Ƶ��� 
	fun(a);		//���ú��� 
	system("pause");
	return 0;
}

