#include <stdio.h>
  void main() {
    int a[10];
    int i, gt;
    printf("Enter ten values:");
    for (i = 0; i < 10; i++) {
    scanf("%d", &a[i]);
    }
    gt = a[0];
    for (i = 0; i < 10; i++) {
if (a[i] > gt) {
gt = a[i];
    }
    }
    printf("Greatest of ten numbers is %d", gt);
  }