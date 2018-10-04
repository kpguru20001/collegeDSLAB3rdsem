#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct employee{
    char emp_name[20];
    int emp_id;
    char dpt_name[20];
    float salary;
}*emp ;

compute(struct employee *e, char dn, int m)
{
    float tot_sal = 0;
    int i,flag = 0;
    for(i = 0;i<m;i++){
        int ch = strcmp((e+i)->dpt_name, dn);
        if(ch==0)
        {
            flag = 1;
            printf("working");
            tot_sal+= (e+i)->salary;
            
        }
        
    }
    if(flag == 0)
            printf("\n No such Department found");
        
        else
            printf("\nTotal salary of employee in department %s is %d",dn,tot_sal);
}

main(){
    int m, i;
    //struct employee *emp;
    char dname[20], c;
    printf("Enter the no. of employee\n");
    scanf("%d",&m);
    emp = (struct employee *)malloc(m*sizeof(struct employee));
    for (i = 0;i<m;i++){
        printf("Enter the details od employee No.%d",i+1);
        printf("Enter Employee name :");
        scanf("%s",(emp + i)->emp_name);
        printf("Enter the employee ID:");
        scanf("%d",(emp+i)->emp_id);
        printf("Enter Employee Department: ");
        scanf("%s",(emp + i)->dpt_name);
        printf("Enter salary:");
        scanf("%d",(emp+i)->salary);
    }

    do{
        printf("enter the department for which salary is to be calculated:");
        compute(emp, dname, m);
        printf("Do want to find salary for the department(y/N):");
        scanf("%c",&c);

    }while(c=='y'||c=='Y');
    
}