#include<stdio.h>
#include "point.h"

int main(void)
{
  Point food_points[] = FOOD_POINTS;
  int points_length = POINTS_LENGTH;
  Point current_location, closest_food_location;

  printf("Enter your co-ordinates: \n");
  scanf("%d %d",&current_location.x,&current_location.y);

  get_closest_food(food_points, points_length, current_location, &closest_food_location);

  printf("Location of organism: [%d %d],  Closest food target : [%d %d]\n",current_location.x,current_location.y,closest_food_location.x,closest_food_location.y);
  return 0;
};