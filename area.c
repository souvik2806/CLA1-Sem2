#include <stdio.h>
int main()
{ int length,width,height,surfacearea;
    scanf("%d",&length);
    scanf("%d",&width);
   scanf("%d",&height);
    surfacearea=2*(width*length+length*height+height*width);
    printf("%d",surfacearea);
	return 0;
}