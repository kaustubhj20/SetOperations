/*
SYITA145 Kaustubh Jagtap
Assignment 1
Represent sets using one dimensional arrays and implement functions to perform 1.Union 2.Intersection 3.Difference 4.Symmetric Difference of two sets */

#include <stdio.h>
int main(void) {
  int m,a[50],b[50],n,s,c[50],v,g,h;
  printf("Select choice:\n1. union\n2. intersection\n3. difference\n4. symmetric difference of two sets\n");
  scanf("%d",&m);
  printf("how many elements u want to enter in set 1\n");
  scanf("%d",&n);
  printf("enter the elements:\n");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("how many elements u want to enter in set 2\n");
  scanf("%d",&s);
  printf("enter the elements:\n");
  for(int i=0;i<s;i++)
  {
    scanf("%d",&b[i]);
  }

  printf("set 1:");
  printf("{");
  
  for(int i=0;i<n;i++)
  {
    printf("%d\t,",a[i]);
  }
    printf("}");

printf("\nset 2:");
  printf("{");
  
  for(int i=0;i<s;i++)
  {
    printf("%d\t,",b[i]);
  }
    printf("}");

  switch(m)
  {
case 1:
{  
  for(int i=0;i<n+s;i++)
  {
    c[i]=0;
  }
  for(int i=0;i<n;i++)
  {
    c[i]=a[i];
    v++;
  }
  
    for(int i=0;i<s;i++)
    {
      g=0;
      for(int j=0;j<n;j++)
      { 
         if(b[i]==a[j])
         {
           g=1;
           break;
         }
         

      }
 if(g==0)
{
  c[v]=b[i];
  v++;
}

    }
  printf("\nUnion of two sets  = ");
  printf("{");
  
  for(int i=0;i<v;i++)
  {
    printf("%d\t,",c[i]);
  }
    printf("}");
  
  
  break;

}
case 2:
printf("Intersection of two sets:");
printf("{");
for(int i=0;i<n;i++)
{
 for(int j=0;j<s;j++)
 {
if(a[i]==b[j])
{
  printf("\t%d\t",a[i]);

}
 }
}
printf("}");
  
 break;
 case 3:
 printf("\nA-B={");
for(int i=0;i<n;i++)
{ h=0;
  for(int j=0;j<s;j++)
  {
    if(a[i]==b[j])
    {
      h=1;
      //printf("%d\t",a[i]);
      
    }
  }
  if(h==0)
  {
    printf("%d,\t",a[i]);
  }
}
printf("}");
printf("\n");
printf("\nB-A={");
for(int i=0;i<s;i++)
{ h=0;
  for(int j=0;j<n;j++)
  {
    if(a[j]==b[i])
    {
      h=1;  
    }
  }
  if(h==0)
  {
    printf("%d,\t",b[i]);
  }
  printf("}");
}

break;

case 4:
printf("\nSymmetric Difference:{");
for(int i=0;i<n;i++)
{ h=0;
  for(int j=0;j<s;j++)
  {
    if(a[i]==b[j])
    {
      h=1;
    }
  }
  if(h==0)
  {
    printf("%d,\t",a[i]);
  }
}
for(int i=0;i<s;i++)
{ h=0;
  for(int j=0;j<n;j++)
  {
    if(a[j]==b[i])
    {
      h=1;  
    }
  }
  if(h==0)
  {
    printf("%d,\t",b[i]);
  }
  printf("}");
}

}
}