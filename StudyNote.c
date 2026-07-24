#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//array数组
// 
//int arr[20];
//int是数组元素的类型；int [10]是数组的类型


//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i <10; i++)
//	{
//		scanf("%d", &arr[i]);//数组元素还是需要取地址，数组不用取
//	}
//	for (i = 0; i <10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d]=%p\n", i,&arr[i]);//%p用来打印地址的
//	}
//	return 0;
//}
//结果：
//     & arr[0] = 0000003AA32FF7A8
//     & arr[1] = 0000003AA32FF7AC
//     & arr[2] = 0000003AA32FF7B0
//     & arr[3] = 0000003AA32FF7B4
//     & arr[4] = 0000003AA32FF7B8
//     & arr[5] = 0000003AA32FF7BC
//     & arr[6] = 0000003AA32FF7C0
//     & arr[7] = 0000003AA32FF7C4
//     & arr[8] = 0000003AA32FF7C8
//     & arr[9] = 0000003AA32FF7CC
//每相邻元素差4（整型int字节为4),说明是连续存放。


//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	printf("%zu\n", sizeof(arr));//计算整个数组的大小，单位是字节。
//	printf("%zu\n", sizeof(arr[0]));//计算一个元素的大小。
//	printf("%zu\n", sizeof(arr) / sizeof(arr[0]));//计算数组的元素个数。
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//}


//二维数组
// 
//type arr[10][6]: 【行】【列】
//
//int arr[3][5] = { 1,2,3 };//不完全初始化
//int arr1[3][5] = { {1,2},{2,3},{3,4} };//按行初始化
//int arr2[][5] = {1,2,3};//行可以省，列不可以省
//


//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[3][5] = { 0 };
//	printf("请输入数字：");
//	for (i = 0; i < 3; i++)//行
//	{
//		for (j = 0; j < 5; j++)//列
//		{
//			scanf("%d",&arr[i][j]);//输入
//		}
//	}
//	for (i = 0; i < 3; i++)//行
//	{
//		for (j = 0; j < 5; j++)//列
//		{
//			printf("%d ",arr[i][j]);//输出
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//二维数组存放也是连续的。
//
//
//变长数组（变量长度数组）
//1.无法初始化
//2.给定之后无法改变(clang编译器可以，MSVC不可以）
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[n];
	int i = 0;
	for (i = 0; i < n; i++)
	{
		arr[i]=i+1;
		printf("%d ", arr[i]);
	}
	return 0;
}