/**
 * @file main.cpp
 * @author Tales Oliveira (g.dev/TalesOliveira)
 * @brief This is a example file (CAN BE DELETED)
 */

#include <iostream>
#include <colors.h>

int main(void)
{
    char name[] = "World";
    int number = 42;

    print_color(BOLD, RED, "Hello, %s %d!\n", name, number);
    return 0;
}
