#include <iostream>

using namespace std;

int main()
{
    int n;
    printf("Unesi mi broj; ",n);
    scanf("%i",&n);

    if(n<5){
        printf("Broj je manji od 5");
    }
    else if(n==5){
        printf("Broj je jednak broja 5");
    }
    else if(n>=100){
        printf("To je veliki broj!!! o_o");
    }
    else if(n>5){
        printf("Broj je veci od 5");
    }
}
