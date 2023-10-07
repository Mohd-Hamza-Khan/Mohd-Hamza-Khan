#include<stdio.h>

void print(char c[100]){
    printf("%s",c);
}
void input(){
    char d[100];
    scanf("%s",&d);
}
int main(){
    print("Enter your name: \n");
    input();
    print("how are you");
}