void calculate(int a, int b, int operator_) {
    // code here
    switch(operator_)
    {
        case 1:
        {
            printf("%d",a+b);
            break;
        }
        case 2:
        {
            printf("%d",a-b);
            break;
        }
        case 3:
        {
            printf("%d",a*b);
            break;
        }
        default :
            printf("Invalid Input");
    }
}
   