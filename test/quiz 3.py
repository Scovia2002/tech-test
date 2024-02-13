//Question 3:power of 2//
#include <iostream>
using namespace std;

class PowerOfTwo {
public:
    bool isPowerOfTwo(int num) const {
        return num > 0 && (num & (num - 1)) == 0;
    }
};

int main() {
    PowerOfTwo powerObject;
    cout << std::boolalpha;  
    cout << powerObject.isPowerOfTwo(8) << "\n";
    cout << powerObject.isPowerOfTwo(6) << "\n";  
    return 0;
}
