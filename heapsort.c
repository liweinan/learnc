#include <stdio.h>

/*-------堆排序----------*/
void
swap(int *a, int *b) {
    int swap;
    swap = *a;
    *a = *b;
    *b = swap;
}
//
//int main(void) {
//    int x = 1;
//    int y = 2;
//    swap(&x, &y);
//    printf("x: %d\n", x);
//    printf("y: %d\n", y);
//}

//保持最大堆性质
void
heapfiy(int *a, int size, int n) {
    int left = 2 * n + 1;
    int right = 2 * n + 2;
    int max = n;
    if (left <= size && a[n] < a[left])
        max = left;
    if (right <= size && a[max] < a[right])
        max = right;
    if (max != n)//如果元素发生变化了，那么需要继续调用
    {
        swap(&a[max], &a[n]);
        heapfiy(a, size, max);
    }

}

//创建最大堆
void
build_heap(int *a, int size) {
    int k;
    for (k = size; k >= 0; k--)
        heapfiy(a, size, k);
}


//实现堆排序
void heapSort(int *a, int size) {
    build_heap(a, size);
    while (size > 0) {
        swap(&a[0], &a[size--]);
        heapfiy(a, size, 0);
    }
}

//
int main() {
    int data[10] = {2, 3, 1, 8, 4, 9, 10, 5, 7, 6};
    int i;
    printf("原始数组： ");
    for (i = 0; i < 10; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");
    printf("堆排序： ");
    heapSort(data, 10);
    for (i = 0; i < 10; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");
}