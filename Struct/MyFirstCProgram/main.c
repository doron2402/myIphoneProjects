//
//  main.c
//  Structure
//
//  Created by turner on 9/26/13.
//  Copyright (c) 2013 treehouse. All rights reserved.
//

#include <stdio.h>
typedef struct{
    float center[3];
    float radius;
} Sphere;

Sphere make_sphere(float *c,float r);

int main()
{
    float c[] = {12,12,12};
    float r = 4.4;
    Sphere ball = make_sphere(c,r);
    printf("Sphere location %f, %f, %f, \n",ball.center[0],ball.center[1], ball.center[2]);
    printf("Sphere Raiud %f",ball.radius);
       return 0;

}

Sphere make_sphere(float *c,float r){
    Sphere tmp_ball;
    tmp_ball.center[0] = c[0];
    tmp_ball.center[1] = c[1];
    tmp_ball.center[2] = c[2];
    tmp_ball.radius = r;
    return tmp_ball;
}