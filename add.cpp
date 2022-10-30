#include <stdio.h>

//int main()
//{
//	int age =10;
//    if (age >= 18)
//	{
//		printf("成年了\n");
//		printf("能谈恋爱\n");
//	}
//	else
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}//多条语句，需要大括号
//	return 0;
//}
// 
// 
//int main()
//{
//	int age = 180;
//	if (age < 18)
//		printf("少年\n");
//	else if (age >= 18 && age < 26)//(18<=age>26)错误age>=18为真，执行命令
//		printf("青年\n");
//	else if (age >= 26 && age < 40)//需要使用&&
//		printf("中年\n");
//	else if (age >= 40 && age < 60)
//		printf("壮年\n");
//	else if (age >= 60 && age < 100)
//		printf("老年\n");
//	else
//		printf("老不死\n");
//	return 0;
//} 


//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else//else和最近的if匹配
//			printf("haha\n");
//	return 0;
//}//不打印结果
////代码可读性要高，要好看


//int main()
//{
//	int a = 1;
//	if ( 1 == a )//常量放前面，防止出错
//		return 1;
//	//return返回后后续不再执行
//	return 0;
//}


//int main()
//{
//	int num = 15;
//		if (1 == num % 2)
//			printf("奇数\n");
//		else
//			printf("不是奇数\n");
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
//			printf("%d\n",i);//\n换成空格更好看
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
//		printf("星期1\n");
//		break;//终止语句，跳出循环
//	case 2:
//		printf("星期2\n");
//		break;
//	case 3:
//		printf("星期3\n");
//		break;
//	case 4:
//		printf("星期4\n");
//		break;
//	case 5:
//		printf("星期5\n");
//		break;
//	case 6:
//		printf("星期6\n");
//		break;
//	case 7:
//		printf("星期7\n");
//		break;
//	default:
//		printf("输入错误\n");
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
//			m++;//没有break跳出循环，继续下一步。
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
//				break;//跳出自己所在switch语句，继续大switch语句。
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
//	int ch = getchar();//获取一个字符
//		printf("%c\n", ch);
//		putchar(ch);//输出一个字符
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
	printf("请输入密码：>");
	scanf_s("%s", password);
	printf("")
	return 0;
}