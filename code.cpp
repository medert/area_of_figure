#include <stdio.h>
#include <math.h>
#define PI 3.14

int main(void)
{
  char figure;
  double side, radius, area;

  printf("Please, choose a figure: square(S) or circle(C)\n");
  scanf("%c", &figure);

  if (figure == 'S') {

    printf("Please enter the lenth of a square side.\n");
    scanf("%lf", &side);
    area = pow(side, 2);
    printf("The area of square is %.3f", area);

  } else if (figure == 'C') {

    printf("Please enter the radius of a circle.\n");
    scanf("%lf", &radius);
    area = PI * pow(radius, 2);
    printf("The area of circle is %.3f", area);

  } else {

    printf("Please choose valid figure!");

  }

  getchar();
  return 0;

}
