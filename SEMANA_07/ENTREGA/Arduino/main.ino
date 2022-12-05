// ESSE CÓDIGO TEM OS CRÉDITOS DE: https://github.com/alcarazolabs/ESP32-websocket-client-and-node.js/blob/main/esp32code.ino#L1

#include <WiFi.h>
#include <WebSocketClient.h>

//Configuração de rede
const char* ssid     = "ESP32 - Rede";
const char* password = "Senha1234";
char path[] = "/";
char host[] = "192.168.18.8:5000";
  
WebSocketClient webSocketClient;
WiFiClient client;

void setup() {
  Serial.begin(115200);
  delay(10);
  //Definição das portas dos LEDs
  pinMode(18, OUTPUT);
  pinMode(16, OUTPUT);

  //Conexão wi-fi
  Serial.println();
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);
  
  WiFi.begin(ssid, password);
  
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi connected");  
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());

  delay(5000);
  

  // Conectando a um websocket server com a porta "5000"
  if (client.connect("192.168.18.8", 5000)) {
    Serial.println("Connected");
  } else {
    Serial.println("Connection failed.");
    while(1) {
      // Hang on failure
    }
  }
  webSocketClient.path = path;
  webSocketClient.host = host;
  if (webSocketClient.handshake(client)) {
    Serial.println("Handshake successful");
  } else {
    Serial.println("Handshake failed.");
    while(1) {
      // Hang on failure
    }  
  }

}


void loop() {
  String data;

  if (client.connected()) {
  
  //Recebe informações da página web
    webSocketClient.getData(data);
    if (data.length() > 0) {
      Serial.print("Received data: ");
      Serial.println(data);
      led(data);
    }
   
    data = "Recebido";
    //Envia a confirmação de que recebeu o valor
    webSocketClient.sendData(data);
    
  } else {
    Serial.println("Client disconnected.");
    song();
    while (1) {
      // Hang on disconnect.
    }
  }

  delay(3000);
  
}