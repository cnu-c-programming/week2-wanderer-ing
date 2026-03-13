#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    boolean b = false;

    for(i=2; i<n; ++i){
        if (n%i==0){
            b = true;
            break;
        }
    }

    if(b){
        printf("true");
    } else{printf("false");}
    

    return 0;
}

