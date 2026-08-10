#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    printf("%s",(n%2==0)? "Friend" : "You");
    

    return 0;
}