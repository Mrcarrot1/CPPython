/*
 * Dear reader,
 * This is a header to allow for incredibly cursed valid C++ programs.
 * For an example, see main.cpp in this directory.
 * It's quite simple but really shouldn't be.
 * I'll leave you to figure out how it works.
*/

#include <stdio.h>
#pragma clang diagnostic ignored "-Wunicode-zero-width"

#define print int main(int argc, char** argv) \
{ \
printf
#define ​ ; \
printf("\n"); \
}
