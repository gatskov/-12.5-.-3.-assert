// 12.5 Практическая работа. Задание 3. Использование assert
#include <cassert>
#include <cmath>
#include <iostream>
using namespace std;

float travelTime(float distance, float speed) {
  assert(speed > 0.0);
  float transit_time = distance / speed;
  return transit_time;
}

int main() {
  cout << "12.5 Practical work. Task 3. Using assert\n";
  cout << "============================================\n";
  while (true) {
    float distance, speed, transit_time;
    cout << "Enter the distance traveled in (km)\n"
         << "and travel speed in (km/h).\n"
         << "All values must be fractional.\n";
    cin >> distance >> speed;
    if (float((int)distance) == distance){
        cout << "\nError! Incorrect values... ";
        return 0;
      }
    cout << "\nInput distance - " << distance << " km. speed - " << speed
         << " km/h." << endl;
    cout << "-----------------------------------------------\n\n";
    transit_time = travelTime(distance, speed);
    cout << "Distance = " << distance
         << " km. Passed in time = " << round(transit_time * 10) / 10
         << " hour.\nWith speed = " << speed << " km/h.\n";
    cout << "\n================================================\n";
  }
  return 0;
}
