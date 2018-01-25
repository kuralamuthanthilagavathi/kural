#include<stdio.h>
#include<string.h>
int cmpstr(char s1[10], char s2[10]);

  int main() {
    char a1[10] = "Nodalo";
    char a2[10] = "nodalo";
    printf(" %d", cmpstr(a1, a2));
    return 0;
    }
    int cmpstr(char s1[10], char s2[10]) {
    int i = strlen(s1);
    int k = strlen(s2);
    int big;
    if (i < k) {
      big = k;
    }
    else if (i > k) {
      big = i;
    }
    else {
      big = i;
    }
    for (i = 0; i < big; i++) {
      if (s1[i] == s2[i]) {
      }
      else {
        return (s1[i] - s2[i]);
      }
    }
    return (0);
  }
