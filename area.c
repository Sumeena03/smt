#include<stdio.h>
void area(int a, int b);

int main(){
    int l,b;
    printf("Enter the length of the rectangle \n");
    scanf("%d",&l);

    printf("Enter the breadth of the rectangle \n");
    scanf("%d",&b);

    area(l,b);

     return 0;
}

void area(int a, int b){
    int c;
    c=a*b;
    printf(" ARea of the rectangle is %d\n",c);
}