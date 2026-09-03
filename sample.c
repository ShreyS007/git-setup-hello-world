#include<stdio.h>

int main(){
    char name[50];
    printf("Enter name: \n");
    scanf("%s", &name);

    printf("Hello World %s using C Language", name);
    return 0;
}

void greet(const char* name){
    printf("Hello, %s! Activity2B.\n", name);
}