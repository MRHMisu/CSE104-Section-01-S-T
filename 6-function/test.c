#include <stdio.h>
#include<math.h>
int হিসাব_কর_আলুর_দাম (int দাম){
   int আলুর_দাম=দাম*0.10;
   return আলুর_দাম;
}

int main()
{
   int আলুর_কেজি;
   printf("কত  কজি আলু কিনতে  চান ?: ");
   scanf("%d", &আলুর_কেজি);
   int test=pow(4,3);
   int আলুর_দাম=হিসাব_কর_আলুর_দাম(আলুর_কেজি);
   printf("%d কেজি আলুর দাম: %d",আলুর_কেজি, আলুর_দাম);
   return 0;
}
