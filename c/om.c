#include<stdio.h>
#include<conio.h>
int main(){
int s[5][3],it[3]={0},st[5]={0};
printf("enter details for 5 salesman's purchase for 3 items\n");
for(int i=0;i<5;i++){
    for(int j=0;j<3;j++){
        scanf("%d",&s[i][j]);
        st[i]=st[i]+s[i][j];
        it[j]=it[j]+s[i][j];
    }
}
printf("\n\n\t Item 1\tItem 2\t Item 3\n");
for(int i=0;i<5;i++){
printf("%s%-5d","S",i+1);
for(int j=0;j<3;j++){
    printf("%*d",7+j,s[i][j]);
}
printf("\n");

}
printf("\nitem wise total\n");
for(int j=0;j<3;j++){
    printf("%s%-3d=%5d\t","Item",j+1,it[j]);
    }
printf("\nsalesman wise total\n");
for(int j=0;j<5;j++){
printf("%s%-3d=%5d\t","S",j+1,st[j]);
}


}