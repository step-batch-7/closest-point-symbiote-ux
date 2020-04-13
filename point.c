#include<math.h>
#include "point.h"

void get_closest_food(Point food_points[], int points_length, Point current_location, Point *closest_food_location) {
  float new_distance, closest_distance;
  for(int i = 0; i < points_length; i++) {
    new_distance = sqrt(X + Y);
    if(FIRST_INDEX || closest_distance > new_distance) {
     SET_CLOSEST_FOOD_X;
     SET_CLOSEST_FOOD_Y;
     closest_distance = new_distance;
    }
  } 
};
