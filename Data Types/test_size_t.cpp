#include <iostream>
#include <vector>

int main() {
    std::vector<int> v = {1, 2, 3};
    int i = -1;
    
    // since size_t can hold only pasitive value, k becomes very large value (18446744073709551615)
    size_t k = -1;

    // Dangerous: Comparing signed (i) with unsigned (v.size())
    std::cout << "Printing the value of v.size(): " << v.size() <<std::endl;
    // if (i < static_cast<int>(v.size())) {  # This line works as expected
    std::cout << "value of k is: " << k << std::endl;
    if (i < v.size()) { 
        std::cout << "This might not work as expected!\n";
    } 
    
    else {
        std::cout << "i is treated as a huge number!\n";
    }

    return 0;
}