// Source: From MinhasKamal's brain
// Strange code that swaps value of two variables. 'a^=b^=a^=b' works too.
 
#include <stdio.h>

main(){
    int a=5, b=7;

    a-=b=(a+=b)-b;
    
    printf("%d %d", a, b);
}
