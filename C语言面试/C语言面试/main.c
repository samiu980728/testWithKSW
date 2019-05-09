//
//  main.c
//  C语言面试
//
//  Created by 萨缪 on 2019/3/16.
//  Copyright © 2019年 萨缪. All rights reserved.
//

//#include <stdio.h>
//int main(void)
//{
//    int a[4]={541663264,1163284300,1431263520,0};
//    //1163284300
//    int a[4]={1163284300};
//    printf("%s\n",a);
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int a,b;
//    int i = 65;
////    printf("%d\n",printf("%d",printf("%d %d",scanf("%d %d",&a,&b),i)));
////    printf("%d",printf("%d %d",scanf("%d %d",&a,&b),i));
////    printf("%d %d",scanf("%d %d",&a,&b),i);
//    printf("%d\n",scanf("%d %d",&a,&b));
//
////    scanf("%d %d",&a,&b);
////    printf("a = %d b = %d",a,b);
//    return 0;
//}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct PNode {
    char arr1[4];
    int a;
    char arr2[4];
};
int main(void) {
    struct PNode p;
    strcpy(p.arr1, "I love");
    p.a = 0x20206576;
    strcpy(p.arr2, "3G!");
    printf("%s", p.arr1);
    return 0;
}

