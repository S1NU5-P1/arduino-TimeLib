#pragma once

#include <Arduino.h>

namespace s1nu5
{
   class Time
   {
   private:
      unsigned long previousStartLoopTime;

      void UpdateDeltaTime();

   public:
      float deltaTime;

      Time();
      void Update();
   };
} // namespace s1nu5