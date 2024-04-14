// Stack overflow Assignment
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>
using namespace std;

#define BUFSIZE 300

using namespace std;

void give_shell()
{
  system("/bin/sh");
}

char *mgets(char *dst, size_t size)
{
  if (!dst || size == 0)
    return nullptr;

  char *ptr = dst;
  int ch;
  size_t count = 0;

  // Skip leading white spaces
  while ((ch = getchar()) && (isspace(ch)))
    ;

  if (ch == EOF || ch == '\n')
  {
    *ptr = '\0';
    return dst;
  }
  else
  {
    *ptr = ch;
    count++;
  }

  // Read the rest until \n or buffer is full
  while (count < size - 1)
  {
    ch = getchar();
    if (ch == EOF || ch == '\n')
      break;
    *(++ptr) = ch;
    count++;
  }

  *(++ptr) = '\0'; // Null-terminate the string
  return dst;
}

void bad()
{
  char buffer[BUFSIZE];
  printf("buffer is at %p\n", buffer);
  cout << "Give me some text: ";
  fflush(stdout);
  mgets(buffer, sizeof(buffer)); // similar to C's gets();
  // gets(buffer); // depricated
  cout << "Acknowledged: " << buffer << " with length " << strlen(buffer) << endl;
}

int main(int argc, char *argv[])
{
  bad();
  cout << "Good bye!\n";
  return 0;
}