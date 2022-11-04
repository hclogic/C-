#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;//跳过当前循环，进入下次判断
//		printf("%d", i);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i <=9; i++);
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)//没有判断则不循环
//	{
//		for (j = 0; j < 3; j++)//去掉i=0，去掉j=0，只打印3次
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	do
//	{
//		if (i == 5)
//			continue;//跳过了i++
//
//		printf("%d\n",i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int num = 1;
//	int n = 0;
//	int j = 0;
//	int sum = 0;
//	printf("请输入n\n");
//	scanf_s("%d", &n);
//	for (j = 1; j <= n; j++)
//	{
//		num = 1;//num要重新初始化
//		for (i = 1; i <= j; i++)
//		{
//			num = (i * num);//num *= i
//
//		}
//		sum = (sum + num);//sum += num
//	
//
//	}
//	printf("%d\n",sum);
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 8;
//	int sz = sizeof(arr) / sizeof(arr[10]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n",mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//
//
//	return 0;
//}

#include <string.h>

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf ("请输入密码：>");
//		scanf_s ("%s", password);
//		if (strcmp(password,"123456")==0)
//		{
//			printf("登入成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，重新输入\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码都输入错误，退出程序\n");
//	}
//	return 0;
//}


