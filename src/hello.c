#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <endian.h>

union hello {
    int foo;
    char bar[10];
};

int main(int argc, char const *argv[]) {
    // 测试union如何初始化
    union hello foobar = {.bar = "Hello C!"};
    printf("%s\n", foobar.bar);
    printf("%x\n", ((int32_t)2147483648 < 2147483647));
    printf("%u\n", -(uint32_t)2147483648);
    return 0;
}
