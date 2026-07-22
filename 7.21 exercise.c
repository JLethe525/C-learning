#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//P60 第三章练习
// 
//第二题  输入ASCII码值返回字符
//int main()
//{
//	int num;
//	printf("请输入ASCII码值：");
//	scanf("%d", &num);
//	printf("%c\n", num);
//
//	return 0;
//}


//第三题 发出警报\a
//int main()
//{
//	printf("Startled by the sudden sound,Sally shouted:\a\n");
//	printf("By the Great Pumpkin,what was that.");
//
//	return 0;
//}


//第四题
//int main()
//{
//	float num;
//	printf("输入一个浮点数：");
//	scanf("%f", &num);
//	printf("小数点形式：%f\n", num);
//	printf("指数形式：%e\n", num);
//	printf("十六进制形式：%a\n", num);
//
//	return 0;
//}


//第五题 年龄转换对应的秒数
//int main()
//{
//	long double trans = 3.156e07;
//	int age = 0;
//	long double seconds = 0;
//	printf("请输入你的年龄:");
//	scanf("%d", &age);
//	seconds = age * trans;
//	printf("对应的秒数为：%Lf\n",seconds);
//
//	return 0;
//}


//第六题 水的夸脱数和水分子数量计算
//int main()
//{
//	long double m = 3.0e-23;
//	double kuatuo = 950.0;
//	int num = 0;
//	printf("请输入夸脱数：");
//	scanf("%d", &num);
//	printf("%Lf\n", num * kuatuo / m);
//
//	return 0;
//}


//第七题 英寸厘米换算
//int main()
//{
//	double trans = 2.54;
//	double inch = 0;
//	printf("请输入身高（英寸）：");
//	scanf("%lf", &inch);
//	printf("你的身高是%lf厘米\n", inch * trans);
//
//	return 0;
//}


//第8题 容量换算
//int main()
//{
//	float num = 0.0f;
//	float a = 2.0f;
//	float b = 8.0f;
//
//	printf("请输入杯数：");
//	scanf("%f", &num);
//	printf("等于%f品脱\n", num / a);
//	printf("等于%f盎司\n", num * b);
//	printf("等于%f汤勺\n", num * b / 2);
//	printf("等于%f茶勺\n", num * b / 2 * 3);
//
//	return 0;
//}


//P86 第四章练习
//第一题 打印名和姓
//int main()
//{
//	char givenname[40];
//	char familyname[40];
//	printf("输入名和姓：");
//	scanf("%s%s", givenname, familyname);
//	printf("%s,%s", givenname, familyname);
//	return 0;
//}


//第二题 姓名多种打印效果
//#include <string.h>
//int main()
//{
//	char name[100];
//	printf("请输入你的姓名：");
//	scanf("%s", name);
//	printf("\"%s\"\n", name);//a：加双引号
//	printf("\"%20s\"\n", name);//b:加双引号并且右对齐字段宽度20
//	printf("\"%-20s\"\n", name);//c:----------左对齐---------
//
//	int len = strlen(name)+3;//d：字段宽度比姓名大于3
//	printf("%*s\n", len, name);
//
//	return 0;
//}


//第三题  浮点数多种打印效果
//int main()
//{
//	float num = 21.30f;
//	printf("The input is %.1f or %.1e.\n", num, num);
//	printf("The input is %+.3f or %.3E.\n", num, num);
//	
//	return 0;
//}


//第四题  显示姓名和身高
//int main()
//{
//	float height =0.0f;
//	char name[40];
//	printf("请输入身高(cm)和姓名：");
//	scanf("%f%s", &height, name);
//	printf("%s,you are %.2f feet tall.", name, height / 100.0);
//
//	return 0;
//}


//第五题 文件下载速度
//int main()
//{
//	float speed = 0.0f;
//	float size = 0.0f;
//	printf("请输入下载速度(Mb/s)和文件大小(MB):");
//	scanf("%f%f", &speed, &size);
//	float time = size * 8 / speed;
//	printf("At %.2f megabits per second,a file of %.2f megabytes\n", speed, size);
//	printf("downloads in %.2f seconds\n", time);
//
//	return 0;
//}


//第六题  姓名和其字数多少对齐
//#include <string.h>
//int main()
//{
//	char givenname[40];
//	char familyname[40];
//	printf("输入名和姓:");
//	scanf("%s%s", givenname, familyname);
//	int familynum = strlen(familyname);
//	int givennum = strlen(givenname);
//	printf("%s %s\n", givenname, familyname);
//	printf("%-*d %-*d", givennum, givennum, familynum, familynum);
//
//	return 0;
//}


//第七题  float.h
//#include <float.h>
//int main()
//{
//	double num1 = 1.0 / 3.0;
//	float num2 = 1.0f / 3.0f;
//	printf("%.6f  %.6f\n", num1, num2);
//	printf("%.12f  %.12f\n", num1, num2);
//	printf("%.16f  %.16f\n", num1, num2);
//	printf("%d\n", FLT_DIG);
//	printf("%d\n", DBL_DIG);
//
//	return 0;
//}

