#include <stdio.h>
#include <math.h>

/*
    LOIS :
    - Le points ne doivent pas avoir un rayon qui entre en colision
    - Les points veulent toujours aller vers la sortie
*/

typedef struct cage{
    double X;
    double Y;
    double exitX;
    double exitY;
}cage;


typedef struct sheep {
    double posX;
    double posY;
    double rayon;
}sheep;


int pathFinding(posSheepX, posSheepY, exitX, exitY){
    double dx = abs(posSheepX - exitX);
    double dy = abs(posSheepY - exitY);
    double dist = sqrt(dx*dx + dy*dy);
    return 0;
}


int main(void){

    cage test_1_cage = {100, 100, 100, 50, 20};
    sheep test_1_sheep = {50, 50, 1};
    pathFinding(test_1_sheep.posX, test_1_sheep, test_1_cage.exitX, test_1_cage.Y);
    return 0;
}