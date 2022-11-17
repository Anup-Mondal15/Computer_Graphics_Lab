#include <stdio.h>
int main()
{
 char str[100], blank[100];
 int i = 0, d = 0;
 printf("Enter any string: ");
 gets(str);
 while (str[i] != '\0')
 {
 if (!(str[i] == ' ')) {
 blank[d] = str[i];
 d++;
 }
 i++;
 }
 blank[d] = '\0';
 printf("\nText after removing all white space: %s", blank);
 return 0;
}
