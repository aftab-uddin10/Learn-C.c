//Syntax

do {
  // code block to be executed
}
while (condition);

//The example below uses a do/while loop. The loop will always be executed at least once, even if the condition is false, because the code block is executed before the condition is tested:
//Example

int i = 0;
do {
  printf("%d\n", i);
  i++;
}
while (i < 5);
