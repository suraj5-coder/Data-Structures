//C Program to Check Whether a Character is Vowel or Consonant
#include <stdio.h>
int main() {
char ch[50];
printf("Enter a character: ");
scanf("%s",ch);
int n = 0;
while (ch[n] != '\0') {
    n++;
}
for (int i=0;i<n;i++)
    if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U')
        printf("%c is a vowel\n", ch[i]);
    else
        printf("%c is a consonant\n", ch[i]);
return 0;

}