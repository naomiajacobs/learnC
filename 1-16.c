#include <stdio.h>
#define MAXLINE 1000

int getnextline(char line[], int maxline);
void copy(char to[], char from[]);

int main() {
  int len, maxLength;
  char currentLine[MAXLINE];
  char longestLine[MAXLINE];

  maxLength = 0;
  while((len = getnextline(currentLine, MAXLINE)) > 0) {
    if (len > maxLength) {
      maxLength = len;
      copy(longestLine, currentLine);
    }
  }
  if (maxLength > 0) {
    printf("%s", longestLine);
  }

  return 0;
}

int getnextline(char string[], int limit) {
  int c, i;

  for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    string[i] = c;
  }
  if (c == '\n') {
    string[i] = c;
    ++i;
  }
  string[i] = '\0';
  return i;
}

void copy(char to[], char from[]) {
  int i = 0;
  while((to[i] = from[i]) != '\0') {
    ++i;
  }
}
