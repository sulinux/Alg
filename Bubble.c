#include<stdio.h>

void  Bubble(int arr[], int len)
{
    printf("Run here!\n");
    for(int a = 0; a < len; a++){
         int temp = 0;
        for(int b = a+1; b < len; b++){
            if(arr[a] < arr[b]){
                temp = arr[a];
                arr[a] = arr[b];
                arr[b] = temp;
                }
       }
    }
}

int main(){
    int arr[6] = {2,1,4,3,8,5};
    Bubble(arr, 6);
    for(int i = 0; i < 6; i++)
        printf("%i, ",arr[i]);
    return 0;
}
