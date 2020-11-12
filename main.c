 #include <stdio.h>
 #include "myMath.h"

 int main()
 {
     double x=0;
     float answer1, answer2,answer3=0;
      printf("Please insert a real number:\n");
      scanf("%lf",&x);
      

      answer1= sub(add(Exponent((int)x),Power(x,3)), 2);
      answer2= add(mul(x,3), mul(Power (x,2),2));
      answer3= sub(div(mul(Power(x,3),4),5), mul(x,2));

      printf("The value of f(x)= e^x+x^3-2 at the point %lf is %0.4f.\n", x, answer1);
      printf("The value of f(x)= 3x+2x^2 at the point %lf is %0.4f.\n", x, answer2);
      printf("The value of f(x)= (4x^3)/5-2x at the point %lf is %0.4f.\n", x, answer3);

      return 0;
      
}