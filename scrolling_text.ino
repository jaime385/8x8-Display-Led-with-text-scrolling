
//Letras en binario
byte ALL[] = {B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111};
byte EX[] = {B00000000, B00010000, B00010000, B00010000, B00010000, B00000000, B00010000, B00000000};
byte A[] = {B00000000, B00111100, B01100110, B01100110, B01111110, B01100110, B01100110, B00000000};
byte B[] = {B00000000, B00111000, B00100100, B00111000, B00100100, B00100100, B00111000, B00000000};
byte C[] = {B00000000, B00011110, B00100000, B01000000, B01000000, B00100000, B00011110, B00000000};
byte D[] = {B00000000, B00111000, B00100100, B00100010, B00100010, B00100100, B00111000, B00000000};
byte E[] = {B00000000, B00111100, B00100000, B00111000, B00100000, B00100000, B00111100, B00000000};
byte F[] = {B00000000, B00111100, B00100000, B00111000, B00100000, B00100000, B00100000, B00000000};
byte G[] = {B00000000, B00111110, B00100000, B00100000, B00101110, B00100010, B00111110, B00000000};
byte H[] = {B00000000, B00100100, B00100100, B00111100, B00100100, B00100100, B00100100, B00000000};
byte I[] = {B00000000, B00111000, B00010000, B00010000, B00010000, B00010000, B00111000, B00000000};

byte J[][8] = {
  {B00000000, B00000000, B00000000,B00000000,B00000000},
  {B00011100, B00111100, B00111000,B01000010,B00111100},
  {B00000100, B01100110, B00010000,B01100110,B00100000},
  {B00000100, B01100110, B00010000,B01011010,B00111000},
  {B00000100, B01111110, B00010000,B01000010,B00100000},
  {B00100100, B01100110, B00010000,B01000010,B00100000},
  {B00111100, B01100110, B00111000,B01000010,B00111100},
  {B00000000, B00000000, B00000000,B00000000,B00000000},
};

byte K[] = {B00000000, B00100100, B00101000, B00110000, B00101000, B00100100, B00100100, B00000000};
byte L[] = {B00000000, B00100000, B00100000, B00100000, B00100000, B00100000, B00111100, B00000000};
byte M[] = {B00000000, B10000010, B11000110, B10101010, B10010010, B10000010, B10000010, B00000000};
byte N[] = {B00000000, B00100010, B00110010, B00101010, B00100110, B00100010, B00000000, B00000000};
byte O[] = {B00000000, B00111100, B01000010, B01000010, B01000010, B01000010, B00111100, B00000000};
byte P[] = {B00000000, B00111000, B00100100, B00100100, B00111000, B00100000, B00100000, B00000000};
byte Q[] = {B00000000, B00111100, B01000010, B01000010, B01000010, B01000110, B00111110, B00000001};
byte R[] = {B00000000, B00111000, B00100100, B00100100, B00111000, B00100100, B00100100, B00000000};
byte S[] = {B00000000, B00111100, B00100000, B00111100, B00000100, B00000100, B00111100, B00000000};
byte T[] = {B00000000, B01111100, B00010000, B00010000, B00010000, B00010000, B00010000, B00000000};
byte U[] = {B00000000, B01000010, B01000010, B01000010, B01000010, B00100100, B00011000, B00000000};
byte V[] = {B00000000, B00100010, B00100010, B00100010, B00010100, B00010100, B00001000, B00000000};
byte W[] = {B00000000, B10000010, B10010010, B01010100, B01010100, B00101000, B00000000, B00000000};
byte X[] = {B00000000, B01000010, B00100100, B00011000, B00011000, B00100100, B01000010, B00000000};
byte Y[] = {B00000000, B01000100, B00101000, B00010000, B00010000, B00010000, B00010000, B00000000};
byte Z[] = {B00000000, B00111100, B00000100, B00001000, B00010000, B00100000, B00111100, B00000000};


// El comentario que esta a un lado de la numeracion de los pines corresponde a el correspondiente color de cable asignado
int ROW_1 = 2;// Azul ---> Tercer fila
int ROW_2 = 3;// Gris ---> Segunda fila
int ROW_3 = 4;// Anaranjado ---> Segunda Columna
int ROW_4 = 5;// Morado ---- > Cuarta Columna
int ROW_5 = 6;// Blanco ---> Octava columna
int ROW_6 = 7;// Morado ---> Cuarta fila
int ROW_7 = 8;// Gris ----> Sexta fila
int ROW_8 = 9;// Caqui ----> Quinta Columna

int COL_1 = 10; // Negro ---> PRIMER FILA
int COL_2 = 11; // Negro ---> SETIMA COLUMNA
int COL_3 = 12; // Blanco ---> SETIMA FILA
int COL_4 = 13; // Verde ---> Octava fila
int COL_5 = A0; // Verde ---> Primer columna
int COL_6 = A1; // Amarillo ---> Quinta fila
int COL_7 = A2; // Rojo ---> TErcer columna
int COL_8 = A3; // Caqui ---> Sexta columna

//Array por recorrer
int rows[] = {COL_1, ROW_2, ROW_1, ROW_6, COL_6, ROW_7, COL_3, COL_4};

int col[] = {
  COL_5, ROW_3, COL_7, ROW_4, ROW_8, COL_8, COL_2, ROW_5
};

int col2[] = {
  ROW_5, COL_2, COL_8, ROW_8, ROW_4, COL_7, ROW_3, COL_5
};

// Esta columna es la que en teoria tendria que ser para empezar de izquierda desplegando valores
int columns[][8] = {
  {ROW_5, COL_2, COL_8, ROW_8, ROW_4, COL_7, ROW_3, COL_5}, {COL_2, COL_8, ROW_8, ROW_4, COL_7, ROW_3, COL_5, ROW_5},
  {COL_8, ROW_8, ROW_4, COL_7, ROW_3, COL_5, ROW_5, COL_2}, {ROW_8, ROW_4, COL_7, ROW_3, COL_5, ROW_5, COL_2, COL_8},
  {ROW_4, COL_7, ROW_3, COL_5, ROW_5, COL_2, COL_8, ROW_8}, {COL_7, ROW_3, COL_5, ROW_5, COL_2, COL_8, ROW_8, ROW_4},
  {ROW_3, COL_5, ROW_5, COL_2, COL_8, ROW_8, ROW_4, COL_7}, {COL_5, ROW_5, COL_2, COL_8, ROW_8, ROW_4, COL_7, ROW_3},

};

//Palabra promete


void setup()
{
  // Open serial port
  Serial.begin(9600);
  pinMode(ROW_1, OUTPUT);
  pinMode(ROW_2, OUTPUT);
  pinMode(ROW_3, OUTPUT);
  pinMode(ROW_4, OUTPUT);
  pinMode(ROW_5, OUTPUT);
  pinMode(ROW_6, OUTPUT);
  pinMode(ROW_7, OUTPUT);
  pinMode(ROW_8, OUTPUT);

  pinMode(COL_1, OUTPUT);
  pinMode(COL_2, OUTPUT);
  pinMode(COL_3, OUTPUT);
  pinMode(COL_4, OUTPUT);
  pinMode(COL_5, OUTPUT);
  pinMode(COL_6, OUTPUT);
  pinMode(COL_7, OUTPUT);
  pinMode(COL_8, OUTPUT);
  //Tip - Pins set to OUTPUT by use of the PinMode command are set to LOW if not otherwise stated
}

void Clear() // Ver loop
{
  for (int j = 0; j < 8; j++) // Valores de los pines de columna
    digitalWrite(col[j], LOW);     // Todos apagados
  for (int k = 0 ; k < 8 ; k++)
    digitalWrite(rows[k], HIGH);    // Todas las filas cortadas*/
}

bool GetBit( byte N, int pos)
{ // pos = 7 6 5 4 3 2 1 0
  int b = N >> pos ;         // Shift bits
  b = b & 1 ;                // coger solo el ultimo bit
  return b ;
}


void loop()
{
  Clear(); // Sin la funcion clear al inicio de la secuencia se veria toda la primer columna encendida. Comentar esta linea totalmente para observar detalle.
  for (int rep = 0 ; rep<=4; rep ++){
  letraLoop(100, rep);
  }
  delay(1000);
}



void letraLoop (int timer, int E) {
  
  for (int animacion = 0; animacion <= 7; animacion++) {
    delay(timer);

    for (int fil = 0; fil <= 7 ; fil++)
    {
      digitalWrite( rows[fil] , LOW) ; // Activamos la fila para el barrido

      //Proceso de volteo de letras]

      byte F = J[fil][E];

      for (int colu = 7; colu >= 0 ; colu--)
      {
        bool b = GetBit(F, colu);
        if (b)
          digitalWrite( columns[animacion][colu]  , HIGH); //Levantamos la columna ------> Si le asignamos un valor fijo a animacion obtendremos un solo escenario el cual sera estaitco.
        else
          digitalWrite( columns[animacion][colu]  , LOW); // Si 0, apagamos
      }
      delay(1);
      digitalWrite( rows[fil] , HIGH) ; // Apagamos fila antes de salir
    }
  }
}


