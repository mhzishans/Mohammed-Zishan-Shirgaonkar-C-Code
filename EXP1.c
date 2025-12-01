#include <stdio.h>
int main() {
    float physics_marks, chemistry_marks, math_marks;
    float average_marks;

    // Get PCM marks from the user
    printf("Enter Physics marks: ");
    scanf("%f", &physics_marks);
    
    printf("Enter Chemistry marks: ");
    scanf("%f", &chemistry_marks);

   
    printf("Enter Math marks: ");
    scanf("%f", &math_marks);

    // Calculate the average of PCM marks
    average_marks = (physics_marks + chemistry_marks + math_marks) / 3.0;

    printf("Average PCM marks: %.2f\n", average_marks);

    // Check eligibility using the conditional operator
    (average_marks >= 50.0) ? printf("Student is eligible for admission.\n") : printf("Student is not eligible for admission.\n");

    return 0;
}
