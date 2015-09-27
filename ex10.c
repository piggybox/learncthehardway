#include "stdio.h"

int main(int argc, char const *argv[]) {
  int i = 0;
  // go through each string in argv
  // why am I skipping argv[0]?
  for (size_t i = 1; i < argc; i++) {
    printf("arg %d: %s\n", i, argv[i]);
  }

  // let's make our own arragy of strings
  char *states[] = {
    "California", "Oregon",
    "Washington", "Texas"
  };

  int num_states = 4;

  for (size_t i = 0; i < num_states; i++) {
    printf("state %d: %s\n", i, states[i]);
  }

  return 0;
}
