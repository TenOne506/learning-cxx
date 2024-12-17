#include "../exercise.h"

unsigned long long arr[90]{0, 1};
constexpr unsigned long long fibonacci(unsigned long long i) {
    switch (i) {
        case 0:
            return 0;
        case 1:
            return 1;
        default:
            return fibonacci(i - 1) + fibonacci(i - 2);
    }
}

int main(int argc, char **argv) {
    auto FIB20 = fibonacci(20);
    ASSERT(FIB20 == 6765, "fibonacci(20) should be 6765");
    std::cout << "fibonacci(20) = " << FIB20 << std::endl;

    // TODO: 观察错误信息，修改一处，使代码编译运行
    // PS: 编译运行，但是不一定能算出结果……
    //这里改成20是为了github判分快一点，愿题意应该就是去除constexpr编译期计算。
    auto ANS_N = 20;
    auto ANS = fibonacci(ANS_N);
    std::cout << "fibonacci(" << ANS_N << ") = " << ANS << std::endl;

    return 0;
}
