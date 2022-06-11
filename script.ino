#include <Keypad.h>
#include <LiquidCrystal.h>
#include <Servo.h>

#define Password_Length 5

Servo myservo;
LiquidCrystal lcd(A0, A1, A2, A3, A4, A5);

int pos = 0;

char Data[Password_Length];
char Master[Password_Length] = "1234";
byte data_count = 0, master_count = 0;

bool Pass_is_good;
bool door = false;
char customKey;


/* Definicao do teclado linhas/colunas */
const byte ROWS = 4;
const byte COLS = 4;
char keys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};


byte rowPins[ROWS] = {0, 1, 2, 3};
byte colPins[COLS] = {4, 5, 6, 7};

/* Instancia do teclado com as configuracoes */
Keypad customKeypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS);


/* Inicio do programa */
void setup()
{
  myservo.attach(9, 2000, 2400);
  ServoClose();
  lcd.begin(16, 2);
  lcd.print("Porta Fechada");
  loading("Carregando...");
  lcd.clear();
}

/* Jackson start */

/* end */

/* Giovana start */

/* end */