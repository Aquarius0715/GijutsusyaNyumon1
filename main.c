#include <stdio.h>

int main() {

    /*
     * 課題１
     * １番目に入力した整数nと２番目に入力した整数m（＞＝n）に対して、n＋（n＋１）＋......＋mを求めるプログラムを作りなさい。
     */

    int n = 0;
    int m = 0;
    int x = 0;
    int count = 0;

    printf("Input n: ");

    scanf("%d", &n);

    printf("Input m: ");

    scanf("%d", &m);

    printf("n = %d\n", n);

    printf("m = %d\n", m);

    while (1) {

        if ((n + count) > m) {

            break;

        }

        x += n + count;

        count++;

    }

    printf("sum = %d", x);

    return 0;
}
