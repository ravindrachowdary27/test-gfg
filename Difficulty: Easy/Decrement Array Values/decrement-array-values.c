int* decrementArrayElements(int numbers[], int size) {
    
    for(int i=0;i<size;i++)
    {
        numbers[i]=numbers[i]-1;
    }
    return numbers;
}