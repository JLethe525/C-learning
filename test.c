#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int main()
//{
//	printf("%c",81);
//	return 0;
//}


//int main() 
//{
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(long));
//	printf("%zd\n", sizeof(_Bool));
//	printf("%zd\n", sizeof(char));
//	printf("%zd\n", sizeof(float));
//	printf("%zd\n", sizeof(long long));
//	printf("%zd\n", sizeof(double));
//	printf("%zd\n", sizeof(long double));
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a++;
//	//后置++
//	//b=a   a++  先使用后加1
//
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//}

//int main()
//{
//	int a = 10;
//	int b = ++a;
//	//前置++
//	//先加1，后使用
//
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//}

//int main()
//{
//	int mice = (int)1.4 +(int)1.7;
//	printf("%d\n", mice);
//	return 0;
//
//}

//int main()
//{
//	printf("%s will come at %d o'clock\n", "zhangsan", 10); 
//    printf("he scores %c\n",'a');
//	return 0;
//}

//int main()
//{
//	printf("%5d\n", 123);
//	printf("%5d\n", 12345);
//	printf("%-5d\n", 123456);
//	printf("%-5d", 123);
//	printf("hhhh");
//	return 0;
//}

//printf("%+d\n", 90);
	//printf("%+d\n", -90);

	//printf("%.2f", 1.236);
	//printf("%10.2f", 1.2345);

	//printf("%.4s", "james");

//int score=0;
	//printf("请输入成绩：");
	//scanf("%d", &score);
	//printf("成绩是%d", score);

	//int a = 0;
	//int b = 0;
	//float c = 0.0f;
	//int r ;
	//while ((r=(scanf("%d%d%f", &a, &b, &c))) == 3)
	//{
	//	printf("a=%d,b=%d,c=%f\n", a, b, c);
	//	printf("r=%d", r);
	//	
	//}


/*	char c;
	scanf(" %c", &c);//%前面的空格作用是忽略输入的空格符
	printf("%c", c);
*/

//int main()
//{
//	printf("this is an\
// apple.\n");
//	
//
//	return 0;



//int main()
//{
//	int year;
//	int month;
//	int date;
//	scanf("%d%*c%d%*c%d", &year, &month, &date); 
//	printf("%d %d %d", year, month, date);
//	return 0;
//}

	//int num;
	//printf("请输入数字：");
	//scanf("%d", &num);
	//if (num % 2 == 0)
	//	printf("oushu");
	//else
	//	printf("jishu");

	//int age = 0;
	//scanf("%d", &age);
	//if (age < 18)
	//	printf("未成年\n");
	//else if (age <= 44)
	//	printf("壮年\n");
	//else if (age <= 59)
	//	printf("中年");
	//else if (age <= 89)
	//	printf("老年");
	//else
	//	printf("老寿星");


//int main()
//{
//	int flag = 0;
//	scanf("%d", &flag);
//
//	if (flag)//判断flag真假
//		printf("lele");
//	if (!flag)
//		printf("gege");
//	return 0;
//}


//int main()
//{
//	int year = 0;
//	printf("请输入年份：");
//	scanf("%d", &year);
//
//
//	//第一种方法
//	//if (year % 4 == 0 && year % 100 != 0)
//	//	printf("闰年\n");
//	//else if (year % 400 == 0)
//	//	printf("闰年\n");
//	//else
//	//	printf("不是闰年\n");
//
//	//第二种方法
//	//printf((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ? "是闰年\n" : "不是闰年\n");
//}


//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = (a++ && ++b && d++);
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d); 
//	printf("%d", i);
//	return 0;
//}


//int main()
//{
//	int date = 0;
//	scanf("%d", &date);
//	switch (date)
//	{
//	case 1:
//		printf("星期一");
//		break;
//	case 2:
//		printf("星期二");
//		break;
//	case 3:
//		printf("星期三");
//		break;
//	case 4:
//		printf("星期四");
//		break;
//	case 5:
//		printf("星期五");
//		break;
//	case 6:
//		printf("星期六");
//		break;
//	case 7:
//		printf("星期天");
//		break;
//	default:
//		printf("error");
//		break;
//	}
//}


//int main()
//{
//	int num =1 ;
//	while (num < 11)
//	{
//		printf("%d ", num);
//		num++;
//	}
//	return 0;
//}

//int main()
//{
//	int num;
//	scanf("%d", &num);
//	while (num)
//	{
//		int g = num % 10;
//		num = num / 10;
//		printf("%d ", g);
//	}
//}


//int main()
//{
//	for (int num = 1; num <= 10; num++)
//		printf("%d\n", num);
//}

//int main()
//{
//	int sum = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			sum += i;
//	}
//	printf("%d", sum);
//	return 0;
//}


//int i = 1;
	//do
	//{
	//	printf("%d ", i);
	//	i++;
	//} while (i <= 10);


//int main()
//{
//	int num = 0;
//	int sum = 0;
//	printf("请输入数字：");
//	scanf("%d", &num);
//	do
//	{
//		num = num / 10;
//		sum ++;
//	} while (num);
//	printf("%d", sum);
//	return 0;
//}


//break和continue的用法：
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		
//	}
//	return 0;
//}


//循环嵌套
//素数判断
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//
//		if (i == j)
//			printf("%d\n", i);
//	}
//	
//	return 0;
//}


//优化方法
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		int judge = 1;//假设i是素数
//		for (j = 2; j <=sqrt(i); j++)//写成i=a*b,有一个因子一定小于sqrt（i）
//		{
//			if (i % j == 0)
//			{
//				judge = 0;
//				break;
//			}
//		}
//		if (judge)
//			printf("%d\n", i);
//	}
//	return 0;
//}



//使用goto语句的场景：在多个循环嵌套想要跳出来时
//for (;)
//{
//	for (;)
//	{
//		for (;)
//		{
//			if (disaster)
//				goto error;
//		}
//	}
//}
//
//error:.....


//关机程序
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char input[50] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑在1分钟内关机\n");
//	printf("输入我是小乐乐，取消关机\n");
//	scanf("%s", input);
//
//	if (strcmp(input, "我是小乐乐")==0)
//	{
//		system("shutdown -a");
//		printf("你很乖");
//	}
//	else
//	    goto again;
//
//	return 0;
//}


//随机数生成
// 
//一.生成随机数的函数rand：  int rand(void);
//
//#include <stdlib.h>
//int main()
//{
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	return 0;
//}
// 
//   其实rand函数⽣成的随机数是伪随机的，
//   伪随机数不是真正的随机数，是通过某种算法⽣成的随机数
//   ⽽rand函数是对⼀个叫“种⼦”的基准值进⾏运算⽣成的随机数
//   之所以前⾯每次运⾏程序产⽣的随机数序列是⼀样的，
//   那是因为rand函数⽣成随机数的默认种⼦是1。
//   如果要⽣成不同的随机数，就要让种⼦是变化的
//
//二.函数srand⽤来初始化随机数的⽣成器：void srand (unsigned int seed);
// 
//   程序中在调⽤rand函数之前先调⽤srand函数，通过srand函数的参数seed来设置rand函数⽣成随
//   机数的时候的种⼦，只要种⼦在变化，每次⽣成的随机数序列也就变化起来了。
//   那也就是说给srand的种⼦是如果是随机的，rand就能⽣成随机数；
//   在⽣成随机数的时候⼜需要⼀个随机数，这就⽭盾了。
//
//三.在程序中我们⼀般是使⽤程序运⾏的时间作为种⼦的，因为时间时刻在发⽣变化的。
//   time函数:  time_t time (time_t* timer);
//   time函数会返回当前的⽇历时间，其实返回的是1970年1⽉1⽇0时0分0秒到现在程序运⾏时间之间的
//   差值，单位是秒。返回的类型是time_t类型的，
//   time_t类型本质上其实就是32位或者64位的整型类型。
//   time函数的参数timer如果是⾮NULL的指针的话，
//   函数也会将这个返回的差值放在timer指向的内存中带回去。
//   如果timer是NULL，就只返回这个时间的差值。
//   time函数返回的这个时间差也被叫做：时间戳。
//   time函数的时候需要包含头⽂件：time.h
//   只是让time函数返回时间戳





//
//#include <math.h>
//#include <stdlib.h>
//#include <string.h>
//void game()
//{
//	rand
//
//}
//
//
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		printf("--------------------------");
//		printf("------   1.paly   --------");
//		printf("------   2.exit   --------");
//		printf("--------------------------");
//		printf("请输入：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//函数
//			printf("猜数字\n");
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择");
//			break;
//		}
//	} while (input);
//
//	return 0;
//
//}
