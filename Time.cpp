#include <Time.h>

#include <Arduino.h>

using namespace s1nu5;

void Time::UpdateDeltaTime()
{
   unsigned long actualTime = millis();

   if (previousStartLoopTime > actualTime)
   {
      deltaTime = (4294967295 - previousStartLoopTime) + actualTime / 1000.0;
   }
   else
   {
      deltaTime = (actualTime - previousStartLoopTime) / 1000.0;
   }
}

Time::Time()
{
   previousStartLoopTime = 0;
   deltaTime = 0;
}

void Time::Update()
{
   UpdateDeltaTime();
   previousStartLoopTime = millis();
}
   
