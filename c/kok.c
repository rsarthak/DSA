#include<stdio.h>
int main(){
    int r,c;
int m1[r][c],m2[r][c],m3[r][c];
printf("enter rows and columns\n");
scanf("%d %d",&r,&c);
printf("enter matrix 1\n");
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&m1[i][j]);
    }
}
printf("enter matrix 2\n");
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&m1[i][j]);
    }
}
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
m3[i][j]=m1[i][j]+m2[i][j];

    }
}
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        printf("%d ",m3[i][j]);
    }
    printf("\n");
}


}