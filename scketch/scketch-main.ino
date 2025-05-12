/*************************************************
* FIAP FASE 3 CAP 01 - Construindo Máq. Agricula *
*                                                *
* BY: Raphael da Silva RM: 561452    1TIAOA      *
* https://github.com/Phaeld/1TIAOA-CAP-01        *                                               
*************************************************/

//                  DESCRIÇÃO


/* Nesta fase do projeto, a FarmTech Solutions avança
na aplicação de sensores físicos integrados a um 
sistema de irrigação inteligente. O objetivo é 
desenvolver um sistema físico (simulado) que colete
dados de sensores de umidade, nutrientes e pH e 
controle uma bomba de irrigação conforme os valores 
obtidos. Os dados também devem ser armazenados em 
um banco de dados SQL, com possibilidade de 
visualização e análises estatísticas.
*/

#include "DHT.h"

#define DHTPIN 15       
#define DHTTYPE DHT22  

DHT dht(DHTPIN, DHTTYPE);  

#define PH_SENSOR 34
#define P_SENSOR 14
#define K_SENSOR 12
#define PUMP 16

void setup() {

  pinMode(PH_SENSOR, INPUT);
  pinMode(P_SENSOR, INPUT);
  pinMode(K_SENSOR, INPUT);
  pinMode(PUMP, OUTPUT);

  Serial.begin(9600);  
  dht.begin();  

  logo();       

}

void loop() {

readHumidity();
readSensors();
irrigationControl();

}

void readHumidity(){

  delay(2000);  
  float humidity = dht.readHumidity();  

 
  if (isnan(humidity)) {
    Serial.println("Falha na leitura da umidade do DHT22");
    return;
  }
  Serial.println();
  Serial.print("Umidade: ");
  Serial.print(humidity);
  Serial.println(" %");

}

void readSensors(){

  float read_PH = analogRead(PH_SENSOR);
  read_PH = read_PH * (14.0 / 1023.0);


  

  Serial.print("Sensor pH:" );
  Serial.print(read_PH);
  Serial.println(" %");

  int read_P = digitalRead(P_SENSOR); 
  String status_sensor_p;
  if (read_P == 1){
    status_sensor_p = "MAX";
  }else{
    status_sensor_p = "MIN";
  }


  Serial.print("Sensor Potassio:" );
  Serial.print(status_sensor_p);
  Serial.println(" ");

 int read_K = digitalRead(K_SENSOR); 
  String status_sensor_k;
  if (read_K == 1){
    status_sensor_k = "MAX";
  }
  else{
    status_sensor_k = "MIN";
  }


  Serial.print("Sensor Fosforo:" );
  Serial.print(status_sensor_k);
  Serial.println(" ");
  Serial.println("--------------");

}

void irrigationControl(){

  int humidity_min = 50;
  float humidity = dht.readHumidity();
  
  if (humidity < humidity_min){
    digitalWrite(PUMP, HIGH);
    delay(100);
    Serial.print("Bomba assionada!");
  }
  else{
    digitalWrite(PUMP, LOW);
    delay(100);
    Serial.print("Bomba desligada!");
  }
}


void logo() {
  String logo_pt1 = "___________                        _________      .__          __  .__";
  String logo_pt2 = "\\_   _____/____ _______  _____    /   _____/ ____ |  |  __ ___/  |_|__| ____   ____   ______";
  String logo_pt3 = "|    __) \\__  \\\\_  __ \\/     \\   \\_____  \\ /  _ \\|  | |  |  \\   __\\  |/  _ \\ /    \\ /  ___/";
  String logo_pt4 = "|     \\   / __ \\|  | \\/  Y Y  \\  /        (  <_> )  |_|  |  /|  | |  (  <_> )   |  \\\\___ \\ ";
  String logo_pt5 = " \\___  /  (____  /__|  |__|_|  / /_______  /\\____/|____/____/ |__| |__|\\____/|___|  /____  >";
  String logo_pt6 = "     \\/        \\/            \\/          \\/                                       \\/     \\/";

  Serial.println(logo_pt1);
  Serial.println(logo_pt2);
  Serial.println(logo_pt3);
  Serial.println(logo_pt4);
  Serial.println(logo_pt5);
  Serial.println(logo_pt6);
  Serial.println("");
  Serial.println("Terminal de Contole dos Sensores");
  Serial.println("");
  Serial.println("==============================");
}
