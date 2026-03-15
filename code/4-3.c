#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int b = 1;

    for(int i=2; i<n; i++){
        if (n%i==0){
            b = 0;
            break;
        }
    }

    if(b){
        printf("true");
    } else{printf("false");}
    

    return 0;
}

