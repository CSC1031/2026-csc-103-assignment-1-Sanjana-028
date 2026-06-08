#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mathematics=0.0;
    float science=0.0;
    float english=0.0;
    float total_marks=0.0;
    float average=0.0;

    printf("Enter the marks of Mathematics(out of 100): ");
    scanf("%f", &mathematics);
    printf("Enter the marks of Science(out of 100): ");
    scanf("%f", &science);
    printf("Enter the marks of English(out of 100): ");
    scanf("%f", &english);

    total_marks=mathematics + science + english;
    average=(total_marks)/3.0;

    printf("Your Total marks: %.2f\n", total_marks);
    printf("Your Average\t: %.2f\n", average);

    if (average >= 80){
            printf("Grade\t\t: A\n");
    }
    else if (average >= 70){
        printf("Grade\t\t: B\n");
    }
    else if (average >= 60){
        printf("Grade\t\t: C\n");
    }
    else if (average >= 50){
        printf("Grade\t\t: D\n");
    }
    else {
        printf("Grade\t\t: F\n");
    }
    if (mathematics >= 40 && science >= 40 && english >= 40){
        printf("Your status\t: Pass\n");
    }
    else {
        printf("Your status\t:Fail\n");
    }
    return 0;
}
