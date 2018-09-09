#include "ev3.h"
#include "app.h"
#include "util.h"

#include "Motor.h"
#include "Port.h"
#include "ColorSensor.h"

using namespace ev3api;

class MoveUtil{
private:
  Motor leftWheel;
  Motor rightWheel;
  ColorSensor colorSensor;
  int speed;
  int pwm;
  int32_t startDig;//開始時の角位置
  int32_t endDig;//終了角位置
  bool rightSearch;
public:
  MoveUtil();
  void turn(int degree);
  void turn(int degree,int side);
  void straight(int distance);
  void stop();
  void to_color(int color);
  int to_color_turn(int color);
};