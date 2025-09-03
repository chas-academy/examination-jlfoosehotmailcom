#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char names[5][11];
    int scores[5][13];
    float averages[5];
    float max_avg = -1;
    int max_index = -1;

for (int i = 0; i < 5; i++) {
    scanf("%s", names[i]);
    int sum = 0;
    for (int j = 0; j < 13; j++) {
        scanf("%d", &scores[i][j]);
        sum += scores[i][j];
    }
    averages[i] = (float)sum / 13;

if (averages[i] > max_avg) {
    max_avg = averages[i];
    max_index = i;
    }
}
printf("%c%s\n", toupper(names[max_index][0]), names[max_index] + 1);

float total_avg = 0;
for (int i = 0; i < 5; i++) {
    total_avg += averages[i];
}

total_avg /= 5;

for (int i = 0; i < 5; i++) {
    if (averages[i] < total_avg) {
        printf("%c%s\n", toupper(names[i][0]), names[i] + 1);
    }
}

return 0;
}