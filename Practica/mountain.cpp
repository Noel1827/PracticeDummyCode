#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool MountainArray(std::vector<int> nums)
{
  int i = 0;
while(nums[i] < nums[i++] && i < nums.size()){i++;}

while(nums[i] > nums[i++] && i < nums.size()){i++;}

return i == nums.size();
}

int main(){


    return 0;
}