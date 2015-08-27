/*************************************************************************
    > File Name: bubble.cpp
    > Author: liuwei
    > Mail: 271551048@qq.com 
    > Created Time: 2015年08月27日 星期四 23时40分43秒
    > 冒泡排序
 ************************************************************************/

#include<iostream>
using namespace std;
void BubbleSort(int array[], int length)
{
	for(int i = 0; i < length; i++)
		for(int j = length - 1; j > i; j--)
		{
			if(array[j] < array[j-1])
			{
				int temp = array[j];
				array[j] = array[j-1];
				array[j-1] = temp;
			}
		}
}

int main()
{
	int a[5] = {12, 23, 89, 6, 9};
	BubbleSort(a, 5);
	for(int i = 0; i < 5; i++)
		cout << a[i] << " ";
}
