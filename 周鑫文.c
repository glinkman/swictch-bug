#include <stdio.h>
void main()
{
	int i,j, n;
	char choice;
	begin:
	printf("请选择要执行的功能：\n\n");
	printf("F 通过for循环计算阶乘\n");
	printf("W 通过while循环计算阶乘\n");
	printf("D 通过do-while循环计算阶乘\n");
	printf("X 结束程序运行\n");
	 choice = getchar(); getchar();
	 switch (choice)
	{
	case 'F':
	case'f': 
	{
		printf("\n请输入一个要计算阶乘的整数："); scanf_s("%d", &n);
	    for (i = 1, j = 1; i <= n; i++) j = j * i; 
	}break;
	case 'W':
	case 'w':
	{
		printf("\n请输入一个要计算阶乘的整数："); scanf_s("%d", &n);
		i = 1; j = 1; while (i <= n) { j = j * i; i += 1; }
	}break;
	case'D':
	case 'd':
	{
		printf("\n请输入一个要计算阶乘的整数："); scanf_s("%d", &n);
		i = 1; j = 1; do { j = j * i; i += 1; } while (i <= n);
	}break;
	case 'X':
	case 'x': 
	{
		printf("谢谢使用！\n\n"); goto exit;
	}
	default:
	{
		printf("请重新选择！\n\n"); goto begin;
	}
	}
	printf("%d!=%d\n\n", n,j); goto begin;
exit:
	system("pause");
}

	