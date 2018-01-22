//
//  main.c
//  1 - 1000 000
//
//  Created by vit on 21/1/18.
//  Copyright © 2018 Jimmi Morrisson. All rights reserved.
//

#include <stdio.h>

int main()
{
    int array[1000] = {0};
    int flag, walk, sum, get_ch, sum2, i;
    printf(":");

    for(walk=0; (flag=getchar())!='\n'; walk++)
            array[walk] = flag;

    array[walk] = '\n';

    for(walk=0,sum=0; (get_ch=array[walk])!='\n'; ++walk)
        sum += get_ch-48;

    printf("sum of input integers: %d\n\n", sum);
    
//    for(i=1,sum2=0; i<10; i++)
//        sum2 += (20*i);
//    printf("%d\n", sum2+1);
//    printf("hello");   
//    printf("3");
}

