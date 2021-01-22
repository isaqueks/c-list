#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "list.h"

int main()
{

    List *list = create_list(sizeof(int), 7);

    int arr[8] = {
        2,
        4,
        8,
        16,
        32,
        64,
        128,
        256};


    for (int i = 0; i < 8; i++)
    {
        list_add(list, &arr[i]);
    }

    int k = 0;
    for (int j = 3; j < 5; j ++)
        list_remove_at(list, j-k++);

    memset(arr, 0, sizeof(arr));

    printf("used (allocated): %d (%d)\n", list->usedLength, list->allocatedLength);
    for (int i = 0; i < list->usedLength; i++)
    {
        int value = *(int *)list_get(list, i);
        printf("i = %d, value = %d.\n", i, list_get_value(list, i, int));
    }

    return 0;
}