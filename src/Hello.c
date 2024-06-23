#include <stdio.h>

union hello {
    int foo;
    double bar;
};

int main(int argc, char const *argv[]) {
    // 测试union如何初始化
    union hello foobar = {.bar = 3.14};
    printf("%f\n", foobar.bar);
    return 0;
}
