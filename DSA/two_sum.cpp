#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main(){
    unordered_map<int, int> d;
    vector<int> nums={2,7,11,15};
    int target = 9;
    for(int i=0; i<nums.size();i++){
        cout << (d.find(target-nums[i])) <<endl;
        if (d.find(target-nums[i]) != d.end()){
            cout << "Checking";
        }
        else{
            d[nums[i]]=i;
        }
    }

}