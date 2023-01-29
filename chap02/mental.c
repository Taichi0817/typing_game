#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int a, b, c;
    int x;
    clock_t start, end;
    time_t start_time, end_time;
    double req_time;

    srand(time(NULL));

    a = 10 + rand() % 900;
    b = 10 + rand() % 900;
    c = 10 + rand() % 900;
    
    printf("%d + %d + %dはなんですか:", a, b, c);

    start = clock();
    start_time = time(NULL);
    while(1) {
        scanf("%d", &x);
        if (x == a + b + c)
            break;
        printf("\a違いますよ!!\n再入力してください：");
    }
    end = clock();
    end_time = time(NULL);
    req_time = end_time - start_time;
    printf("%.1f秒かかりました。\n", req_time);

    if (req_time > 30.0)
        printf("時間がかかりすぎです。\n");
    else if (req_time > 17.0)
        printf("まあまあですね。\n");
    else
        printf("素早いですね\n");

    return 0;
}
