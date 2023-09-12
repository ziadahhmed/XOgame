#include <stdio.h>
char a[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
int count1 = 0, count2 = 0, count3 = 0, sum4 = 0, sum5 = 0, sum6 = 0;
int aicount = 0, csum = 0, csum2 = 0, csum3 = 0, countvert = 0;
int aiwin = 0;
int countv = 0;
void shape() {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%c\t", a[i][j]);
    }
    printf("\n");
  }
}
int F = 0;
void savetrick() {
  if (F == 0)
    if (a[0][0] == 'x' && a[2][2] == 'x')
      for (int i = 0; i < 3; i += 2)
        if (a[1][i] != 'O' && a[1][i] != 'x') {
          a[1][i] = 'O';
          F = 1;
          break;
        }

  if (F == 0)
    if (a[0][2] == 'x' && a[2][0] == 'x')
      for (int i = 0; i < 3; i += 2)
        if (a[1][i] != 'O' && a[1][i] != 'x') {
          a[1][i] = 'O';
          F = 1;
          break;
        }
  if (F == 0)
    if (a[0][2] == 'x' && a[0][0] == 'x')
      for (int i = 0; i < 3; i += 2)
        if (a[1][i] != 'O' && a[1][i] != 'x') {
          a[1][i] = 'O';
          F = 1;
          break;
        }
  if (F == 0)
    if (a[0][0] == 'x' && a[2][0] == 'x')
      for (int i = 0; i < 3; i += 2)
        if (a[1][i] != 'O' && a[1][i] != 'x') {
          a[1][i] = 'O';
          F = 1;
          break;
        }

  if (F == 0)
    if (a[0][2] == 'x' && a[2][2] == 'x')
      for (int i = 0; i < 3; i += 2)
        if (a[1][i] != 'O' && a[1][i] != 'x') {
          a[1][i] = 'O';
          F = 1;
          break;
        }
  if (F == 0)
    if (a[2][2] == 'x' && a[2][0] == 'x')
      for (int i = 0; i < 3; i += 2)
        if (a[1][i] != 'O' && a[1][i] != 'x') {
          a[1][i] = 'O';
          F = 1;
          break;
        }
}
int E = 0, C = 0, o = 0, Q = 0;
;
void win() {

  // win hor
  int counto = 0;
  if (E == 0)
    for (int w = 0; w < 3; w++) {
      for (int l = 0; l < 3; l++) {
        if (a[w][l] == 'O')
          counto++;
        if (counto == 2)
          for (int i = 0; i < 3; i++)
            if (a[w][i] != 'O' && a[w][i] != 'x') {
              a[w][i] = 'O';
              E = 1;
              C = 1;
              break;
            }
        if (C == 1)
          break;
      }
      counto = 0;
      if (C == 1)
        break;
    }

  // CROSS WIN
  if (a[0][0] == 'O' && a[1][1] == 'O' && a[2][2] != 'O' && a[2][2] != 'x') {
    a[2][2] = 'O';
    E = 1;
  }

  if (a[2][2] == 'O' && a[1][1] == 'O' && a[0][0] != 'O' && a[0][0] != 'x') {
    a[0][0] = 'O';
    E = 1;
  }

  if (a[0][2] == 'O' && a[1][1] == 'O' && a[2][0] != 'O' && a[2][0] != 'x') {
    a[2][0] = 'O';
    E = 1;
  }
  if (a[2][0] == 'O' && a[1][1] == 'O' && a[0][2] != 'O' && a[0][2] != 'x') {
    a[0][2] = 'O';
    E = 1;
  }

  // ver win
  if (Q == 0)
    for (int w = 0; w < 3; w++) {
      for (int l = 0; l < 3; l++) {
        if (a[l][w] == 'O')
          o++;
        if (o == 2) {
          for (int i = 0; i < 3; i++)
            if (a[i][w] != 'O' && a[i][w] != 'x') {
              a[i][w] = 'O';
              Q = 1;
              break;
            }
          if (Q == 1)
            break;
        }
        if (Q == 1)
          break;
      }
      if (Q == 1)
        break;
      o = 0;
    }
}

void savecross() {
  if (a[0][0] == 'x' && a[2][2] == 'x' && a[1][1] != 'O') {
    a[1][1] = 'O';
    F = 1;
  }
  if (a[0][0] == 'x' && a[1][1] == 'x' && a[2][2] != 'O') {
    a[2][2] = 'O';
    F = 1;
  }
  if (a[1][1] == 'x' && a[2][2] == 'x' && a[0][0] != 'O') {
    a[0][0] = 'O';
    F = 1;
  }
  if (a[0][2] == 'x' && a[2][0] == 'x' && a[1][1] != 'O') {
    a[1][1] = 'O';
    F = 1;
  }
  if (a[0][2] == 'x' && a[1][1] == 'x' && a[2][0] != 'O') {
    a[2][0] = 'O';
    F = 1;
  }
  if (a[1][1] == 'x' && a[2][0] == 'x' && a[0][2] != 'O') {
    a[0][2] = 'O';
    F = 1;
  }
}
int main(void) {
  int plays = 0;
  int sum1 = 0, sum2 = 0, sum3 = 0, c;
  int count = 0;
  int y[9], m = 0;
  shape();
  for (int i = 0; i < 5; i++) {
    char player = 'x';
  start:

  again:
    printf("play  : ");
    scanf("%d", &c);
    y[m] = c;
    for (int s = 0; s < 10; s++)
      if ((c == y[s] && s != m) || c == 0)
        goto again;
    m++;
    if (c > 9)
      goto again;

    plays++;
    // first array option

    if (c == 1 || c == 2 || c == 3) {
      if (a[0][c - 1] == 'O')
        goto start;
      a[0][c - 1] = 'x';
      // save and win
      aicount = 0;
      csum += c;
      // WIN
      win();
      if (E == 1 || Q == 1)
        goto A;
      // Cross save
      if (a[1][1] != 'O' && a[1][1] != 'x') {
        a[1][1] = 'O';
        goto A;
      }

      // cross save
      savecross();
      if (F == 1)
        goto A;

      // vert save
      countv = 0;
      for (int w = 0; w < 3; w++) {
        for (int l = 0; l < 3; l++) {
          if (a[l][w] == 'x')
            countv++;
          if (countv == 2)
            for (int S = 0; S < 3; S++) {
              if (a[S][w] != 'x' && a[S][w] != 'O') {
                a[S][w] = 'O';
                goto A;
              }
            }
        }
        countv = 0;
      }

      // save horz
      for (int l = 0; l < 3; l++) {
        if (a[0][l] == 'x')
          aicount++;

        if (aicount == 2) {
          int v;
          v = 5 - csum;
          if (a[0][v] != 'O') {
            a[0][v] = 'O';
            goto A;
          }
        }
      }
      // savetrick
      savetrick();
      if (F == 1)
        goto A;
      // SAVE TRICK2
      if (a[1][0] == 'x' && a[0][2] == 'x' && a[0][0] != 'O' &&
          a[0][0] != 'x') {
        a[0][0] = 'O';
        goto A;
      }
      // save trick 3
      if (a[2][0] == 'x' && a[0][1] == 'x' && a[0][0] != 'x' &&
          a[0][0] != 'O') {
        a[0][0] = 'O';
        goto C;
      }
      // save trick 4
      if (a[2][2] == 'x' && a[0][1] == 'x' && a[0][2] != 'x' &&
          a[0][2] != 'O') {
        a[0][2] = 'O';
        goto C;
      }

      // random
      for (int ai = 2; ai >= 0; ai--) {
        for (int ai2 = 2; ai2 >= 0; ai2--) {
          if (a[ai][ai2] != 'O' && a[ai][ai2] != 'x') {
            a[ai][ai2] = 'O';
            goto A;
          }
        }
      }

    A:
      // SHAPE after each play

      printf("\n");
      system("clear");
      for (int u = 0; u < 3; u++) {
        printf("\n");
        for (int n = 0; n < 3; n++)
          printf("%c\t", a[u][n]);
      }
      if (F == 1)
        F = 3;
      if (E == 1)
        E = 3;
      if (Q == 1)
        Q = 3;
    }

    // second array option
    if (c == 4 || c == 5 || c == 6) {
      if (a[1][c - 4] == 'O')
        goto start;
      a[1][c - 4] = 'x';

      aicount = 0;
      csum2 += c;
      // WIN
      win();
      if (E == 1 || Q == 1)
        goto B;
      // Cross save
      if (a[1][1] != 'O' && a[1][1] != 'x') {
        a[1][1] = 'O';
        goto B;
      }
      // cross save
      savecross();
      if (F == 1)
        goto B;

      // vert save
      countv = 0;
      for (int w = 0; w < 3; w++) {
        for (int l = 0; l < 3; l++) {
          if (a[l][w] == 'x')
            countv++;
          printf("count : %d\n", countv);
          if (countv == 2)
            for (int S = 0; S < 3; S++) {
              if (a[S][w] != 'x' && a[S][w] != 'O') {
                a[S][w] = 'O';
                goto B;
              }
            }
        }
        countv = 0;
        printf("\ncount 2 =%d\n", countv);
      }

      // hor save
      for (int l = 0; l < 3; l++) {
        if (a[1][l] == 'x')
          aicount++;

        if (aicount == 2) {
          int v;
          v = 11 - csum2;
          if (a[1][v] != 'O') {
            a[1][v] = 'O';
            goto B;
          }
        }
      }
      // cross save
      savetrick();
      if (F == 1)
        goto B;

      // random
      for (int ai = 0; ai < 3; ai++) {
        for (int ai2 = 2; ai2 >= 0; ai2--) {
          if (a[ai][ai2] != 'O' && a[ai][ai2] != 'x') {
            a[ai][ai2] = 'O';
            goto B;
          }
        }
      }
    B:
      // SHAPE after each play
      printf("\n");
      system("clear");
      for (int u = 0; u < 3; u++) {
        printf("\n");
        for (int n = 0; n < 3; n++)
          printf("%c\t", a[u][n]);
      }
      if (F == 1)
        F = 3;
      if (E == 1)
        E = 3;
      if (Q == 1)
        Q = 3;
    }
    // third array option
    if (c == 7 || c == 8 || c == 9) {
      if (a[2][c - 7] == 'O')
        goto start;
      a[2][c - 7] = 'x';

      aicount = 0;
      csum3 += c;
      // WIN
      win();
      if (E == 1 || Q == 1)
        goto C;
      // Cross save
      if (a[1][1] != 'O' && a[1][1] != 'x') {
        a[1][1] = 'O';
        goto C;
      }

      // cross save
      savecross();
      if (F == 1)
        goto C;

      // vert save
      countv = 0;
      for (int w = 0; w < 3; w++) {
        for (int l = 0; l < 3; l++) {
          if (a[l][w] == 'x')
            countv++;
          if (countv == 2)
            for (int S = 0; S < 3; S++) {
              if (a[S][w] != 'x' && a[S][w] != 'O') {
                a[S][w] = 'O';
                goto C;
              }
            }
        }
        countv = 0;
      }

      // save hor

      for (int l = 0; l < 3; l++) {
        if (a[2][l] == 'x')
          aicount++;

        if (aicount == 2) {
          int v;
          v = 17 - csum3;
          if (a[2][v] != 'O') {
            a[2][v] = 'O';
            goto C;
          }
        }
      }
      // SAVE TRICK
      savetrick();
      if (F == 1)
        goto C;
      // SAVE TRICK 2
      if (a[1][2] == 'x' && a[2][0] == 'x' && a[2][2] != 'O' &&
          a[2][2] != 'x') {
        a[2][2] = 'O';
        goto C;
      }
      // save trick 3
      if (a[0][0] == 'x' && a[2][1] == 'x' && a[2][0] != 'x' &&
          a[2][0] != 'O') {
        a[2][0] = 'O';
        goto C;
      }
      // save trick 4
      if (a[0][2] == 'x' && a[2][1] == 'x' && a[2][2] != 'x' &&
          a[2][2] != 'O') {
        a[2][2] = 'O';
        goto C;
      }

      // random
      for (int ai = 0; ai < 3; ai++) {
        for (int ai2 = 0; ai2 < 3; ai2++) {
          if (a[ai][ai2] != 'O' && a[ai][ai2] != 'x') {
            a[ai][ai2] = 'O';
            goto C;
          }
        }
      }

    C:

      // SHAPE after each play
      printf("\n");
      system("clear");
      for (int u = 0; u < 3; u++) {
        printf("\n");
        for (int n = 0; n < 3; n++)
          printf("%c\t", a[u][n]);
      }
      if (F == 1)
        F = 3;
      if (E == 1)
        E = 3;
      if (Q == 1)
        Q = 3;
    }

    printf("\n\n\n");

    int countx = 0, counto = 0;
    // hor line
    for (int w = 0; w < 3; w++) {
      for (int l = 0; l < 3; l++) {
        if (a[w][l] == 'x')
          countx++;
        else if (a[w][l] == 'O')
          counto++;
      }
      if (countx == 3) {
        printf("CONGRATULATIONS!! player (x) win\n");
        return 0;
      } else if (counto == 3) {
        printf("CONGRATULATIONS!! player (O) win\n");
        return 0;
      }
      countx = 0;
      counto = 0;
    }
    // ver line
    for (int w = 0; w < 3; w++) {
      for (int l = 0; l < 3; l++) {
        if (a[l][w] == 'x')
          countx++;
        else if (a[l][w] == 'O')
          counto++;
      }
      if (countx == 3) {
        printf("CONGRATULATIONS!! player (x) win\n");
        return 0;
      } else if (counto == 3) {
        printf("CONGRATULATIONS!! player (O) win\n");
        return 0;
      }
      countx = 0;
      counto = 0;
    }
    // cross

    if (a[0][0] == 'x' && a[1][1] == 'x' && a[2][2] == 'x') {
      printf("CONGRATULATIONS!! player (X) win\n");
      return 0;
    } else if (a[0][0] == 'O' && a[1][1] == 'O' && a[2][2] == 'O') {
      printf("CONGRATULATIONS!! player  (O) win\n");
      return 0;
    }
    if (a[0][2] == 'x' && a[1][1] == 'x' && a[2][0] == 'x') {
      printf("CONGRATULATIONS!! player (X) win\n");
      return 0;
    } else if (a[0][2] == 'O' && a[1][1] == 'O' && a[2][0] == 'O') {
      printf("CONGRATULATIONS!! player  (O) win\n");
      return 0;
    }
    if (plays == 5) {
      printf("\t\nDRAW!!");
      return 0;
    }
  }
}
