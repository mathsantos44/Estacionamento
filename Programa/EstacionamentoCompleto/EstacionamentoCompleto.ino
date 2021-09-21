// Declaração de Bibliotecas
#include <SPI.h>
#include <LiquidCrystal.h>
#include <Ethernet.h>

//Declaração do Display LCD
LiquidCrystal lcd(2, 3, 4, 6, 7, 8, 9);

//Declaração dos objetos do Ethernet Shield
byte mac[] = { 0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED };
IPAddress ip(192,168,15,75);
EthernetServer server(80);

//Definição dos Sensores
#define sensor1 22
#define sensor2 23
#define sensor3 24
#define sensor4 25
#define sensor5 27

//Definição dos Leds
#define ledr1 30
#define ledg1 31
#define ledb1 32

#define ledr2 34
#define ledg2 35
#define ledb2 36

#define ledr3 38
#define ledg3 39
#define ledb3 40

#define ledr4 42
#define ledg4 43
#define ledb4 44

#define ledr5 46
#define ledg5 47
#define ledb5 48

//Estado dos Sensores
boolean estadosensor1;
boolean estadosensor2;
boolean estadosensor3;
boolean estadosensor4;
boolean estadosensor5;

void setup() {
  //Inicialização Serial
  Serial.begin(9600);

  //Inicialização do Servidor
  Ethernet.begin(mac, ip);
  server.begin();

  //Inicialização do Display LCD
  lcd.begin(16, 2);

  //PinMode Sensores
  for (int i = 22; i <= 27; i++) {
    pinMode(i, INPUT);
  }

  //PinMode LED's
  for (int i = 30; i <= 48; i++) {
    pinMode(i, OUTPUT);
    digitalWrite(i, HIGH);
  }
}

void loop() {
  //Verificação de Estado dos Sensores
  estadosensor1 = digitalRead(sensor1);
  estadosensor2 = digitalRead(sensor2);
  estadosensor3 = digitalRead(sensor3);
  estadosensor4 = digitalRead(sensor4);
  estadosensor5 = digitalRead(sensor5);

  //Definição da Quantidade de Vagas
  if ((estadosensor1) && (estadosensor2) && (estadosensor3) && (estadosensor4) && (estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 5");
    delay(500);
    lcd.clear();
  }
  if ((estadosensor1) && (estadosensor2) && (estadosensor3) && (estadosensor4) && (!estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 4");
    delay(500);
    lcd.clear();
  }
  if ((estadosensor1) && (estadosensor2) && (estadosensor3) && (!estadosensor4) && (estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 4");
    delay(500);
    lcd.clear();
  }
  if ((estadosensor1) && (estadosensor2) && (estadosensor3) && (!estadosensor4) && (!estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 3");
    delay(500);
    lcd.clear();
  }
  if ((estadosensor1) && (estadosensor2) && (!estadosensor3) && (estadosensor4) && (estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 4");
    delay(500);
    lcd.clear();
  }
  if ((estadosensor1) && (estadosensor2) && (!estadosensor3) && (estadosensor4) && (!estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 3");
    delay(500);
    lcd.clear();
  }
  if ((estadosensor1) && (estadosensor2) && (!estadosensor3) && (!estadosensor4) && (estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 3");
    delay(500);
    lcd.clear();
  }
  if ((estadosensor1) && (estadosensor2) && (!estadosensor3) && (!estadosensor4) && (!estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 2");
    delay(500);
    lcd.clear();
  }
  if ((estadosensor1) && (!estadosensor2) && (estadosensor3) && (estadosensor4) && (estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 4");
    delay(500);
    lcd.clear();
  }
  if ((estadosensor1) && (!estadosensor2) && (estadosensor3) && (estadosensor4) && (!estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 3");
    delay(500);
    lcd.clear();
  }
  if ((estadosensor1) && (!estadosensor2) && (estadosensor3) && (!estadosensor4) && (estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 3");
    delay(500);
    lcd.clear();
  }
  if ((estadosensor1) && (!estadosensor2) && (estadosensor3) && (!estadosensor4) && (!estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 2");
    delay(500);
    lcd.clear();
  }
  if ((estadosensor1) && (!estadosensor2) && (!estadosensor3) && (estadosensor4) && (estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 3");
    delay(500);
    lcd.clear();
  }
  if ((estadosensor1) && (!estadosensor2) && (!estadosensor3) && (estadosensor4) && (!estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 2");
    delay(500);
    lcd.clear();
  }
  if ((estadosensor1) && (!estadosensor2) && (!estadosensor3) && (!estadosensor4) && (estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 2");
    delay(500);
    lcd.clear();
  }
  if ((estadosensor1) && (!estadosensor2) && (!estadosensor3) && (!estadosensor4) && (!estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 1");
    delay(500);
    lcd.clear();
  }
  if ((!estadosensor1) && (estadosensor2) && (estadosensor3) && (estadosensor4) && (estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 4");
    delay(500);
    lcd.clear();
  }
  if ((!estadosensor1) && (estadosensor2) && (estadosensor3) && (estadosensor4) && (!estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 3");
    delay(500);
    lcd.clear();
  }
  if ((!estadosensor1) && (estadosensor2) && (estadosensor3) && (!estadosensor4) && (estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 3");
    delay(500);
    lcd.clear();
  }
  if ((!estadosensor1) && (estadosensor2) && (estadosensor3) && (!estadosensor4) && (!estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 2");
    delay(500);
    lcd.clear();
  }
  if ((!estadosensor1) && (estadosensor2) && (!estadosensor3) && (estadosensor4) && (estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 3");
    delay(500);
    lcd.clear();
  }
  if ((!estadosensor1) && (estadosensor2) && (!estadosensor3) && (estadosensor4) && (!estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 2");
    delay(500);
    lcd.clear();
  }
  if ((!estadosensor1) && (estadosensor2) && (!estadosensor3) && (!estadosensor4) && (estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 2");
    delay(500);
    lcd.clear();
  }
  if ((!estadosensor1) && (estadosensor2) && (!estadosensor3) && (!estadosensor4) && (!estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 1");
    delay(500);
    lcd.clear();
  }
  if ((!estadosensor1) && (!estadosensor2) && (estadosensor3) && (estadosensor4) && (estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 3");
    delay(500);
    lcd.clear();
  }
  if ((!estadosensor1) && (!estadosensor2) && (estadosensor3) && (estadosensor4) && (!estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 2");
    delay(500);
    lcd.clear();
  }
  if ((!estadosensor1) && (!estadosensor2) && (estadosensor3) && (!estadosensor4) && (estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 2");
    delay(500);
    lcd.clear();
  }
  if ((!estadosensor1) && (!estadosensor2) && (estadosensor3) && (!estadosensor4) && (!estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 1");
    delay(500);
    lcd.clear();
  }
  if ((!estadosensor1) && (!estadosensor2) && (!estadosensor3) && (estadosensor4) && (estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 2");
    delay(500);
    lcd.clear();
  }
  if ((!estadosensor1) && (!estadosensor2) && (!estadosensor3) && (estadosensor4) && (!estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 1");
    delay(500);
    lcd.clear();
  }
  if ((!estadosensor1) && (!estadosensor2) && (!estadosensor3) && (!estadosensor4) && (estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 1");
    delay(500);
    lcd.clear();
  }
  if ((!estadosensor1) && (!estadosensor2) && (!estadosensor3) && (!estadosensor4) && (!estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 0");
    delay(500);
    lcd.clear();
  }

  //Funcionamento dos LED's
  if (estadosensor1) {
    color1(255, 0, 255);
  } else {
    color1(0, 255, 255);
  }
  if (estadosensor2) {
    color2(255, 0, 255);
  } else {
    color2(0, 255, 255);
  }
  if (estadosensor3) {
    color3(255, 0, 255);
  } else {
    color3(0, 255, 255);
  }
  if (estadosensor4) {
    color4(255, 0, 255);
  } else {
    color4(0, 255, 255);
  }
  if (estadosensor5) {
    color5(255, 0, 255);
  } else {
    color5(0, 255, 255);
  }

  //Iniciando Conexão com Internet
  EthernetClient client = server.available();

  if (client) { // Se ocorrer um conexão
        
        boolean currentLineIsBlank = true;
        while (client.connected()) {
            if (client.available()) {
                char c = client.read();

                if (c == '\n' && currentLineIsBlank) {
                    client.println("HTTP/1.1 200 OK");
                    client.println("Content-Type: text/html");
                    client.println("Connection: close");
                    client.println();

                    // Página Web
                    client.println("<!DOCTYPE html>");
                    client.println("<html lang=\"pt-br\">");
                    client.println("<head>");
                    client.println("<meta charset=\"UTF-8\">");
                    client.println("<meta http-equiv=\"X-UA-Compatible\" content=\"IE=edge\">");
                    client.println("<meta name=\"viewport\" content=\"width=device-width, initial-scale=1, shrink-to-fit=no\">");
                    client.println("<title>Smart Parking</title>");
                    client.println("");
                    client.println("<!-- Bootstrap CSS -->");
                    client.println("<link rel=\"stylesheet\" href=\"https://stackpath.bootstrapcdn.com/bootstrap/4.1.3/css/bootstrap.min.css\" integrity=\"sha384-MCw98/SFnGE8fJT3GXwEOngsV7Zt27NXFoaoApmYm81iuXoPkFOJwJ8ERdknLPMO\" crossorigin=\"anonymous\">");
                    client.println("");
                    client.println("<!-- Font Awesome -->");
                    client.println("<script src=\"https://kit.fontawesome.com/63ad96eca7.js\" crossorigin=\"anonymous\"></script>");
                    client.println("");
                    client.println("<!-- Favicon -->");
                    client.println("<link rel=\"shortcut icon\" href=\"https://imagepng.org/wp-content/uploads/2017/10/placa-estacionamento-estacionar.png\" type=\"image/x-icon\">");
                    client.println("");
                    client.println("<!-- Estilo -->");
                    client.println("<style>");
                    client.println(".vagas {");
                    client.println("height: 100px;");
                    client.println("font-weight: 600;");
                    client.println("}");
                    client.println("#vaga1 {");
                    if (estadosensor1) {
                        client.println("background: #49B675;");
                    } else {
                        client.println("background: rgb(255, 56, 56);");
                    }
                    client.println("}");
                    client.println("#vaga2 {");
                    if (estadosensor2) {
                        client.println("background: #49B675;");
                    } else {
                        client.println("background: rgb(255, 56, 56);");
                    }
                    client.println("}");
                    client.println("#vaga3 {");
                    if (estadosensor3) {
                        client.println("background: #49B675;");
                    } else {
                        client.println("background: rgb(255, 56, 56);");
                    }
                    client.println("}");
                    client.println("#vaga4 {");
                    if (estadosensor4) {
                        client.println("background: #49B675;");
                    } else {
                        client.println("background: rgb(255, 56, 56);");
                    }
                    client.println("}");
                    client.println("#vaga5 {");
                    if (estadosensor5) {
                        client.println("background: #0F6FB1;");
                    } else {
                        client.println("background: rgb(255, 56, 56);");
                    }
                    client.println("}");
                    client.println("@media (max-width: 575.98px) {");
                    client.println("h1 {");
                    client.println("font-size: 2.2em;");
                    client.println("}");
                    client.println(".vagas {");
                    client.println("height: 140px;");
                    client.println("}");
                    client.println("footer {");
                    client.println("font-size: 0.9em;");
                    client.println("height: 25px;");
                    client.println("line-height: 7px;");
                    client.println("font-weight: 500;");
                    client.println("}");
                    client.println("}");
                    client.println("@media (min-width: 576px) and (max-width: 767.98px) {");
                    client.println("h1 {");
                    client.println("font-size: 2.3em;");
                    client.println("}");
                    client.println(".vagas {");
                    client.println("height: 165px;");
                    client.println("}");
                    client.println("footer {");
                    client.println("font-size: 0.92em;");
                    client.println("height: 26px;");
                    client.println("line-height: 8px;");
                    client.println("font-weight: 600;");
                    client.println("}");
                    client.println("}");
                    client.println("@media (min-width: 768px) and (max-width: 991.98px) {");
                    client.println("h1 {");
                    client.println("font-size: 2.6em;");
                    client.println("}");
                    client.println(".vagas {");
                    client.println("height: 220px;");
                    client.println("}");
                    client.println("footer {");
                    client.println("font-size: 0.94em;");
                    client.println("height: 27px;");
                    client.println("line-height: 9px;");
                    client.println("font-weight: 600;");
                    client.println("}");
                    client.println("}");
                    client.println("@media (min-width: 992px) and (max-width: 1199.98px) {");
                    client.println("h1 {");
                    client.println("font-size: 2.8em;");
                    client.println("}");
                    client.println(".vagas {");
                    client.println("height: 265px;");
                    client.println("}");
                    client.println("footer {");
                    client.println("font-size: 0.96em;");
                    client.println("height: 28px;");
                    client.println("line-height: 10px;");
                    client.println("font-weight: 600;");
                    client.println("}");
                    client.println("}");
                    client.println("@media (min-width: 1200px) {");
                    client.println("h1 {");
                    client.println("font-size: 3em;");
                    client.println("}");
                    client.println(".vagas {");
                    client.println("height: 295px;");
                    client.println("}");
                    client.println("footer {");
                    client.println("font-size: 1em;");
                    client.println("height: 30px;");
                    client.println("line-height: 13px;");
                    client.println("font-weight: 600;");
                    client.println("}");
                    client.println("}");
                    client.println("body {");
                    client.println("background: #FFFFE6;");
                    client.println("}");
                    client.println("h1 {");
                    client.println("font-weight: 700;");
                    client.println("}");
                    client.println("footer {");
                    client.println("background: rgb(48, 48, 48);");
                    client.println("color: white;");
                    client.println("}");
                    client.println("</style>");
                    client.println("");
                    client.println("</head>");
                    client.println("<body");
                    client.println("<header class=\"mt-5\">");
                    client.println("<h1 class=\"text-center\">Smart <span><img src=\"https://imagepng.org/wp-content/uploads/2017/10/placa-estacionamento-estacionar.png\" width=\"40\"></span> Parking</h1>");
                    client.println("</header>");
                    client.println("<main class=\"container p-4 my-5\">");
                    client.println("<div class=\"row justify-content-around\">");
                    client.println("<div class=\"col-2 vagas d-flex align-items-center justify-content-center\" id=\"vaga1\">");
                    client.println("<p>A1</p>");
                    client.println("</div>");
                    client.println("<div class=\"col-2 vagas d-flex align-items-center justify-content-center\" id=\"vaga2\">");
                    client.println("<p>A2</p>");
                    client.println("</div>");
                    client.println("<div class=\"col-2 vagas d-flex align-items-center justify-content-center\" id=\"vaga3\">");
                    client.println("<p>A3</p>");
                    client.println("</div>");
                    client.println("<div class=\"col-2 vagas d-flex align-items-center justify-content-center\" id=\"vaga4\">");
                    client.println("<p>A4</p>");
                    client.println("</div>");
                    client.println("<div class=\"col-2 vagas d-flex align-items-center justify-content-center\" id=\"vaga5\">");
                    client.println("<p>A5</p>");
                    client.println("</div>");
                    client.println("</div>");
                    client.println("<div class=\"text-center mt-5 mb-2\">");
                    client.println("<a href=\"#\">");
                    client.println("<span class=\"btn btn-outline-dark\">");
                    client.println("<i class=\"fas fa-download mr-1\"></i>");
                    client.println("Download");
                    client.println("</span>");
                    client.println("</a>");
                    client.println("</div>");
                    client.println("</main>");
                    client.println("<footer class=\"text-center fixed-bottom pt-2 pb-0\">");
                    client.println("<p>&copy; Grupo 5 - Automação Industrial</p>");
                    client.println("</footer>");
                    client.println("");
                    client.println("<!-- JavaScript -->");
                    client.println("<script>");
                    client.println("setTimeout(function() {");
                    client.println("window.location.reload(1);");
                    client.println("}, 2000);");
                    client.println("</script>");
                    client.println("<!-- jQuerry primeiro, depois Popper.js, depois Bootstrap JS -->");
                    client.println("<script src=\"https://code.jquery.com/jquery-3.3.1.slim.min.js\" integrity=\"sha384-q8i/X+965DzO0rT7abK41JStQIAqVgRVzpbzo5smXKp4YfRvH+8abtTE1Pi6jizo\" crossorigin=\"anonymous\"></script>");
                    client.println("<script src=\"https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.14.3/umd/popper.min.js\" integrity=\"sha384-ZMP7rVo3mIykV+2+9J3UJ46jBk0WLaUAdn689aCwoqbBJiSnjAK/l8WvCWPIPm49\" crossorigin=\"anonymous\"></script>");
                    client.println("<script src=\"https://stackpath.bootstrapcdn.com/bootstrap/4.1.3/js/bootstrap.min.js\" integrity=\"sha384-ChfqqxuZUCnJSK3+MXmPNIyE6ZbWh2IMqE241rYiqJxyMiZ6OW/JmZQ5stwEULTy\" crossorigin=\"anonymous\"></script>");
                    client.println("</body>");
                    client.println("</html>");
                    break;
                }
                if (c == '\n') {
                    // ultimo caractere da linha do texto recebido
                    // iniciando nova linha com o novo caractere lido
                    currentLineIsBlank = true;
                } 
                else if (c != '\r') {
                    // um caractere de texto foi recebido do cliente
                    currentLineIsBlank = false;
                }
            }
        }
        delay(1);      // da um tempo para o WEB Browser receber o texto
        client.stop(); // termina a conexão
    }
}

void color1(int vermelho, int verde, int azul) {
  analogWrite(ledr1, vermelho);
  analogWrite(ledg1, verde);
  analogWrite(ledb1, azul);
}

void color2(int vermelho, int verde, int azul) {
  analogWrite(ledr2, vermelho);
  analogWrite(ledg2, verde);
  analogWrite(ledb2, azul);
}

void color3(int vermelho, int verde, int azul) {
  analogWrite(ledr3, vermelho);
  analogWrite(ledg3, verde);
  analogWrite(ledb3, azul);
}

void color4(int vermelho, int verde, int azul) {
  analogWrite(ledr4, vermelho);
  analogWrite(ledg4, verde);
  analogWrite(ledb4, azul);
}

void color5(int vermelho, int verde, int azul) {
  analogWrite(ledr5, vermelho);
  analogWrite(ledg5, verde);
  analogWrite(ledb5, azul);
}
