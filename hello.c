#include <stdio.h>
#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
int main(int argc, char ** argv) {
    printf("Hello World\n");
}
