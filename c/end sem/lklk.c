#include <stdio.h>
#include <conio.h>
struct travel_agency
{
    int id;
    float kms_travelled;
    char name[100];
} employee[10];;
int main()

{

    int n; //to enter number of employees
    int i;

    printf("enter the number of employees you want to add detail: \n");
    scanf("%d",&n);
    //taking each employee details as input


    printf("enter %d employee detais:- \n",n);

    for(i =0; i<n; i++)
    {
        printf("Employee %d:- \n",i+1);
        //NAME
        printf("the name of employee: \n");
        scanf("%c",&employee[i].name);
        //ID
        printf("the ID of employee: \n");
        scanf("%d",employee[i].id);
        //DISTANCE
        printf("the distance travelled by employee: \n");
        scanf("%f",&employee[i].kms_travelled);
    }
    //output
    printf("----------ALL EMPLOYEE DETAILS-----------");
     for(i =0; i<n; i++){

        printf("Name\t: ");
        printf("%s\n",employee[i].name);

         printf("id\t: ");
        printf("%d\n",employee[i].id);

        printf("kms_travelled\t: ");
        printf("%f\n",employee[i].kms_travelled);

       }

}