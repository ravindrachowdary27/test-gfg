#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    // code here
    if(n>=0)
    {
        int z=n%10;
        printf("%d",z);
    }
    else
    {
        int z=n%10;
        printf("%d",-(z));
    }
    return 0;
}