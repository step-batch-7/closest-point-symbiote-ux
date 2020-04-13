#include<math.h>
#include "point.h"

float find_distance(Point p1, Point p2) {
  return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

void get_closest_food(Point food_points[], int points_length, Point current_location, Point *closest_food_location) {
  float distance, closest_distance = find_distance(food_points[0],current_location);
  SET_CLOSEST_FOOD_LOCATION(0);
  for(int i = 0; i < points_length; i++) {
    distance = find_distance(food_points[i],current_location);
    if(distance < closest_distance ) {
      closest_distance = distance;
      SET_CLOSEST_FOOD_LOCATION(i);
    }
  } 
};
