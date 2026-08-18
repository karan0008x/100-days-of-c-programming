 #include <stdio.h>
float main() {
 float radius, circumference, area;
    const float pi = 3.14;
    printf("enter radius, ");
    scanf("%f", &radius);
    circumference = 2 * pi * radius;
    area = pi * radius * radius;
    printf("circumference is %f", circumference);
     printf("area is %f", area);
    return 0;

}