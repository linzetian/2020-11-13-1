//利用函数指针实现对函数的调用
//第一次找出a，b中的大者。第二次找出小的，第三次找出两数之和
#include<stdio.h>
int max(int x, int y)
{
	int z;
	if (x > y)
		return x;
	else
		return y;
}
int min(int x, int y)
{
	int z;
	if (x > y)
		return y;
	else
		return x;
}
int add(int x, int y)
{
	int z;
	z = x + y;
	return z;
}
void process(int x, int y, int (*fun)(int))//int (*fun)(int)中的fun为函数指针
{
	int result=0;
	result = (*fun)(x, y);
	printf("%d",result);
}
int main()
{
	int a, b;
	printf("输入a，b的值：\n");
	scanf("%d%d",&a,&b);
	printf("Max=");
	process(a,b,max);//max表示函数max的首地址
	printf("\n");
	printf("Min=");
	process(a,b,min);
	printf("\n");
	printf("Add=");
	process(a, b, add);
	printf("\n");
	return 0;
}