/* test0.c */
#include <stdio.h>
/*
* このファイルを改変し適切なコメント(10行以上）を付けること
*/

// 引数：整数i, j
// 返値：整数iとjの積
// 機能：2つのintを受け取り、掛けて返す
int test(int i, int j) {
  return (i * j);
}

int main(int argc, char *argv) {
  int i, j; // test関数へ渡す変数
  int k; // test関数の返り値を受け取る変数
  // iとjへの代入
  i = 3;
  j = 2;
  // test関数を実行し、変数kに保存
  k = test(i, j);
  if (k > 5) { // kが5より大きいとき
    // 画面出力
    printf(">5\n");
  } else { // kが5以下のとき
    // 画面出力
    printf("<=5\n");
  }
  return 0;
}
