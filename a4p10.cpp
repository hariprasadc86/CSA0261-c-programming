#include <stdio.h>
#include <math.h>
typedef union {
    float radius;
    struct {
        float length;
        float width;
    } rectangle;
} Shape;

int main() {
    Shape shape;
    char shape_type[10];
    printf("Enter shape type (circle or rectangle): ");
    scanf("%s", shape_type);

    if (strcmp(shape_type, "circle") == 0) {
        printf("Enter circle radius: ");
        scanf("%f", &shape.radius);
        float area = M_PI * pow(shape.radius, 2);
        printf("The area of the circle is: %f", area);
    } else if (strcmp(shape_type, "rectangle") == 0) {
        printf("Enter rectangle length: ");
        scanf("%f", &shape.rectangle.length);
        printf("Enter rectangle width: ");
        scanf("%f", &shape.rectangle.width);
        float area = shape.rectangle.length * shape.rectangle.width;
        printf("The area of the rectangle is: %f", area);
    } else {
        printf("Invalid shape type entered");
    }

    return 0;
}

