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
  //TrinketKeyboard.pressKey(0, 0);
  wait(500);

  digitalWrite(LED_BUILTIN, HIGH);


  TrinketKeyboard.pressKey(0, KEYCODE_LEFT_CONTROL);
  wait(100);

  TrinketKeyboard.pressKey(0, KEYCODE_LEFT_CONTROL);
  wait(100);

  TrinketKeyboard.pressKey(0, KEYCODE_LEFT_CONTROL);
  wait(100);

  TrinketKeyboard.pressKey(0, KEYCODE_LEFT_GUI);
  wait(100);
  TrinketKeyboard.pressKey(0, 0);
  TrinketKeyboard.write("disk partitions");
  wait(100);
  TrinketKeyboard.pressKey(0, KEYCODE_ENTER);
  wait(100);
  TrinketKeyboard.pressKey(0, 0);

  digitalWrite(LED_BUILTIN, LOW);
  wait(5000);
}
