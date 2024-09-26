/*
	Sketch traffic light
    Dev Jeison Maigual - Harold Zambrano
    Date: 25/sep/2024
*/

int ledsRojos[] = {13, 10, 7, 4};
int ledsAmarillos[] = {12, 9, 6, 3};
int ledsVerdes[] = {11, 8, 5, 2};

void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(ledsRojos[i], OUTPUT);
    pinMode(ledsAmarillos[i], OUTPUT);
    pinMode(ledsVerdes[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < 4; i++) {
    apagarTodosLosSemaforos();
    digitalWrite(ledsVerdes[i], HIGH);
    for (int j = 0; j < 4; j++) {
      if (j != i) {
        digitalWrite(ledsRojos[j], HIGH);
      }
    }
    delay(5000);
    digitalWrite(ledsVerdes[i], LOW);
    digitalWrite(ledsAmarillos[i], HIGH);
    delay(2000);
  }
}

void apagarTodosLosSemaforos() {
  for (int i = 0; i < 4; i++) {
    digitalWrite(ledsRojos[i], LOW);
    digitalWrite(ledsAmarillos[i], LOW);
    digitalWrite(ledsVerdes[i], LOW);
  }
}
