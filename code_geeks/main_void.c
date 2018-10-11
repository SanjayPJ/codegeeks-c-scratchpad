#include <stdio.h>

//this will work fine without any errors
//bcs fun can called with parameter or without any parameter

void fun(){}
int main(void){
    fun(10);
    return 0;
}

//it will fire an error "too many arguments to function"

void fun(void){}

int main(void){
    //fun cant take variables void means it cant take any
    fun(10);
    return 0;
}