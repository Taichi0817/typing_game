#include <stdio.h>
#include <time.h>

#define N 100000

int main(void) {
    int i, j;
    int sum;
    
    time_t start_time, end_time;
    clock_t start_clock, end_clock;

    /* 処理開始前の時間とクロックを取得 */
    start_time = time(NULL);
    start_clock = clock();


    /* ループ処理 */
    sum = 0;
    for (j = 0; j < N; j++) {
        for (i = 0; i < N; i++) {
            sum += j * N + i;
        }
    }

    /* 処理開始後の時間とクロックを取得 */
    end_time = time(NULL);
    end_clock = clock();

    /* 計測時間の表示 */
    printf(
        "time:%ld\n",
        end_time - start_time
    );

    printf(
        "clock:%f\n", 
        (double)(end_clock - start_clock) / CLOCKS_PER_SEC
    );

    return 0;
}
