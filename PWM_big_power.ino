/* Dalam percobaan ini menggunakan attiny85 
 * Dalam membuat ini pin 5 PB0 sebagai output PWM
 * sedangkan Pin 3 A2 sebagai input nilai potensiometer
 * Dalam percobaan awal gunakan output dengan led saja seri dengan R 330 ohm
 * Bila berhasil baru kalian tambah mosget sebagai driver
 * nilai potensiometer bebas, karena ini sebagai pembagi tegangan saja
 Dibuat sebagai menyadur dari beberapa sumber oleh
 Youtube Radal05
 tagun 2021 Nopember
 */
#define red_led 0
#define pot_pin A2
void setup() {
  // put your setup code here, to run once:
  pinMode (red_led,OUTPUT);
  pinMode (pot_pin,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int pwm_value,pot_value;
  pot_value = analogRead (pot_pin);
  pwm_value = pot_value / 4;
  analogWrite(red_led, pwm_value);
  delay(200);
}
