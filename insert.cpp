/*************************************************************************
    > File Name: insert.cpp
    > Author: liuwei
    > Mail: 271551048@qq.com
    > Created Time: 2015年08月28日 星期五 00时15分30秒
    > 插入排序
 ************************************************************************/

#include<iostream>
using namespace std;
void InsertSort(int array[], int length)
{
        if(NULL == array || length < 0)
                return ;

        for(int i = 1; i < length; i++)
        {
                int temp = array[i]; //将array[i]保存起来
                int j = i;
                while(j > 0 && temp < array[j-1])
                {
                        array[j] = array[j-1];
                        j--;
                }
                array[j] = temp;
        }
}

int main()
{
        int a[5] = {13, 18, 5, 2, 10};
        InsertSort(a, 5);
        for(int i = 0; i < 5; i++)
                cout << a[i] << " ";
}
