


#define BUZZER_PIN 27
#define LED_ALARME 13
#define BOTAO_FISICO 26
#define TRIG_PIN 12
#define ECHO_PIN 14

 #include <math.h>
 #include "AdafruitIO_WiFi.h"
 #include "NewPing.h"

// // Configuração do WiFi
// #define WIFI_SSID "Iphone do Gui."
// #define WIFI_PASS "guimaraes1123"

// // Autenticação AdafuritIO
// #define IO_USERNAME "guilhermeguimaraes11"
// #define IO_KEY "aio_jAyf49C1xyl6QN66aQQKNm4kMTWg"

// AdafruitIO_WiFi io(IO_USERNAME, IO_KEY, WIFI_SSID, WIFI_PASS);

// AdafruitIO_Feed *botaoled = io.feed("botaoled");

//Configuração do ultrassonico
#define MAX_DISTANCE 100
NewPing sonar(TRIG_PIN, ECHO_PIN, MAX_DISTANCE);

void setup() {

  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(LED_ALARME, OUTPUT);
  pinMode(BOTAO_FISICO, INPUT);

  Serial.begin(115200);

  while (!Serial)
    ;


  delay(1000);
}


//   Serial.println("Conectando com AdafruitIO");
//   io.connect();

//   int numTentativas = 0;

//   while (io.status() < AIO_CONNECTED) {
//     Serial.print(numTentativas);
//     Serial.println(" - Conexão Ainda Não Realizada");
//     numTentativas = numTentativas + 1;
//     delay(500);
//   }

//   // Mostra status da conexão

//   Serial.println();
//   Serial.println(io.statusText());

//   // Configuração do Callback, quando o feed recebe(atualizar) um valor

//   botaoled->onMessage(handleBotaoLed);  // Registra a função de Callback

//   delay(1000);
// }

void loop() {

  // testeBuzzer();
  // testeLed();
 //  testeButton(BOTAO_FISICO);
  Serial.print(F("Distancia Lida: "));
  Serial.println(sonar.ping_cm());
  delay(500);




  //   io.run();  // Manter a conexão com a AdrafuitIO Ativa
  //   delay(3000);
}