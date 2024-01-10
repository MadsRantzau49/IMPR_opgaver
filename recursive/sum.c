#include <stdio.h>
#include <assert.h>

int recursive_sum(int start, int end);
void test();

int main() {
    int sum = recursive_sum(0, 5);
    printf("%d", sum);
    test();
    return 0;
}

int recursive_sum(int start, int end) {
    if (start > end) {
        return 0;
    }
    return start + recursive_sum(start + 1, end);
}

void test(){
    assert(recursive_sum(0, 5) == 15); 
    assert(recursive_sum(1, 10) == 55);
    assert(recursive_sum(0, 20) == 210);
    assert(recursive_sum(5, 8) == 26);
    assert(recursive_sum(0, 0) == 0);
    assert(recursive_sum(3, 3) == 3);
    assert(recursive_sum(2, 3) == 5);
    printf("All tests passed");
}