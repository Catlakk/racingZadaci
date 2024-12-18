/*a jednu ledicu pali u intervalu od dvije sekunde,
a drugu u intervalu od tri sekunde. Ledice neka budu
upaljene pola sekunde prije nego se opet ugase.*/

unsigned long currentTime = 0;
unsigned long t0 = 0;
unsigned long t1 = 0;
unsigned long t2 = 0;

void setup() {
    // put your setup code here, to run once:
    pinMode(13, OUTPUT);
    pinMode(12, OUTPUT);
}

void loop() {
    currentTime = millis();

    onLed1();
    onLed2();
}

void offLed(int n) {
    if (currentTime - t0 >= 500) {
        t0 += 500;
        digitalWrite(n, LOW);
    }
}

void onLed1() {
    if (currentTime - t1 >= 2000) {
        t1 += 2000;
        digitalWrite(13, HIGH);
        offLed(13);
    }

}

void onLed2() {
    if (currentTime - t2 >= 3000) {
        t2 += 3000;
        digitalWrite(12, HIGH);
        offLed(12);
    }

}