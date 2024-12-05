#include <stdio.h>

int main() {
    
    const int k = 29260; 
    const int l= 29370;     
    scanf("%d %d", &w, &s);

    int r = (s * (s + 1)) / 2; 

    int x = r * k;
    int difference = w - x;
    int goldStackIndex = difference / (l - k);

    printf("%d\n", goldStackIndex);

    return 0;
}