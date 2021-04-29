#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n;
    float mark, total=0, avg;
    char name;
    printf("Enter no of students in the class:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
      printf("\nEnter the name:");
      scanf("%s",&name);
      printf("\nEnter Marks obtained in 5 Subjects: ");
      for(j=0; j<5; j++)
    {
       
        scanf("%f", &mark);
        total = total+mark;
    }
      avg = total/5;
      printf("\nGrade = ");
      if(avg>=91)
        printf("A1");
      else if(avg>=81)
        printf("A2");
      else if(avg>=71)
        printf("B1");
      else if(avg>=61)
        printf("B2");
      else if(avg>=51)
        printf("C1");
      else if(avg>=41)
        printf("C2");
      else if(avg>=30)
        printf("D");
      else
        printf("Invalid");
   }
   return 0;
}
