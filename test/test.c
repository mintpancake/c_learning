#include <stdio.h>
#include <stdlib.h>

int main(){
    int previousDegree = 0;
    int changedDegree = 0;
    for(; ; ){
        printf("The cuurent angle is %d. \nEnter the angle you want to change: ", previousDegree);
        if(scanf("%d", &changedDegree) != 1) break;
        previousDegree = deg(changedDegree, previousDegree);
    }
    printf("The final angle is %d. \nCompleted. ", previousDegree);
    return 0;
}

int deg(int changedDegree, int previousDegree){
    int pointingDgree = 0;
    pointingDgree = (previousDegree + changedDegree) % 360;
    if(pointingDgree < 0){
        pointingDgree += 360;
    }
    if(pointingDgree > 180){
        pointingDgree -= 360;
    }
    return pointingDgree;
}
