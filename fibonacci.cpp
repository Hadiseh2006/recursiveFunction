#include <iostream>

using namespace std;
int fibonacci(int n) {
    if (n == 0)  // شرط توقف
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);  // فراخوانی بازگشتی
}

int main() {
    int num = 7;
    cout << "Fibonacci number at position " << num << " is: " << fibonacci(num) << endl;
    return 0;
}
