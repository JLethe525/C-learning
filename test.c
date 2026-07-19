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


int main()
{
	int num = 0;
	int sum = 0;
	printf("请输入数字：");
	scanf("%d", &num);
	do
	{
		num = num / 10;
		sum ++;
	} while (num);
	printf("%d", sum);
	return 0;
}

