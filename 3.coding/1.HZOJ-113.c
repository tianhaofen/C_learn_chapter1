/*************************************************************************
	> File Name: 1.HZOJ-113.c
	> Author:YYF 
	> Mail: 
	> Created Time: Wed 14 Aug 2024 04:48:16 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int y, m, a;
    scanf("%d%d", &y, &m);
    a = (y % 4 == 0 && y % 100) || y % 400 == 0;
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){
        printf("31\n");
    }
    else if(m == 4 || m == 6 || m == 9 || m == 11){
        printf("30\n");
    }
    else{
        printf("%d\n", 28 + a);
    }

    return 0;
}
