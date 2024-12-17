/*a jednu ledicu pali u intervalu od dvije sekunde, 
a drugu u intervalu od tri sekunde. Ledice neka budu
upaljene pola sekunde prije nego se opet ugase.*/

void ledOnOff(int n) {
	digitalWrite(n, HIGH);
	delay(500);
	digitalWrite(n, LOW);
}

void setup() {
	//Spajamo ledice na pinove 12 i 13
	pinMode(12, OUTPUT);
	pinMode(13, OUTPUT);
}

void loop() {
	delay(2000);
	ledOnOff(12);
	delay(1000);
	ledOnOff(13);
}
