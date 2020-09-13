#include <stdio.h>

int main() {

    /*
     * 課題１
     * １番目に入力した整数nと２番目に入力した整数m（＞＝n）に対して、n＋（n＋１）＋......＋mを求めるプログラムを作りなさい。
     */

    /*
     * 変数宣言
     */

    int n = 0;
    int m = 0;
    int x = 0;
    int count = 0;
    int change = 0;

    /*
     * 数を取得
     */

    while (1) {

        printf("Input n: "); scanf("%d", &n);

        if (!(n <= 100 && n >= -100)) {

            printf("数値は-100以上、100以下である必要があります。\n");

            continue;

        }

        printf("Input m: "); scanf("%d", &m);

        if (!(m <= 100 && m >= -100)) {

            printf("数値は-100以上、100以下である必要があります。\n");

            continue;

        }

        /*
         * もし１つ目の整数が２つ目の整数より大きい時、入れ替える。
         */

        if (m < n) {

            int n1 = n;

            n = m;

            m = n1;

            change = 1;

        }

        break;

    }

    printf("n = %d\nm = %d\n", n, m);


    /*
     * 計算
     */

    while (1) {

        if (n + count > m) break;

        x += n + count;

        count++;

    }

    /*
     * 結果表示
     */

    printf("sum = %d\n", x);

    if (change) {

        printf("(自動的に入れ替わりました。)");

    }

    return 0;

}
