#include <stdio.h>
#include <stdlib.h>
// 1. In ra màn hình các số chẵn trong đoạn
int main()
{

    int start, end, tam;
    printf("Input start: ");
    scanf("%d", &start);
    printf("Input end: ");
    scanf("%d", &end);
    if (start > end)
    {
        tam = start;
        start = end;
        end = tam;
    }
    for(int i = start + 1; i < end; i++){
        if (i % 2 == 0){
            printf("%d ", i);
        }
    }
    return 0;
}
