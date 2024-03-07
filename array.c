//My first array code example
#include <stdio.h>

int main() {
    int k, ipt;
    scanf("%d", &k);
    int nums[k];
    for (int i = 0; i < k; i++)
    {
        scanf("%d", &ipt);
        nums[i] = ipt;
        printf("%d\n", nums[i]);
    }
    return 0;
}
