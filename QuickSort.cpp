/*************************************************************************
    > File Name: quick.cpp
    > Author: liuwei
    > Mail: 271551048@qq.com
    > Created Time: 2015年08月28日 星期五 01时38分41秒
    > 快速排序
 ************************************************************************/

#include<iostream>
using namespace std;
void QuickSort(int array[], int left, int right)
{
        if(left > right)
                return ;

        if(left < right)
        {
                int low = left;
                int high = right;
                int temp = array[left];  //将第一个元素作为基准

                while(low < high)
                {
                        while(low < high && array[high] > temp)
                        {
                                high--;
                        }
                        array[low] = array[high];

                        while(low < high && array[low] < temp)
                        {
                                low++;
                        }
                        array[high] = array[low];
                }
                array[low] = temp;
                QuickSort(array, left, low - 1);
                QuickSort(array, low + 1, right);
        }
}

int main()
{
        int a[] = {15, 17, 10, 8, 20, 16};
        QuickSort(a, 0, 5);
        for(int i = 0; i < 5; i++)
                cout << a[i] << " ";
}
