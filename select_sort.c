/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   Filename    ：select_sort.c
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2018年12月23日
*   Description ：选择排序算法实现
================================================================*/
#include <stdio.h>

int main() {

    int arr[] = {1, 0, 3, 12, 8, 7, 8, 1, 3, 6, 5};

    for (int i = 0 ; i < sizeof(arr) / sizeof(int); i++)
        printf("%d ", arr[i]);
    printf("\n");


    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        for (int j = i + 1; j < sizeof(arr) / sizeof(int); j++) {
            if (arr[i] > arr[j]) {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }


    for (int i = 0 ; i < sizeof(arr) / sizeof(int); i++)
        printf("%d ", arr[i]);

    return 0;
}

