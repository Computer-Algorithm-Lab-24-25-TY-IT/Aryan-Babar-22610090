#include <stdio.h>
#include <unistd.h>

// Function prototypes
void function1();
void function2();
void function3();

int main() {
    // Call the functions
    function1();
    function2();
    function3();
    return 0;
}

void function1() {
    for(int j=0; j<1000; j++) {
    for(int i = 0; i < 2000000; i++) {
       int k=0;
       k=i*9;
    }
}
}

void function2() {
for(int j=0; j<1000; j++) {
    for(int i = 0; i < 1000000; i++) {
       int k=0;
       k=i%2;
    }
}
}

void function3() {  
    for(int i = 0; i < 10; i++) {
       function2(); 
    }
    printf("Function 3 completed\n");
}

