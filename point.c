#include<math.h>
#include "point.h"

void get_closest_food(Point food_points[], int points_length, Point current_location, Point *closest_food_location) {
  float distance = 0, value = 0;
  int id;
  for(int i = 0; i < points_length; i++) {
    distance = sqrt(pow((food_points[i].x - current_location.x),2) + pow((food_points[i].y - current_location.y),2));
    if(value < distance) {
      id = i;
      value = distance;
    }
  }
  closest_food_location->x = food_points[id].x;
  closest_food_location->y = food_points[id].y;
}

// {{18,76},{19,66},{89,57},{9,71},{55,38}};
// 69 7 =>  [55 38]