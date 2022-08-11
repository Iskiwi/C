#pragma once


int compare_by_int(const void * a, const void * b);
int compare_by_char(const void * a, const void * b);
int compare_by_str(const void * a, const void * b);
void BubbleSort(void* array, size_t num, size_t size, int(*cmp)(void* a, void* b));
