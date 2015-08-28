/*************************************************************************
    > File Name: heapsort.cpp
    > Author: liuwei
    > Mail: 271551048@qq.com
    > Created Time: 2015年08月27日 星期四 19时49分08秒
 ************************************************************************/

#include<iostream>
using namespace std;

void Swap(int array[], int a, int b)
{
        int temp = array[a];
        array[a] = array[b];
        array[b] = temp;
}

//调整array这个数组，使它的第s个元素到第n个元素之间满足大顶堆
void HeapAdjust(int array[], int s, int n)
{
        int temp;
        temp = array[s];

        //2*s表示s的左孩子
        for(int i = 2*s; i <= n; i*=2)
        {
                //s的左孩子小于s的右孩子
                if(i < n && array[i] < array[i+1])
                {
                        i++;  //i指向s的左右孩子中较大的孩子
                }

                //父节点大于左右两个孩子，不需要调整
                if(temp >= array[i])
                        break;

                array[s] = array[i];
                s = i;
        }
        array[s] = temp;
}

void HeapSort(int array[], int length)
{
        for(int i = length/2; i > 0; i--)  //n/2表示从下往上看，最后一个需要调整的子堆的根
                HeapAdjust(array, i, length); //调整array这个堆的第i个节点到第n个节点为大顶堆

        for(int i = length; i > 1; i--)
        {
                //经过调整之后，已经构成大顶堆
                //此时交换对顶元素和最后一个元素，即取出大顶堆元素，则为最大值
                Swap(array, 1, i);
                //取出大顶堆之后，则打乱了之前的大顶堆，此时重新调整剩下的元素构成大顶堆
                HeapAdjust(array, 1, i - 1);
        }
}

int main()
{
        //有效数据是5,2,6,0,3,9,1,7,4,加-1是为了方便，-1不参与排序
        int a[] = {-1, 5, 2, 6, 0, 3, 9, 1, 7, 4};
        HeapSort(a, 9);
        for(int i = 1; i < 10; i++)
                cout << a[i] << " ";
}
