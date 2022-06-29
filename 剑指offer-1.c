/*题目：输入2个int型整数，它们进行除法计算并返回商，要求不得使用乘号'*'、除号'/'及求余符号'%'。
当发生溢出时，返回最大的整数值。假设除数不为0。例如，输入15和2，输出15/2的结果，即7。*/
#include<stdio.h>
int main()
{
	int a, b, c, d=0;
	scanf("%d %d", &a, &b);
	if (a < b)
	{
		printf("0");
	}
	else
	{
		for (c=0; c <= a;)
		{
			c += b;
			d++;
		}
	}
	printf("%d", d-1);
	return 0;
}