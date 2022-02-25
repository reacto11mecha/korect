#ifndef _State_H
#define _State_H

typedef enum SoftwareState {
  SF_GROUND_IDLE,
  SF_PWRD_FLIGHT,
  SF_UNPWRD_FLIGHT,
  SF_BALLISTIC_DECENT,
  SF_CHUTE_DECENT,
  SF_LANDING
};

#endif