/*************************************************************************
    > File Name: merge_sort.cpp
    > Author: liuwei
    > Mail: 271551048@qq.com
    > Created Time: 2015年08月27日 星期四 16时44分46秒
    > 归并排序
 ************************************************************************/

#include<iostream>
#define MAXSIZE 10
using namespace std;

void Merging(int *list1, int list1_size, int *list2, int list2_size)
{
        int i = 0, j = 0, k = 0;
        int temp[MAXSIZE];
        while(i < list1_size && j < list2_size)
        {
                if(list1[i] < list2[j])
                {
                        temp[k++] = list1[i++];
                }
                else
                {
                        temp[k++] = list2[j++];
                }
        }
        while(i < list1_size)
        {
                temp[k++] = list1[i++];
        }
        while(j < list2_size)
        {
                temp[k++] = list2[j++];
        }

        //把temp中排好序的内容放到list1中
        for(int m = 0; m < list1_size + list2_size; m++)
        {
                list1[m] = temp[m];
        }
}

void MergeSort(int array[], int length)
{
        if(length > 1)
        {
                int *list1 = array;  //list1指向链表的前一部分
                int list1_size = length/2;
                int *list2 = array + length/2; //list指向链表的后一部分
                int list2_size = length - length/2;

                MergeSort(list1, list1_size);
                MergeSort(list2, list2_size);

                Merging(list1, list1_size, list2, list2_size);
        }
}

int main()
{
        int a[10] = {34, 90, 18, 100, 67, 12, 9, 111, 67, 80};
        MergeSort(a, 10);
        for(int i = 0; i < 10; i++)
                cout << a[i] << " ";
}
