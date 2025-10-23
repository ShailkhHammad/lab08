#include <stdio.h>

int main(){
    int count=0;

    for(int i=0;i<=10;i++){
        for(int j=0;j<=10;j++){
            if((i+j)%2==0){
                printf("x ");
            }else{
                printf("o ");

            }
    }
    printf("\n");
}

printf("total: 100; stud: %d, empty: %d ",count,100-count);

return 0;
}