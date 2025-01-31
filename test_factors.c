#include <stdio.h>
#include <assert.h>

   int factors(int n,int e[]){
        int i=0, j;
        while(n%2==0){
          e[i]=2;
          i++;
          n=n/2;
        }
        for(int j=3; j<=n;j++){
          while(n%j==0){
            e[i]=j;
            i++;
            n=n/j;
          }
        }
        if(n>2)
          e[i]=n;
        return i;
      }

int main(void) {
  int ret[100] = {0};
  int count = factors(180, ret);
  assert (count == 5);
  assert (ret[0] == 2);
  assert (ret[1] == 2);
  assert (ret[2] == 3);
  assert (ret[3] == 3);
  assert (ret[4] == 5);


  count = factors(143, ret);
  assert (count == 2);
  assert (ret[0] == 11);
  assert (ret[1] == 13);
  printf("Factors: passed\n");
}

        
