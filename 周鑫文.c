#include <stdio.h>
void main()
{
	int i,j, n;
	char choice;
	begin:
	printf("��ѡ��Ҫִ�еĹ��ܣ�\n\n");
	printf("F ͨ��forѭ������׳�\n");
	printf("W ͨ��whileѭ������׳�\n");
	printf("D ͨ��do-whileѭ������׳�\n");
	printf("X ������������\n");
	 choice = getchar(); getchar();
	 switch (choice)
	{
	case 'F':
	case'f': 
	{
		printf("\n������һ��Ҫ����׳˵�������"); scanf_s("%d", &n);
	    for (i = 1, j = 1; i <= n; i++) j = j * i; 
	}break;
	case 'W':
	case 'w':
	{
		printf("\n������һ��Ҫ����׳˵�������"); scanf_s("%d", &n);
		i = 1; j = 1; while (i <= n) { j = j * i; i += 1; }
	}break;
	case'D':
	case 'd':
	{
		printf("\n������һ��Ҫ����׳˵�������"); scanf_s("%d", &n);
		i = 1; j = 1; do { j = j * i; i += 1; } while (i <= n);
	}break;
	case 'X':
	case 'x': 
	{
		printf("ллʹ�ã�\n\n"); goto exit;
	}
	default:
	{
		printf("������ѡ��\n\n"); goto begin;
	}
	}
	printf("%d!=%d\n\n", n,j); goto begin;
exit:
	system("pause");
}

	