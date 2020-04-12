#include "point.h"

void get_closest_food(Point food_points[], int points_length, Point current_location, Point *closest_food_location) {
  for(int i = 0; i < points_length; i++) {
    if(current_location.x == food_points[i].x)
    closest_food_location->x = food_points[i].x;
    closest_food_location->y = food_points[i].y;
  }
}

// {{18,76},{19,66},{89,57},{9,71},{55,38}};
// 18 86