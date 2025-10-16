#include<stdio.h>

struct Car {
  char maker[25];
  char model[25];
  int year;
  char color[25];
};

typedef struct Car Car;

void print_car(Car *car) {
  printf("This %s model of car, which is of %s color, was purched in %d year,and is made by %s company", car->model,car->color,car->year,car->maker);
}

int main() {
  Car ford = {.maker = "Ford", .model = "Aspire", .year = 2016, .color = "Red"};

  printf("Welcome to our Car World.\n");
  print_car(&ford);
  
  return 0;
}