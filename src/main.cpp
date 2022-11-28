#include "pmbtools.h"

void call()
{
  auto rv = join({"Hello", " ", "world"});
}
#ifdef EMBEDDED_PLATFORM
#include <Arduino.h>

void setup()
{
  // put your setup code here, to run once:
  call();
}

void loop()
{
  // put your main code here, to run repeatedly:
}
#else

int main()
{
  call();
}
#endif