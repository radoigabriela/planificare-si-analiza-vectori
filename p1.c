#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n, inceput[100], sfarsit[100], nr[100];
  int ora, min, i, aux, sch;
  printf("Introduceti numarul spectacolelor: ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
   nr[i]=i+1;
   printf("Introduceti momentul de inceput al spectacolului: ");
   scanf("%d %d",&ora ,&min);
   inceput[i]=ora*60+min;
   printf("Introduceti momentul de sfarsit al spectacolului: ");
   scanf("%d %d",&ora ,&min);
   sfarsit[i]=ora*60+min;
  }

  while(sch!=0)
  {
   sch=0;
   for(i=0;i<n-1;i++)
   {
    if(sfarsit[nr[i]]>sfarsit[nr[i+1]])
    {
     aux=nr[i];
     nr[i]=nr[i+1];
     nr[i+1]=aux;
     sch=1;
    }
   }
  }

 for(i=0;i<n;++i)
 if(inceput[nr[i+1]]>=sfarsit[nr[i]])
  printf("\nNumarul maxim de spectacole este: %d ",nr[i]+1);
 return 0;
}
