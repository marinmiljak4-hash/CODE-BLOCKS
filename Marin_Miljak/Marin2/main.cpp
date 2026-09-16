#include <iostream>

using namespace std;

int main()
{
    int n;
    printf("Unesi mi broj; ",n);
    scanf("%i",&n);

    for(int i=0;i<=n;i++){
        if(i%3==0){
            printf("%i\n",i);
        }
    }
    int a;
    printf("Unesi mi drugi broj; ",a);
    scanf("%i",&a);

    for(int i=0;i<=a;i++){
        if(i%5==0){
            printf("%i\n",i);
        }
    }
    return 0;
}
