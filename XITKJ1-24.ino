/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
 */


// the setup function runs once when you press reset or power the board
void setup() {
  // membuat target pin output yang digunakan
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  //memberi perulangan
  digitalWrite(13, HIGH);   // Pada pin 13,LED menyala
  delay(3000);              // Tunda 3 sec pada saat menyala
  digitalWrite(13, LOW);    // Pada pin 13, LED mati
  delay(3000);              // Tunda 3 sec pada saat mati
}
