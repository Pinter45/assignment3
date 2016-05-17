#include "pen.h"
#include "ballpen_h"
#include "fountain_h"


 int main(){

FountainPen fp;

 WriteWithPen(fp);


 RollerBallPen rbp("A Pen that Uses a Roller Ball");

WriteWithPen(rbp);

Pen pen;
 WriteWithPen(pen);
return 0;
 }