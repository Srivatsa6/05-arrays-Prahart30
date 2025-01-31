#include <stdio.h>
#include <assert.h>


int max(int myarray[], int size) {
    int c, maximum;
    maximum = myarray[0];
    for(c = 0; c < size; ++c) {
        if(myarray[c] > maximum)
        maximum = myarray[c];
    }
    return maximum;
}

int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert (max(x, 7) == 10);

  int y[] = {5};
  assert (max(y, 1) == 5);
  printf("Max: passed\n");
  }
