//Without VLA
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int k, ipt;
    scanf("%d", &k);
//    int* nums = malloc(k * sizeof(int));
    int* nums = (int*)malloc(k * sizeof(int));
    if (nums == NULL) {
        printf("메모리 할당 실패\n");
        return 1;
    }
    for (int i = 0; i < k; i++)
    {
        scanf("%d", &ipt);
        nums[i] = ipt;
        printf("%d\n", nums[i]);
    }
    free(nums);
    return 0;
}
