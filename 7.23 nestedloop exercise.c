#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//用嵌套循环输出九九乘法表前 5 行
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			sum = j * i;
//			printf("%d*%d=%d ", j, i, sum);
//
//		}
//		printf("\n");
//	}
//}


//打印 4 行直角三角形星号：第 1 行 1 个 *，第 2 行 2 个 *，直到第 4 行
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 4; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}


//打印 2 行 5 列数字矩阵，数字按顺序 1、2、3、4、5 换行，第二行继续 6、7、8、9、10
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int num = 1;
//	for (i = 1; i <= 5; i++)
//	{
//		for (j = num; j < num + 5; j++)
//		{
//			printf("%d ", j);
//			
//		}
//		num += 5;
//		printf("\n");
//	}
//}


//优化
//#include <stdio.h>
//#define ROW 5
//#define COL 5
//int main()
//{
//	int i, k;
//	for (i = 1; i <= ROW; i++)
//	{
//		for (k = 1; k <= COL; k++)
//		{
//			printf("%d ", (i - 1) * COL + k);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//输入一个整数 n（n≤5），打印 n 行倒三角星号：n 个* 、n - 1 个 * ……1 个 *
//int main()
//{
//	int num = 0;
//	int i = 0;
//	printf("请输入一个整数：");
//	scanf("%d", &num);
//	if (num < 1 || num>5)
//	{
//		printf("输入需满足1~5\n");
//		return 1;
//	}
//	for (i = num; i >= 1; i--)
//	{
//		for (int j = i; j >= 1; j--)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//双重循环遍历 1~4 和 1~3，输出每一组两个数字的组合（如 1 1、1 2……4 3）
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 4; i++)
//	{
//		for (j = 1; j <= 3; j++)
//		{
//			printf("%d %d  ", i, j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//计算 1~5 每个数字的阶乘，用嵌套循环实现（外层控制数字，内层循环算阶乘）
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int sum = 1;
//	for (i = 1; i <= 5; i++)
//	{
// 	    int sum = 1;//每个数字单独初始化阶乘变量，天然隔离不同轮次计算，无需手动重置
//		for (j = 1; j <= i; j++)
//		{
//			sum *= j;
//		}
//		printf("%d的阶乘%d!等于%d\n", i, i, sum);	
//	}
//	return 0;
//}
// 
//优化
//#include <stdio.h>
//int main()
//{
//	int i, j;
//	int fac = 1;
//	for (i = 1; i <= 5; i++)
//	{
//		for (j = i; j <= i; j++) // 内层仅单次乘法，保留嵌套形式
//		{
//			fac *= j;
//		}
//		printf("%d的阶乘%d!等于%d\n", i, i, fac);
//	}
//	return 0;
//}


//统计 1~30 之间所有能同时被 2 和 3 整除的数字，每行打印 3 个数字
//单层循环（最常用
//#include <stdio.h>
//int main()
//{
//    int i, cnt = 0;
//    for (i = 1; i <= 30; i++)
//    {
//        if (i % 2 == 0 && i % 3 == 0)
//        {
//            printf("%d ", i);
//            cnt++;
//            if (cnt % 3 == 0) // 累计满3个就换行
//                printf("\n");
//        }
//    }
//    return 0;
//}
//
//嵌套循环
//#include <stdio.h>
//int main()
//{
//    int num = 6; // 首个符合条件的数
//    while (num <= 30)
//    {
//        for (int j = 0; j < 3 && num <= 30; j++)
//        {
//            printf("%d ", num);
//            num += 6;
//        }
//        printf("\n");
//    }
//    return 0;
//}
//
// 数组
//#include <stdio.h>
//int main()
//{
//    int arr[20]; // 存放筛选后的数字，容量预留充足即可
//    int count = 0, i;
//    // 第一步：把符合条件的存入数组
//    for (i = 1; i <= 30; i++)
//    {
//        if (i % 6 == 0)
//        {
//            arr[count++] = i;
//        }
//    }
//    // 第二步：遍历数组，每行打印3个
//    for (i = 0; i < count; i++)
//    {
//        printf("%d ", arr[i]);
//        if ((i + 1) % 3 == 0) printf("\n");
//    }
//    // 后续还能直接用arr数组求和、求最值，不用重新筛选
//    int sum = 0;
//    for (i = 0; i < count; i++) sum += arr[i];
//    printf("\n总和：%d", sum);
//    return 0;
//}
