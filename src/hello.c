#include <stdio.h>

union hello {
    int foo;
    char bar[10];
};

int main(int argc, char const *argv[]) {
    // 测试union如何初始化
    union hello foobar = {.bar = "Hello C!"};
    printf("%s\n", foobar.bar);
    return 0;
}
