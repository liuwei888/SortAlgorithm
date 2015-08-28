/*************************************************************************
    > File Name: sort.cpp
    > Author: liuwei
    > Mail: 271551048@qq.com
    > Created Time: 2015年08月26日 星期三 19时09分50秒
 ************************************************************************/

#include<iostream>
using namespace std;

void ShellSort(int array[], int length)
{
        int gap = length / 2;

        while(gap >= 1)
        {
                for(int i = gap; i < length; i++)
                {
                        int temp = array[i];
                        int j = 0;

                        //对距离gap的元素进行排序
                        for(j = i - gap; j >= 0 && temp < array[j]; j = j - gap)
                        {
                                array[j + gap] = array[j];
                        }
                        array[j + gap] = temp;
                }
                gap /= 2;
        }
}



int main()
{
        int a[10] = {2, 3, 5, 10, 18, 16, 90, 78, 100, 99};
        ShellSort(a, 10);
        cout << "希尔排序：";
        for(int i = 0; i < 10; i++)
                cout << a[i] << " ";
        cout << endl;

}
