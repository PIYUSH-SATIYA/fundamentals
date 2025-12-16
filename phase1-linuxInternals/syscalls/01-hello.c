#include <stdio.h>

int main(){
    printf("hello world");
    return 0;
}

// running it under strace, shows all the syscalls made to execute even this tiny program