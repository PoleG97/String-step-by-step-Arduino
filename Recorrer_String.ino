void setup(){
    Serial.begin(9600);
}

void loop() {
  if (Serial.available()){
    int i;
    String palabra = Serial.readString();    //palabra a descomponer
    char tam = palabra.length();             //obtengo la longitud de la palabra
    char valorfin = palabra.lastIndexOf(0);  //almaceno el ultimo caracter de la String "palabra"

    while (i!=valorfin){                     //comprobamos que no esté en el último valor
      for (i=0; i<tam; i++){
        char posicion=palabra.charAt(i);     //selecciono la posicion a imprimir recorriendo todo el String
                            
        if (posicion=='a'){ 
          Serial.println("una a");
        }
      }
    }
  }

}
