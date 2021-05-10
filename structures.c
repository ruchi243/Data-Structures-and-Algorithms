#include<stdio.h>  
void main()
{
    struct student{
        int id;
        int phonenumber;
        int marks;
    };
    struct student s1,s2,s3;
    printf("\n Enter id, phonenumber and marks of the students \n");
    scanf ("%d %f %d", &s1.id, &s1.phonenumber, &s1.marks);  
    scanf ("%d%f %d", &s2.id, &s2.phonenumber, &s2.marks);  
    scanf ("%d %f %d", &s3.id, &s3.phonenumber, &s3.marks);  
printf ("\n Entered Result ");  
printf ("\n%d %f %d", s1.id, s1.phonenumber, s1.marks);  
printf ("\n%d%f %d", s2.id, s2.phonenumber, s2.marks);  
printf ("\n%d %f %d", s3.id, s3.phonenumber, s3.marks);  


}