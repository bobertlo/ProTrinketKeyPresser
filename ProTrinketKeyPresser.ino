#include <ProTrinketKeyboard.h>

void setup()
{
  TrinketKeyboard.begin();  // initialize USB keyboard code
}

void wait(unsigned long towait) {
  unsigned long start = millis();
  while (millis() < start + towait) {
    TrinketKeyboard.poll();
    delay(5);
  }
}

void loop()
{
  wait(500);

  TrinketKeyboard.pressKey(KEYCODE_MOD_LEFT_CONTROL | KEYCODE_MOD_LEFT_SHIFT, KEYCODE_F3);
  digitalWrite(LED_BUILTIN, HIGH);

  wait(250);

  TrinketKeyboard.pressKey(0, 0);
  digitalWrite(LED_BUILTIN, LOW);
}
