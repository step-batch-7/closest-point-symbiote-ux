#include<math.h>
#include "point.h"

void get_closest_food(Point food_points[], int points_length, Point current_location, Point *closest_food_location) {
  float new_distance = 0.0, closest_distance = 0.0;
  for(int i = 0; i < points_length; i++) {
    new_distance = sqrt(X + Y);
    if(i== 0 || closest_distance > new_distance) {
      closest_food_location->x = food_points[i].x;
      closest_food_location->y = food_points[i].y;
      closest_distance = new_distance;
    }
  }
  
};
