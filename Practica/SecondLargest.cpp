#include <iostream>
#include <string>
#include <vector>

using namespace std;

int secondLargest(vector<int> nums)
{
    if (nums.size() < 2)
        return -1;
    int biggest, secondbiggest;

    if (nums[0] > nums[1])
    {
        biggest = nums[0];
        secondbiggest = nums[1];
    }
    else
    {
        biggest = nums[1];
        secondbiggest = nums[0];
    }


    for(int i = 2; i < nums.size(); i++){
        if(nums[i] > biggest){
            biggest = nums[i];
            secondbiggest= biggest;
        }
    }

    return secondbiggest;
}

int main()
{
    vector<int> nums = {2, 3,7,9,8};
    int secondlargest = secondLargest(nums);
    cout << secondlargest;

    return 0;
}