/* Enter your solutions in this file */
#include <stdio.h>
#include <assert.h>

//Function for maximum
int max(int myarray[], int size) {
    int c, maximum;
    maximum = myarray[0];
    for(c = 0; c < size; ++c) {
        if(myarray[c] > maximum)
        maximum = myarray[c];
    }
    return maximum;
}

//Function for minimum
int min(int myarray[], int size) {
    int c, minimum;
    minimum = myarray[0];
    for(c = 0; c < size; ++c) {
        if(myarray[c] < minimum)
        minimum = myarray[c];
    }
    return minimum;
}

//Function for average
float average(int a[], int n){
    int sum = 0;
    for (int i=0; i<n; i++)
       sum += a[i];
 
    return (float)sum/n;
}

//Function for mode
int mode(int a[],int n) {
   int maxValue = 0, maxCount = 0, i, j;

   for (i = 0; i < n; ++i) {
      int count = 0;
      
      for (j = 0; j < n; ++j) {
         if (a[j] == a[i])
         ++count;
      }
      
      if (count > maxCount) {
         maxCount = count;
         maxValue = a[i];
      }
   }

   return maxValue;
}

//Function for factors
int factors(int n,int a[]){
        int i=0;
        while(n%2==0){
          a[i]=2;
          i++;
          n=n/2;
        }
        for(int j=3; j<=n;j++){
          while(n%j==0){
            a[i]=j;
            i++;
            n=n/j;
          }
        }
        if(n>2)
          a[i]=n;
        return i;
      }
