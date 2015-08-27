/*************************************************************************
    > File Name: select.cpp
    > Author: liuwei
    > Mail: 271551048@qq.com
    > Created Time: 2015年08月28日 星期五 01时01分50秒
    >选择排序
 ************************************************************************/

#include<iostream>
using namespace std;

void SelectSort(int array[], int length)
{
        for(int i = 0; i < length; i++)
        {
                int min = i; //min保存最小值对应的下标
                for(int j = i + 1; j < length; j++)
                {
                        if(array[j] < array[min])
                                min = j;
                }
                if(min != i)
                {
                        int temp = array[min];
                        array[min] = array[i];
                        array[i] = temp;
                }
        }
}

int main()
{
        int a[5] = {15, 17, 8, 10, 20};
        SelectSort(a, 5);
        for(int i = 0; i < 5; i++)
                cout << a[i] << " ";
}
