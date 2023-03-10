## Arduino Entrée Analogique (A0 à A5) --> Sortie Digital (D14 à D19)

Ce petit projet a pour but de montrer la possibilité de conversion
**d'entrée analogique** en **sorti digital** cela peut servir en divers 
application comme si l'on manque de sortie digital ou autre.

Ce Projet va prendre comme exemple la carte [Arduino Uno](https://docs.arduino.cc/static/c57a658e0f7afad334f6f73e82dfd83d/A000066-full-pinout.pdf)

Pour commencer ce code on va utilisé un **#define** Pour definir la Broche A0
en tant que broche sortie digital. En regardant la __datasheet__ des pins on
voit que **A0** est aussi __le même pin__ que **D14** donc on peut define une led en tant que sortie 14

define :
```C++

//Pin D14 ou entrée Analogique A0
#define Led 14 

```

Une fois la led défini il faut la **définir** en tant que __sortie__


Déclaration de la fonction setup
```C++

void setup() {
  
  //declaration de A0 en tant que sortie
  pinMode(Led, OUTPUT);
}

```

Ensuite on peut l'utilisé dans un __programme classique__ dans l'exemple si dessous 
un programme de base qui va faire clignoté la **Led**

Programme de la boucle
```C++

void loop() {
  
  //programme de base faire clignoté la led en A0
  digitalWrite(Led, HIGH);
  delay(1000);
  digitalWrite(Led, LOW);
  delay(1000);

}
```
