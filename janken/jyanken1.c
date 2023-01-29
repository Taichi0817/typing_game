#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {


    int human;
    int comp;
    int judge;
    int retry;

    srand(time(NULL));
    printf("じゃんけん開始\n");
        do {
            comp = rand() % 3;
            printf("手を入力してください。1:グー 2:チョキ 3:パー\n");
            scanf("%d", &human);

            printf("私は");
            switch(comp) {
                case 1: printf("グーです。");   break;
                case 2: printf("チョキです。"); break;
                case 3: printf("パーです。");   break;
            }
            printf("です。");
            judge = (human - comp + 3) % 3;
            switch(judge) {
                case 0: printf("あいこです。\n");       break;
                case 1: printf("あなたの負けです。\n"); break;
                case 2: printf("あなたの勝ちです\n");   break;
            }
            printf("もう一度プレイしますか？ Yes:1, No:0\n");
            scanf("%d", &retry);
        }while(retry == 1);
    return 0;
}

