//Given a set of numbers (user given), identify MAX and MIN element.

#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++)
  {
      scanf("%d", &a[i]);
  }

  int max = a[0];
  int min = a[0];

  for (int i = 1; i < n; i++)
  {
    if (a[i] > max) max = a[i];
    if (a[i] < min) min = a[i];
  }
   printf("%d\n", max);
   printf("%d\n", min);
   return 0;
}
//[2,3,6,87,3,90,4]-> min=2, max=90
// Mohd Ataul Hakim-> [2,3,3,4,6,87,90]-> [0]location-> max[5]location->max

//max= 90
//Mimi -> max >[1]location
          // max=[1]location