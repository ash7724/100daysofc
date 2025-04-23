// Structure Tutorials 1.
//C Program to Store Information of a Student Using Structure
#include <stdio.h>

struct student_record {
    char name[20];
    int marks;
    int age;
};

void print_data(struct student_record );
int main() {
    int num,fact;
    struct student_record rec1[3];

    for(int i=0;i<3;i++){
        printf("Enter Name of student");
        scanf("%s",&rec1->name);
        printf("Enter Age of student");
        scanf("%d",&rec1->age);
        printf("Enter Marks of student");
        scanf("%d",&rec1->marks);
        print_data(*rec1);        
    }    

    return 0;
}

void print_data(struct student_record a) {
   printf("\n Name:%s\tAge:%d\tMarks:%d\n",a.name,a.age,a.marks);

}
