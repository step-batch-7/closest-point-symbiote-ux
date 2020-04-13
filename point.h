/* 
You are a single celled organism whose location is represented in two dimensions.
You have several food targets around you, whose locations are also represented in two dimensions.

Write a program, which when given the above data can determine the food target closest to the single celled organism.
Assuming that there are five food targets at:
    [18 76] [19 66] [89 57] [9 71] [55 38]

Location of organism: [18 86],  Closest food target : [18 76]
Location of organism: [97 27],  Closest food target : [89 57]
Location of organism: [69 7],   Closest food target : [55 38]
Location of organism: [10 94],  Closest food target : [18 76]
Location of organism: [36 27],  Closest food target : [55 38]
*/
#define FIRST_INDEX i == 0
#define DISTANCE_BETWEEN sqrt(X + Y)
#define SET_CLOSEST_FOOD_LOCATION  *closest_food_location = food_points[i]
#define IS_DISTANCE_SHORT closest_distance > distance
#define SET_CLOSEST_DISTANCE closest_distance = distance
#define REPEAT_TILL_POINTS_LENGTH for(int i = 0; i < points_length; i++)
#define FOOD_POINTS {{18,76},{19,66},{89,57},{9,71},{55,38}}
#define X pow((food_points[i].x - current_location.x),2)
#define Y pow((food_points[i].y - current_location.y),2)
#define POINTS_LENGTH sizeof(food_points) / sizeof(food_points[0])
#define CURRENT_LOCATION current_location.x,current_location.y
#define CLOSEST_FOOD_LOCATION closest_food_location.x,closest_food_location.y

typedef struct{
  int x;
  int y;
} Point;

void get_closest_food(Point food_points[], int points_length, Point current_location, Point *closest_food_location);
