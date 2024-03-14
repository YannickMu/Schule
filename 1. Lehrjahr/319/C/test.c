#include <stdio.h>

const int deltas[] = {
        -14,44,-3,-7,-3,-69,55,14,4,-1,6,-13,2,5,12,-15,9,-78
        ,85,-7,-10,-68,71,14,-1,-15,9,-78,50,35,-1,-1,-16,5,-71
};

int StartValueCollect(void);

int main(void) {
    int current = StartValueCollect();
    printf("\nYour passphrase, calculated based on\n");
    printf("\tthe answer to life the universe and everything (%d)\n", current);
    printf("is:\n\n\t\t'");
    for (size_t i = 0;i < sizeof(deltas)/sizeof(deltas[0]);i++) {
        current += deltas[i];
        printf("%c", (current + 42));
    }
    printf("'\n\n");
    printf("NOTE: In case you do not get any valid text, you either suffer "
           "of a programming error or the wrong answer to life...\n\n");
}

int StartValueCollect(void) {
    int value = 0;
    printf("Please enter the answer to life the universe and everything: ");
    scanf("%d", &value);
    return value;
}