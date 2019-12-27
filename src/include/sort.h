/*
 * @Description: head file
 * @FilePath: \test\src\include\sort.h
 * @Version: 1.0
 * @Autor: daixinwen
 * @Date: 2019-12-22 22:23:45
 * @LastEditors  : daixinwen
 * @LastEditTime : 2019-12-26 23:04:41
 */
#ifndef __SORT_H
#define __SORT_H

extern void bubb_sort(int* data, int len);
extern void select_sort(int* data, int len);
extern void quick_sort(int* data, int begin, int end);
extern void insert_sort(int* data, int len);
extern void Binsert_sort(int* data, int len);
extern void shell_sort(int* data, int len);

#endif
