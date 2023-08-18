int led = 2;
int btn = 3;
int estado;

unsigned long btnPressionado = 0;
unsigned long tempoPressionado = 0;
unsigned long btnApertado = 0;
void configuracaoPin(int ld, int bt);

void setup() {
  configuracaoPin(led, btn);
}
void loop() {
  estado = digitalRead(btn);

  if ( estado == LOW && btnApertado == 0) {
    btnApertado = millis();
  } else if (estado == HIGH &&  btnApertado > 0) {
    tempoPressionado = (millis() - btnApertado) / 1000;
    btnApertado = 0;
    Serial.println(tempoPressionado);

  } if ( tempoPressionado >= 5 && tempoPressionado <= 10 ) {
    for (int i = 0; i <= 5; i++) {
      digitalWrite(led, 1); delay(500);
      digitalWrite(led, 0); delay(500);
    }
    tempoPressionado  = 0;
  }

}
void configuracaoPin(int ld, int bt) {
  Serial.begin(9600);
  pinMode(ld, OUTPUT);
  pinMode(bt, INPUT_PULLUP);

}
