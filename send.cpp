#include <mcp_can.h>
#include <SPI.h>

MCP_CAN CAN0(10); //Treba CS postavit na pin 10

void setup() {
    Serial.begin(115200);

    if (CAN0.begin(MCP_ANY, CAN_500KBPS, MCP_16MHZ) == CAN_OK)
        Serial.println("Bravo!");
    else
        Serial.println("Greska u postavljanju");

    CAN0.setMode(MCP_NORMAL);
}

//Primjer neke CAN poruke
byte data[8] = { 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01 };

void loop() {
    // sendMsgBuf(ID, CAN Frame, Velicina podatka, data)
    byte msg = CAN0.sendMsgBuf(0x100, 0, 8, data);
    if (msg == CAN_OK) {
        Serial.println("Poslano");
    }
    else {
        Serial.println("Nije poslano");
    }
    delay(100);
}
