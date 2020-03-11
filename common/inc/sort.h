/*
 * @Description: head file
 * @FilePath: \test\src\include\sort.h
 * @Version: 1.0
 * @Autor: daixinwen
 * @Date: 2019-12-22 22:23:45
 * @LastEditors  : daixinwen
 * @LastEditTime : 2020-01-12 16:44:53
 */
#ifndef __SORT_H
#define __SORT_H

extern void bubb_sort(int* data, int len);
extern void select_sort(int* data, int len);
extern void quick_sort(int* data, int begin, int end);
extern void insert_sort(int* data, int len);
extern void Binsert_sort(int* data, int len);
extern void shell_sort(int* data, int len);
extern void merge_sort(int* src, int* dst, int low, int high, int len);

#endif
