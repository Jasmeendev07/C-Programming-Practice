#include <stdio.h>
#include <stdlib.h>

int main()
{
    int english,maths,physics,c,fcs;
    printf("Enter marks of 5 subject:\n");
    scanf("%d %d %d %d %d", &english, &maths, &physics, &c, &fcs);
    int total = english+maths+physics+c+fcs;
    float percentage = total/5.0;
    if(percentage >= 90) {
        printf("Grade: A+\n");
    }
    else if (percentage >=80) {
        printf("Grade: A\n");
    }
    else if (percentage >=70) {
        printf("Grade: B\n");
    }
    else if (percentage >=60) {
        printf("Grade: C\n");
    }
    else if (percentage >=50) {
        printf("Grade: D\n");
    }
    else {
        printf("Grade:F\n");
    }
    printf("Total: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    return 0;
}
