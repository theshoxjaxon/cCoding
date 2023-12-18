#include<stdio.h>


void *likes(size_t n, char *const names[]) {
    if(n >= 4){
        printf("%s  and %s  and 2 others like this", names[0], names[1]);
    } else if (n <4 && n != 0) {
        printf("%s, %s and %s like this", names[0], names[1], names[2]);
    } else {
        printf("no one likes this");
    }
}


int main() {

    char *names[] = {"Sean", "Maga", "Aykhan", "Tuncay", "Tural"};
    size_t val = sizeof(names) / sizeof(names[0]);

    likes(val, names);
    return 0;
}
