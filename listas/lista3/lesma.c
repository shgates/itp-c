#include <stdio.h>

int getMaxSlugSpeed(int numSlugs, int speedSlugs[]) {
   
   int maxSpeed=0;
   for(int i=0; i < numSlugs; i++) {
      if(maxSpeed < speedSlugs[i]) {
          maxSpeed = speedSlugs[i];
      }
   }
   return maxSpeed;
    
}

int getSlugLevel(int speed) {
    if(speed < 10) {
        return 1;
    } else if (speed >= 10 && speed < 20) {
        return 2;
    } else {
        return 3;
    }
}

int main() {
   
   int numSlugs;
   
   scanf("%d", &numSlugs);
   
   int speedSlugs[numSlugs];
   
   for(int i=0;i < numSlugs;i++) {
       scanf("%d", &speedSlugs[i]);
   }
    
   int maxSlugSpeed = getMaxSlugSpeed(numSlugs, speedSlugs);
    
   int maxSlugLevel = getSlugLevel(maxSlugSpeed);
    
    printf("Level %d", maxSlugLevel);
    return 0;
}