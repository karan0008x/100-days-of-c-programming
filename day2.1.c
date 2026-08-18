 #include <stdio.h>
 int main() {
 int length, breadth, area, perimeter;
 printf("enter length: ");
 scanf("%d", &length);
 printf("enter breadth: ");
 scanf("%d", &breadth);
 area = length * breadth;
 perimeter = 2 * (length + breadth);
 printf("area is %d", area);
 printf("perimeter is %d", perimeter);
 return 0;
 }