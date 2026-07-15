#include<stdio.h>
int main(){
    int x,size;
    int arr[100];
    int frequency=0;
    int position=-1;

    printf("Enter number of elements: ");
    scanf("%d",&size);

    for(int i=0;i<size;i++){
        printf("array element at %d position ",i);
        scanf("%d",&arr[i]);
    }

    printf("Enter number to be found: ");
    scanf("%d",&x);

    for(int i=0;i<size;i++){
        if(arr[i]==x){
            frequency++;
            if(position==-1){
                position=i;
            }
        }
    }
    if(frequency==0){
        printf("%d does not exist in the array",x);
    }
    else{
        printf("the frequency of %d is %d\n",x,frequency);
        printf("first occurance of %d is %d",x,position);
    }
    return 0;
}