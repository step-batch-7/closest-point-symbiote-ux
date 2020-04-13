#include<math.h>
#include "point.h"

void get_closest_food(Point food_points[], int points_length, Point current_location, Point *closest_food_location) {
  float distance, closest_distance;
  for(int i = 0; i < points_length; i++) {
    distance = sqrt(X + Y);
    if(IS_FIRST_INDEX || closest_distance > distance) {
      *closest_food_location = food_points[i];
      closest_distance = distance;
    }
  } 
};
