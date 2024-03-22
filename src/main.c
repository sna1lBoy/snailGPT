#include "llm.h"
extern char *tokens[];

int main() {

    // https://i.kym-cdn.com/entries/icons/facebook/000/046/214/i_pretend_i_do_not_see_it.jpg
    srand(time(NULL));

    // quantizing very important numbers
    int tokenCount = 0;
    while (tokens[tokenCount] != NULL) {
        tokenCount++;
    }

    // generating response super scientifically
    for (int i = 0; i <  (int) (((double)(7+1)/RAND_MAX) * rand() + 3); i++) {
        printf("%s ", tokens[(int) (((double)(tokenCount-1)/RAND_MAX) * rand() + 1)]);
    }
    printf("\n");
}
