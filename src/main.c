/*
 * @Description: user main file
 * @FilePath: \test\src\main.c
 * @Version: 1.0
 * @Autor: daixinwen
 * @Date: 2019-12-22 21:25:14
 * @LastEditors  : daixinwen
 * @LastEditTime : 2019-12-27 21:36:02
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

    quick_sort(arr, 0, 9);
    
    printf("after sort:");
    for(i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    printf("\n\n");
    return 0;
}

