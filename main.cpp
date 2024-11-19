#include <Adafruit_LiquidCrystal.h>

int placa_1 = 0;
int placa_2 = 0;
int placa_3 = 0;
int placa_4 = 0;
int voltagem_total = 0;

Adafruit_LiquidCrystal lcd_1(0);

void setup() {
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  Serial.begin(9600);
  lcd_1.begin(16, 2);
}

void loop() {
  
  placa_1 = analogRead(A0) * (5.001 / 1023.001);
  placa_2 = analogRead(A1) * (5.001 / 1023.001);
  placa_3 = analogRead(A2) * (5.001 / 1023.001);
  placa_4 = analogRead(A3) * (5.001 / 1023.001);
  
  voltagem_total = placa_1 + placa_2 + placa_3 + placa_4;

  
  Serial.print("Placa 1: ");
  Serial.println(placa_1);
  Serial.print("Placa 2: ");
  Serial.println(placa_2);
  Serial.print("Placa 3: ");
  Serial.println(placa_3);
  Serial.print("Placa 4: ");
  Serial.println(placa_4);
  Serial.print("Voltagem Total: ");
  Serial.println(voltagem_total);

  
  lcd_1.setCursor(0, 0);
  lcd_1.print("Placas Solares");
  lcd_1.setCursor(0, 1);
  lcd_1.print("Voltagem = ");
  lcd_1.setCursor(11, 1);
  lcd_1.print(voltagem_total);

  delay(5000);
  lcd_1.clear();
}