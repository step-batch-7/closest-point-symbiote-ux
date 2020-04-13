#include<math.h>
#include "point.h"

void get_closest_food(Point food_points[], int points_length, Point current_location, Point *closest_food_location) {
  float distance, closest_distance;
  REPEAT_TILL_POINTS_LENGTH {
    distance = DISTANCE_BETWEEN;
    if(FIRST_INDEX || IS_DISTANCE_SHORT) {
      SET_CLOSEST_FOOD_LOCATION;
      SET_CLOSEST_DISTANCE;
    }
  } 
};
