#include <iostream>

using namespace std;

int sumOfDigits(int n) {
    if(n == 0)  // شرط توقف: زمانی که عدد به صفر برسد
        return 0;
    return (n % 10) + sumOfDigits(n / 10);  // جمع آخرین رقم با مجموع ارقام باقی‌مانده
}

int main() {
    int num = 12345;
    cout << "Sum of digits of " << num << " is: " << sumOfDigits(num) << endl;
    return 0;
}
