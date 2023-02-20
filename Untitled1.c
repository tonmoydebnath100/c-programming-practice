#include <stdio.h>
 FILE *fp;
int main()
{
  int i, Number, count;

  printf(" Prime Number from 2 to 1000 are: \n");
  for(Number = 1; Number <= 1000; Number++)
  {
    count = 0;
    for (i = 2; i <= Number/2; i++)
    {
  	if(Number%i == 0)
  	{
     	  count++;
  	  break;
	}
    }
    if(count == 0 && Number != 1 )
    {
	printf(" %d ", Number);
fp = fopen("/tmp/test.txt", "w+");
   	fprintf(fp, " %d",Number);
      	fclose(fp);
    }
  }
  return 0;
}



