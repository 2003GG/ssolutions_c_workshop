#include <stdio.h>
#include <math.h>
int main() {
   float a, b , c, m_g ;
   printf("entre a = ");
   scanf("%f",&a);
   printf("entre b = ");
   scanf("%f",&b);
   printf("entre c = ");
   scanf("%f",&c);
   
   
   m_g = pow((a*b*c),(1.0/3.0));
   printf("moyenne géométrique = %f",m_g);
   
  
}

