#include <NewPing.h>

/* Codigo fonte de um projeto de robô pessoal*/
 
#define MOTOR_1A 6
#define MOTOR_1B 7
#define PWM_1 5

#define MOTOR_2A 9        
#define MOTOR_2B 8
#define PWM_2 10        

#define WAIT 5000     //Constante de tempo
#define VALOR_PWM 255 //Valor
#define TEMPO_DE_GIRO 1000 // aprox 90 graus

// Sensor Frontal
#define TRIG_F 11
#define ECHO_F 12

#define MAX_DIST 50

NewPing sensor_frontal(TRIG_F, ECHO_F, MAX_DIST);

void setup(){
  //inicializa_motores();
  //inicializa_sensores();
  
  // Serial.begin(115200);
}

void loop(){
  // Serial.println(sensor_frontal.ping_cm());
  // int d = sensor_frontal.ping_cm();

 // if (d < MAX_DIST && d > 0){
   //   frente();
    //
  //}else{
  //    direita();
  //}
  //
  //delay(10);
}

void inicializa_motores()
{
  pinMode(MOTOR_1A, OUTPUT);
  pinMode(MOTOR_1B, OUTPUT);
  pinMode(PWM_1, OUTPUT);
  
  pinMode(MOTOR_1A, OUTPUT);
  pinMode(MOTOR_1B, OUTPUT);
  pinMode(PWM_2, OUTPUT);

  analogWrite (PWM_1, VALOR_PWM);
  analogWrite (PWM_2, VALOR_PWM);
}

void inicializa_sensores()
{
 
}

void frente()
{
  digitalWrite(MOTOR_1A, HIGH); // quando A Ã© HIGH o LED vermelho acende.
  digitalWrite(MOTOR_1B, LOW);
  
  digitalWrite(MOTOR_2A, HIGH); // quando A Ã© HIGH o LED vermelho acende.
  digitalWrite(MOTOR_2B, LOW);
}

void tras()
{
  digitalWrite(MOTOR_1A, LOW);
  digitalWrite(MOTOR_1B, HIGH);  // quando B Ã© HIGH o LED verde acende. 
  
  digitalWrite(MOTOR_2A, LOW); 
  digitalWrite(MOTOR_2B, HIGH);  // quando B Ã© HIGH o LED verde acende. 
}

void esquerda()
{
  digitalWrite(MOTOR_1A, LOW);
  digitalWrite(MOTOR_1B, HIGH);  // quando B Ã© HIGH o LED verde acende. 
  
  digitalWrite(MOTOR_2A, HIGH); // quando A Ã© HIGH o LED vermelho acende.
  digitalWrite(MOTOR_2B, LOW);
  delay(TEMPO_DE_GIRO);
}

void direita()
{
  digitalWrite(MOTOR_1A, HIGH); // quando A Ã© HIGH o LED vermelho acende.
  digitalWrite(MOTOR_1B, LOW);
  
  digitalWrite(MOTOR_2A, LOW); 
  digitalWrite(MOTOR_2B, HIGH);  // quando B Ã© HIGH o LED verde acende. 
  
  delay(TEMPO_DE_GIRO);
}

void freia()
{
  digitalWrite(MOTOR_1A, LOW);
  digitalWrite(MOTOR_1B, LOW);
  
  digitalWrite(MOTOR_2A, LOW); 
  digitalWrite(MOTOR_2B, LOW);
  
}
  