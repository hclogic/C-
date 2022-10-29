#include <stdio.h> 

//int main()
//{
//	int input = 0;
//	printf("加入比特：>\n");
//	printf("那要好好学习吗（1/0)?>:");
//	scanf_s("%d", &input);
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//	return 0;
//}

//{
//	int line = 0;
//	while (line < 30000)
//	{
//		printf("写代码:%d\n",line);
//		line++;
//	}
//	if (line == 30000)
//	{
//		printf("好offer\n");
//	}
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf_s("%d%d", &num1, &num2);
//	int sum = Add(num1, num2);
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	int b = a << 1;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a); 
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = ++a;
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 3;
//	int max = 0;
//
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	printf("%d\n", max);
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	int b = 2;
//	int max = 0;
//	max = a > b ? a : b;
//	printf("%d\n", max);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 3;
//	int c = 5;
//	int d = (a = b + 2, c = a - 4, b = c + 2);
//	printf("%d\n", d);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[5]);//下标引用操作符
//	return 0;
//}

//typedef unsigned int u_int
//
//int main()
//{
//	unsigned int num = 100;
//	u_int num2 = 100;
//	return 0;
//}

//void test()
//{
//	static int a = 1;//static 修饰局部变量
//	//改变其生命周期，本质是改变了存储类型
//	a++;
//	printf("%d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//extern int g_val;//声明外部符号的
//int main()
//{
//	printf("%d\n", g_val);//
//	return 0;
//}//全局变量整个工程中都可以使用，具有外部链接属性
////static 修饰后不可以使用

//extern int Add(int x, int y);//声明函数
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf ("sum =%d\n", sum);
//	return 0;
//}//static 修饰后不可以使用


//define //是一个预处理指令

//#define MAX 1000//define定义常量
//
//int main()
//{
//	printf("%d\n", MAX);
//	return 0;
//}

//define 定义宏
//#define ADD(x,y)（x+y）
////
//
//int main()
//{
//	printf("%d\n", 4*ADD(2,3));//4*2+3=11
//	//ADD会被替换
//	return 0;
//} 

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	*pa = 20;//解引用操作符
//	//*pa就是通过pa里边的地址，找到a
//	printf("%d\n", a);
//	 
//	return 0;

//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//struct Book
//{
//	char name[20];
//	float price;
//	char id[30];
//};
//
//int main()
//{
//	struct Stu s = { "张三",20,85.5 };
////结构体的创建和初始化
//	printf("%s %d %lf\n", s.name, s.age, s.score);
//	//结构体变量，成员变量
//	struct Stu* ps = &s;
//	printf("2:%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
//	printf("3:%s %d %lf\n",ps->name,ps->age,ps->score );
//
//	return 0;
//}
//

//int main()
//{
//	int m = 0;
//	scanf_s("%d", &m);
//		if (m % 5 == 0)
//			printf("YES\n");
//		else
//			printf("NO\n");
//
//	return 0;
//}


//static int g_val = 2022;
//static修饰函数，改变了属性
//本质是将外部链接属性改变成内部链接属性

//static int Add(int x, int y)
//{
//	return x + y;
//}