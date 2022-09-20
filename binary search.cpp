#include <stdio.h>
int bsearch(int narr[], int d, int b, int a)
{
if (b >= d) {
int midval = d + (b - d) / 2;
if (narr[midval] == a)
return midval;
if (narr[midval] > a)
return bsearch(narr, d, midval - 1, a);
return bsearch(narr, midval + 1, b, a);
}
return -1;
}
int main(void)
{
int narr[] = { 5, 6, 7, 20, 30 };
int s1 = sizeof(narr) / sizeof(narr[0]);
int a = 20;
int final =bsearch(narr, 0, s1 - 1, a);
(final == -1) ? printf("The element couldn’t find on the array list")
: printf("The element is found at the list %d",
final);
return 0;
}
