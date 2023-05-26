#include <stdio.h>
#include <stdbool.h>

int main() 
{
  int n;
  scanf("%d", &n);

  int matrix[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }
  bool isUnitMatrix = true;
  for (int i = 0; i < n; i++) 
  {
    for (int j = 0; j < n; j++) 
    {
      if (i == j && matrix[i][j] != 1) 
      {
        isUnitMatrix = false;
        break;
      } else if (i != j && matrix[i][j] != 0) 
      {
        isUnitMatrix = false;
        break;
      }
    }
  }

  if (isUnitMatrix)
  {
    printf("YES\n");
  } else
  {
    printf("NO\n");
  }
  return 0;
}
