/*
 * @Author: daixinwen
 * @Date: 2020-01-11 01:33:47
 * @LastEditors  : daixinwen
 * @LastEditTime : 2020-01-11 01:51:48
 * @Description: 
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
