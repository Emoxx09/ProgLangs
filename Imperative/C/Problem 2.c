#include <stdio.h>

int main() {
    int nums[7] = {1, 2, 5, 10, 12, 15, 99};
    int sum = 0;
    int arrSize = sizeof nums / sizeof nums[0];
    
    for (int i = 0; i < arrSize; i++){
        sum = sum + nums[i];
    }
    int avg = sum/arrSize;

    printf("%d", avg);
    return 0;
}