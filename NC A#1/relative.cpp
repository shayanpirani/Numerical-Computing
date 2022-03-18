#include<stdio.h>
#include<math.h>
int main()
{
	
	printf("\t\t\t\tRelative and Absolute Error\n");
    printf("\t\t\t\tShayan Hassan 20k-1873\n\n");
    
    
    float abs_error, rel_error, perc_error, true_val, approx_val;
    printf("Enter True Value: ");
    scanf("%f",&true_val);
    printf("Enter Approx Value: ");
    scanf("%f",&approx_val);
    abs_error=fabs(true_val-approx_val);
    rel_error=abs_error/true_val;
    perc_error=rel_error*100;
    printf("absolute error = %f\n",abs_error);
    printf("relative error = %f\n",rel_error);
    printf("percentage error = %f\n",perc_error);
}
