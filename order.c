#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int findAddressStructureIndexByOrderList(int (*pOrderListArray)[4], int *pOrderList) {
    for (int i = 0; i < 12; i++) {
        if (pOrderListArray[i][0] == pOrderList[0] &&
            pOrderListArray[i][1] == pOrderList[1] &&
            pOrderListArray[i][2] == pOrderList[2] &&
            pOrderListArray[i][3] == pOrderList[3]) {
            return i;
        }
    }
    return -1;
}


int main() {
    int AddressStructure[12][2] = {{0, 0},
                                   {3, 0},
                                   {0, 1},
                                   {3, 1},
                                   {0, 2},
                                   {3, 2},
                                   {0, 3},
                                   {3, 3},
                                   {0, 4},
                                   {3, 4},
                                   {0, 5},
                                   {3, 5}};

    int OrderListArray[12][4] = {{0, 1, 2, 3},
                                 {1, 0, 2, 3},
                                 {2, 1, 0, 3},
                                 {0, 1, 3, 2},
                                 {1, 0, 3, 2},
                                 {1, 2, 3, 0},
                                 {2, 1, 3, 0},
                                 {2, 3, 0, 1},
                                 {3, 2, 0, 1},
                                 {2, 3, 1, 0},
                                 {3, 2, 1, 0}};

    int (*pAddressStructure)[2] = AddressStructure;

    int (*pOrderListArray)[4] = OrderListArray;

    int orderlist[4] = {3, 2, 1, 0};
    int *pOrderList = orderlist;

    // find address structure index by order
    int idx = findAddressStructureIndexByOrderList(pOrderListArray, pOrderList);
    printf("idx: %d\n", idx);
    if (idx > -1) {
        printf("v: {%d,%d}\n", pAddressStructure[idx][0], pAddressStructure[idx][1]);
    }
}

