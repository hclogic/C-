#include <stdio.h>

//int main()
//{
//	int age =10;
//    if (age >= 18)
//	{
//		printf("������\n");
//		printf("��̸����\n");
//	}
//	else
//	{
//		printf("δ����\n");
//		printf("����̸����\n");
//	}//������䣬��Ҫ������
//	return 0;
//}
// 
// 
//int main()
//{
//	int age = 180;
//	if (age < 18)
//		printf("����\n");
//	else if (age >= 18 && age < 26)//(18<=age>26)����age>=18Ϊ�棬ִ������
//		printf("����\n");
//	else if (age >= 26 && age < 40)//��Ҫʹ��&&
//		printf("����\n");
//	else if (age >= 40 && age < 60)
//		printf("׳��\n");
//	else if (age >= 60 && age < 100)
//		printf("����\n");
//	else
//		printf("�ϲ���\n");
//	return 0;
//} 


//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else//else�������ifƥ��
//			printf("haha\n");
//	return 0;
//}//����ӡ���
////����ɶ���Ҫ�ߣ�Ҫ�ÿ�


//int main()
//{
//	int a = 1;
//	if ( 1 == a )//������ǰ�棬��ֹ����
//		return 1;
//	//return���غ��������ִ��
//	return 0;
//}


//int main()
//{
//	int num = 15;
//		if (1 == num % 2)
//			printf("����\n");
//		else
//			printf("��������\n");
//    return 0;
//}


//int main()
//{
//	int i = 0;
//	for ( i = 1;100 >= i; i++)
//	{
//		if (1 == i % 2)
//			printf("%d\n", i);
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 1;
//	while (100 >= i)
//	{
//		if (1 == i % 2)
//		{
//			printf("%d\n",i);//\n���ɿո���ÿ�
//		}
//		i++;
//	}
//	return 0;
//} 


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//		if (i % 2 == 1)
//		{
//			printf("%d ", i);
//		}
//		return 0;
//}

//int main()
//{
//	int i = 0;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d ", i);
//		}
//		i++;
//     }
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	scanf_s("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����1\n");
//		break;//��ֹ��䣬����ѭ��
//	case 2:
//		printf("����2\n");
//		break;
//	case 3:
//		printf("����3\n");
//		break;
//	case 4:
//		printf("����4\n");
//		break;
//	case 5:
//		printf("����5\n");
//		break;
//	case 6:
//		printf("����6\n");
//		break;
//	case 7:
//		printf("����7\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}


//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//			m++;//û��break����ѭ����������һ����
//	case 2:
//			n++;
//	case 3:
//			switch (n)
//			{
//			case 1:
//				n++;
//			case 2:
//				m++;
//				n++;
//				break;//�����Լ�����switch��䣬������switch��䡣
//			}
//	case 4:
//			m++;
//			break;
//	default:
//			break;
//	}
//	printf("m = %d, n =%d\n", m, n);
//
//	return 0;
//}


//int main()
//{
//	int ch = getchar();//��ȡһ���ַ�
//		printf("%c\n", ch);
//		putchar(ch);//���һ���ַ�
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//
//}


int main()
{
	char password[20] = { 0 };
	printf("���������룺>");
	scanf_s("%s", password);
	printf("")
	return 0;
}