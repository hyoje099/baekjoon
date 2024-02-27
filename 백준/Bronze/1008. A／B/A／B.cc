#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    
    cout.precision(30);    // 출력값의 소수점 자리수를 설정합니다.
    cout << (double)A / B << endl;
    
    return 0;
}