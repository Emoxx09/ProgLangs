#include <iostream>

using namespace std;

int main()
{
    int nums[] = {1, 2, 5, 10, 12, 15, 99};
    int sum = 0;
    int arrSize = sizeof(nums)/sizeof(nums[0]);
    
    for (int i = 0; i < arrSize; i++){
        sum = sum + nums[i];
    }
    
    cout << sum;
    return 0;
}