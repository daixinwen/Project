/*
 * @Author: daixinwen
 * @Date: 2020-01-11 11:49:28
 * @LastEditors  : daixinwen
 * @LastEditTime : 2020-01-12 16:47:14
 * @FilePath: /Project/apps/src/sort.c
 * @Description: 经典排序算法
 * @Version: v1.0
 */
#include <stdio.h>
#include <stdlib.h>
/**
 * @description: 
 * @param {type} 
 * @return: 
 * @author: daixinwen
 */
void bubb_sort(int *data, int len)
{
    int i = 0;
    int j = 0;
    int tmp = 0;
    for(i = 0; i < len - 1; i++)
    {
        for(j = 0; j < len - 1 - i; j++)
        {
            if(data[j] < data[j + 1])
            {
                tmp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = tmp;
            }
        }
    }
    return;
}

/**
 * @description: 选择排序
 * @param {type} 
 * @return: 
 * @author: daixinwen
 */
void select_sort(int *data, int len)
{   
    int i = 0;
    int j = 0;
    int tmp = 0;
    for(i = 0; i < len - 1; i++)
    {
        for(j = i + 1; j < len; j++)
        {
            if(data[i] < data[j])
            {
                tmp = data[i];
                data[i] = data[j];
                data[j] = tmp;
            }
        }
    }
    return;
}

/**
 * @description: 快速排序
 * @param {type} 
 * @return: 
 * @author: daixinwen
 */
void quick_sort(int* data, int begin, int end)
{   
    int tmp = data[begin];
    if(begin >= end)
    {
        return;
    }
    while(end > begin)
    {
        while(data[end] >= tmp && end > begin)
        {
            end--;
        }
        data[begin] = data[end];
        while(data[begin] <= tmp && end > begin)
        {
            begin++;
        }
        data[end] = data[begin];
    }
    data[begin] = tmp;
    quick_sort(data, 0, begin - 1);
    quick_sort(data, begin + 1, end);
    return;
}

/**
 * @description: 插入排序
 * @param {type} 
 * @return: 
 * @author: daixinwen
 */
void insert_sort(int* data, int len)
{
    int i = 0;
    int j = 0;
    int tmp = 0;
    for(i = 1; i < len; i++)
    {
        tmp = data[i];
        j = i - 1;
        while(j >= 0 && tmp < data[j])
        {
            data[j + 1] = data[j];
            j--;
        }
        if(j != (i - 1))
        {
            data[j + 1] = tmp;
        }
    }
}

/**
 * @description: 折半插入排序，插入排序的基本操作时在一个有序表中进行查找插入的，
 *               查找用折半查找来实现
 * @param {type} 
 * @return: 
 * @author: daixinwen
 */
void Binsert_sort(int* data, int len)
{
    int i = 0;
    int j = 0;
    int tmp = 0;
    int low = 0;
    int high = 0;
    int mid = 0;
    for(i = 1; i < len; i++)
    {
        tmp = data[i];
        j = i - 1;
        low = 0;
        high = i - 1;
        while(low <= high)
        {
            mid = (low + high) / 2;
            if(tmp > data[mid])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        for(j = i - 1; j >= high + 1; j--)
        {
            data[j + 1] = data[j];
        }
        data[high + 1] = tmp;
    }
}

/**
 * @description: 希尔排序先将待排序列分割成若干个子序列分别进行直接插入排序，
 *               待整个序列中的记录基本有序时，再对全体进行依次直接插入排序
 * @param {type} 
 * @return: 
 * @author: daixinwen
 */
void shell_sort(int* data, int len)
{
        int gap = 1;
        int i = 0;
        int j = 0;
        int tmp = 0;
        while (gap < len/4) 
        {
            gap = gap * 4 + 1;
        }

        while (gap > 0) 
        {
            for (i = gap; i < len; i++) 
            {
                tmp = data[i];
                j = i - gap;
                while (j >= 0 && data[j] > tmp) 
                {
                    data[j + gap] = data[j];
                    j -= gap;
                }
                data[j + gap] = tmp;
            }
            gap = (int) (gap / 4);
        }
        return ;
}

/**
 * @description: 合并函数，将一个数组（以mid为中间，左右两个是有序的子数组）重新
 *               组装成一个有序的数组
 * @param {type} 
 * @return: 
 * @author: daixinwen
 */
void merge(int* src, int* dst, int low, int high, int mid)
{
    int i = low;
    int j = mid + 1;
    int k = low;
    while (i <= mid && j <= high)
    {
        if (src[i] < src[j])
        {
            dst[k++] = src[i++];
        }
        else
        {
            dst[k++] = src[j++];
        }
    }
    while(i <= mid)
    {
        dst[k++] = src[i++];
    }
    while(j <= high)
    {
        dst[k++] = src[j++];
    }
}

/**
 * @description: 归并排序 两个思想，分治-合并
 * @param {type} 
 * @return: 
 * @author: daixinwen
 */
void merge_sort(int* src, int* dst, int low, int high, int len)
{
    int mid = (low + high) / 2;
    int* tmpDst = NULL;
    if(low == high)
    {
        dst[low] = src[low];
    }
    else
    {
        tmpDst = malloc(sizeof(int) * len);
        if(NULL != tmpDst)
        {
            merge_sort(src, tmpDst, low, mid, len);
            merge_sort(src, tmpDst, mid + 1, high, len);
            merge(tmpDst, dst, low, high, mid);
        }
        free(tmpDst);
    }
}

