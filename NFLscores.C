#include <stdio.h>

int main() {
    int score;

    const char *scoreTypes[] = {
        "Touchdown+2pt", "Touchdown + FG", "Touchdown w/o FG/2pt", "3pt FG", "Safety"
    };

    const int scoreNums[] = {
        8, 7, 6, 3, 2
    };

    const int numScores = sizeof(scoreNums) / sizeof(scoreNums[0]);

    printf("Enter 1 or less to STOP\n");

    while(1) {
        printf("Please enter the NFL score: ");
        scanf("%d", &score);


        if(score <= 1) {
            break;
        }

        printf("All possible combinations of scoring plays:\n");
        for (int i = 0; i * scoreNums[0] <= score; i++) {
            for (int j = 0; j * scoreNums[1] <= score; j++) {
                for (int k = 0; k * scoreNums[2] <= score; k++) {
                    for (int l = 0; l * scoreNums[3] <= score; l++) {
                        for (int m = 0; m * scoreNums[4] <= score; m++) {
                            if (i * scoreNums[0] + j * scoreNums[1] + k * scoreNums[2] + l * scoreNums[3] + m * scoreNums[4] == score) {
                                printf("%d %s, %d %s, %d %s, %d %s, %d %s\n", i, scoreTypes[0], j, scoreTypes[1], k, scoreTypes[2], l, scoreTypes[3], m, scoreTypes[4]);
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
