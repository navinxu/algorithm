/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   Filename    ：bubble_sort.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2018年12月23日
*   Description ：冒泡排序算法实现
================================================================*/
#include <stdio.h>

void swap(int *num1, int *num2) {
    int tmp = * num1;
    * num1 = * num2;
    * num2 = tmp;
}

int main() {


    int arr[] = {1, 0, 3, 12, 8, 7, 8, 1, 3, 6, 5};
    int len = sizeof(arr) / sizeof(int);

    for (int i = 0 ; i < len; i++)
        printf("%d ", arr[i]);
    printf("\n");

    for (int i = 0; i < len; i ++) {
        for (int j = 0; j < len - i - 1; j ++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]); 
            }
        }
    }

    for (int i = 0 ; i < len; i++)
        printf("%d ", arr[i]);
    

    return 0;
}

