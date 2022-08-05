#include <stdio.h>
typedef struct
{
    char name[128];
    int salary;
} Employee;
Employee input_employee();
int find_max(Employee e[], int len);
int find_total(Employee e[], int len);
int main()
{
    Employee e[5];
    int i=0,max,total=0;
   
    while(i != 9){
        e[i] = input_employee();
        max = find_max(e,5);
         //total = find_total(e,9);
        i++;
    }
    
    printf("Max= %d",max);
    printf("Total=");
    return 0;
}
Employee input_employee()
{
    Employee e;
    char delim;
    gets(e.name);
    scanf("%d",&e.salary);      
    return e;
}
int find_max(Employee e[],int len){
    int i=0,max;
    
    while(i != len){
        if(e[i].salary > max){
            max = e[i].salary;
            printf("%d",max);
        }
        i++;
    }
    return max;
}
