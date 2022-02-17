#include <iostream>

using namespace std;

int main()
{
    int nums[] = {1, 2, 5, 10, 12, 15, 99};
    int arrSize = sizeof(nums)/sizeof(nums[0]);
    
    for (int i = 0; i < arrSize; i++){
        if (nums[i] < 10){
            cout << nums[i] << "\n";
        }
    }
    
    return 0;
}