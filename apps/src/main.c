/*
 * @Author: daixinwen
 * @Date: 2020-01-11 11:50:13
 * @LastEditors  : daixinwen
 * @LastEditTime : 2020-01-12 16:45:06
 * @FilePath: /Project/apps/src/main.c
 * @Description: 
 * @Version: v1.0
 */
#include <stdio.h>
#include "sort.h"

/**
 * @description: main function
 * @param {type} 
 * @return: 
 * @author: daixinwen
 */
int main(void)
{
    int i = 0;
    int arr[10] = {7, 11, 3, 4, 5, 2, 1, 8, 11, 6};
    printf("previous sort:");
    for(i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    printf("\n\n");

    //quick_sort(arr, 0, 9);
    merge_sort(arr, arr, 0, 9, 10);

    printf("after sort:");
    for(i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    printf("\n\n");
    return 0;
}

