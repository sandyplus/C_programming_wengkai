#include "stdio.h"

int main()
{
	int price = 0;

	printf("请输入金额（元）");
	scanf("%d",&price);
	
	//int change = 100 - price;
	const int AMOUNT = 100; //不要有magic number, 一般constant值用大写
	int change = AMOUNT - price;

	printf("找您%d元\n",change);

	return 0;	
}
