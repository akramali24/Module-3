#include <stdio.h>

int main() {
   
    int phyMarks, chemMarks, mathMarks, totalMarks, totalMathsPhysics;

    printf("Input the marks obtained in Physics: ");
    scanf("%d", &phyMarks);

    printf("Input the marks obtained in Chemistry: ");
    scanf("%d", &chemMarks);

    printf("Input the marks obtained in Mathematics: ");
    scanf("%d", &mathMarks);

    totalMarks = phyMarks + chemMarks + mathMarks;

    totalMathsPhysics = mathMarks + phyMarks;

    if ((mathMarks >= 65) && (phyMarks >= 55) && (chemMarks >= 50) && (totalMarks >= 190 || totalMathsPhysics >= 140)) {
        printf("The candidate is eligible.\n");
    } else {
        printf("The candidate is not eligible.\n");
    }

    return 0;
}
