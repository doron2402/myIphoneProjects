//
//  main.c
//  MyFirstCProgram
//
//  Created by turner on 9/26/13.
//  Copyright (c) 2013 treehouse. All rights reserved.
//

#include <stdio.h>
int get_array_length(float tmp_arr[]);
void play_with_pointer();

int main()
{
    play_with_pointer();
    int days_in_week = 7;
    float cm_to_in = 2.54;
    char the_w = 'w';
    
    char name[40];
    name[0] = 'D';
    name[1] = 'o';
    name[2] = 'r';
    name[3] = 'o';
    name[4] = 'n';
    
    printf("my name is %s \n",name);
    float tmp_numbers[2];
    tmp_numbers[0] = 1.23;
    tmp_numbers[1] = 2.12;
    
    float math_constants[] = {2.71828,1.41421};
    printf("Euler's number = %f",math_constants[0]);
    
    printf("there are %d in a week\n %f \n", days_in_week, cm_to_in);
    printf("the %c \n",the_w);
    // insert code here...
    printf("Hello, World!\n");
    
    int numbers[] = {0,1,2,3,4,5,6,7,8};
    for (int i=0; i<8; i++) {
        printf("%d \n",i);
    }
    
    //While loop
    int w_loop = 4;
    int sum = 0;
    while(w_loop > 0){
        sum += numbers[w_loop];
        --w_loop;
    }
    printf("Sum is %i",sum);
    
    //Do
    w_loop = 10;
    do {
        printf(" %i )While Do Do \n",w_loop);
        --w_loop;
    } while (w_loop>0);
    
    float tmp_arr_float[] = {1.123, 23.123, 123.123, 345.23};
    int s = get_array_length(tmp_arr_float);
    printf("Sum is: %i",s);

    float real_numbers[] = {1.2,2.3,2.3,2.3,12.34};
    printf("Array real_numbers is %ld bytes.", sizeof(real_numbers)/sizeof(float));
    
    return 0;

}

void play_with_pointer(){
    char *pointy;
    char alpha;
    pointy = &alpha;
    *pointy = 'k';
    printf("pointy always eq to alpha %c = %c\n",*pointy, alpha);
    alpha = 'D';
    printf("pointy always eq to alpha %c = %c\n",*pointy, alpha);
}

int get_array_length(float tmp_arr[]){
    int i=0;
    while (tmp_arr[i] >= 0 ) {
        printf("%d ) num is : %f \n",i,tmp_arr[i]);
        i++;
    }
    printf("Size of int: %ld", sizeof(float));
    printf("Size of tmp array: %ld", sizeof(tmp_arr));
    
    int tmp = (sizeof(tmp_arr)/sizeof(float));
    return tmp;
}

