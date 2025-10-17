#include<stdio.h>
#include<stdlib.h>

struct Car {
  char maker[25];
  char model[25];
  int year;
  char color[25];
};

typedef struct Car Car;

void print_car(Car *car) {
  printf("This %s model of car, which is of %s color, was purched in %d year,and is made by %s company.", car->model,car->color,car->year,car->maker);
}

int main() {
  printf("Welcome to our Car World.\n");
  Car *my_car = (Car*) malloc(sizeof(Car)); // memory allocation
  if (my_car==NULL) {
    printf("Memory was not allocated!!!\n");
    return 1;
  }

  printf("Please enter your car Model: ");
  scanf("%s", my_car->model);
  printf("Please enter your car Color: ");
  scanf("%s", my_car->color);
  printf("Please enter your car Year: ");
  scanf("%d", &my_car->year);
  printf("Please enter your car Company: ");
  scanf("%s", my_car->maker);

  printf("Here is your car details.\n");
  print_car(my_car);
  free(my_car);
  my_car=NULL;
  
  return 0;
}