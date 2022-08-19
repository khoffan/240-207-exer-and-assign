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
   
    // printf("Enter the details of 5 employees\n");
    for(i=0;i<5;i++)
    {
        printf("E%02d: ",i+1);
        e[i]=input_employee();
    }
    max=find_max(e,5);
    total=find_total(e,5);
    
    
    printf("Max= %s/%d",e[max].name,e[max].salary);
    printf("Total= %d",total);
    return 0;
}
Employee input_employee()
{
    Employee e;
    scanf(" %[^\n]s",e.name);
    getchar();
    scanf(" %d",&e.salary);      
    return e;
}
int find_max(Employee e[],int len){
    // หาพนักงานที่เงินเดือนมากที่สุด
    int i,max=0;
    for(i=0;i<len;i++)
    {
        if(e[i].salary > e[max].salary)
        {
            max=i;
        }
    }
    return max;
    // int i=0,max;
    
    // while(i<len){
    //     if(e[i].salary>max)
    //         max=e[i].salary;
    //     i++;
    // }
    // return max;
}
int find_total(Employee e[], int len){
    int i=0,total=0;
    
    while(i<len){
        total+=e[i].salary;
        i++;
    }
    return total;
}