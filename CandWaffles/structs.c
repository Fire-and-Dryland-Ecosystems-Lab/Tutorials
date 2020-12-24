# include <stdio.h>

struct dateStruct {
  int year;
  int month;
  int day;
};

struct dataPoint { // creates a struct with 2 members, the first is a dateStruct called date the 2nd is a float called nitrogenAmount
  struct dateStruct date;
  float nitrogenAmount;
};

struct dataPoint point1 = { { 2014, 3, 11 }, .5 }; // this creates a struct where type = dataPoint, name = point1, and the members are defined similar to arrays

struct dataPoint point2 = { { 2014, 3, 12}, .6 }; // double {{ is because its a struct in a struct

int main() {
  printf( "Nitrogen for point #1 = %f on day %d\n", point1.nitrogenAmount, point1.date.day ); // the . is the structure member operator
  printf( "Nitrogen for point #2 = %f on day %d\n", point2.nitrogenAmount, point2.date.day );

  return 1; 
}
