#include <stdbool.h>
#include <stdio.h>

int motorAmount;
int packageWeight;
bool conveyorWorks;
float packageHandle = 5.6;

void submitInfo(int a, int b) {
  motorAmount = a;
  packageWeight = b;
  float weightcapacity = motorAmount * packageHandle;

  if (b <= weightcapacity) {
    printf("The conveyor belt can carry the packages.");
  } else {
    printf("The conveyor belt can't not carry the packages.");
  }

  return;
}

int main(void) {
  submitInfo(5, 1000);
  return 0;
}
