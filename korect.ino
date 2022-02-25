#include "src/state.h"

SoftwareState flightState;

void setup() { flightState = SF_GROUND_IDLE; }

void loop() {

  switch (flightState) {
  case SF_GROUND_IDLE:
    break;

  case SF_PWRD_FLIGHT:
    break;

  case SF_UNPWRD_FLIGHT:
    break;

  case SF_BALLISTIC_DECENT:
    break;

  case SF_CHUTE_DECENT:
    break;

  case SF_LANDING:
    break;

  default:
    break;
  }
}
