#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;//������ǰѭ���������´��ж�
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
//	for (i = 0; i < 3; i++)//û���ж���ѭ��
//	{
//		for (j = 0; j < 3; j++)//ȥ��i=0��ȥ��j=0��ֻ��ӡ3��
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
//			continue;//������i++
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
//	printf("������n\n");
//	scanf_s("%d", &n);
//	for (j = 1; j <= n; j++)
//	{
//		num = 1;//numҪ���³�ʼ��
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n",mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
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
//		printf ("���������룺>");
//		scanf_s ("%s", password);
//		if (strcmp(password,"123456")==0)
//		{
//			printf("����ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("���������������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("�������붼��������˳�����\n");
//	}
//	return 0;
//}


