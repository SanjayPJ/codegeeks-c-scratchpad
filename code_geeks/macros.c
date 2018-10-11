// #include <stdio.h>
// #define MAX 100

// int main(void){
//     printf("%d", MAX);
//     return 0;
// }

#include <stdio.h>
#define INCREMENT(x) ++x

int main(void){
    int a = 8;
    char *name = "Sanjay";
    printf("%d\n", INCREMENT(a));
    printf("%s\n", INCREMENT(name));
    printf("%d\n", name);
    printf("%d\n", ++name);
    printf("%s\n", __FILE__);
    printf("%s\n", __DATE__);
    printf("%s\n", __TIME__);
    return 0;
}