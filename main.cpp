//Luiezequiel Benítez Medero
// 801-24-7261
//Figuras en 3D
#include <iostream>
#include<cmath>
#include <iomanip>
using namespace std;
//Puse constexpr porque el compilador lo recomendo en cLion
constexpr double PI = 3.141592653589793;

//Prototipos
double calcular_Volumen(double);
double calcular_Volumen(double, double);
double calcular_Volumen(double, double, double);
double calcular_Area(double);
double calcular_Area(double, double);
double calcular_Area(double, double, double);
void opcion_cilindro();
void opcion_esfera();
void opcion_prisma();
void inicio();

int main(){
    /*Invoco la función inicio que es donde sucede
    el menu y despliega los calculos*/
    inicio();
  return 0;
  }

//Le pide al usuario los valores para area o volumen del cilindro
//Despliega el resultado del calculo
void opcion_cilindro() {
    char letra;
    cout << endl << endl;
   do {
       cout << "Escoga entre los siguientes opciones:"
         << "\n  a. Volumen"
         << "\n  b. Area de la superficie"
         << "\nSeleccion: ";

       cin >> letra;
   } while (letra != 'a' && letra != 'b');


    cout << endl << endl;
    double radio, altura;
    do {
        cout << "Entre el radio del cilindro: ";
        cin >> radio;
    } while (radio < 0);
    cout << endl;
    do {
        cout << "Entre la altura del cilindro: ";
        cin >> altura;
    }while (altura < 0);

    cout << fixed << setprecision(2);

    if (letra == 'a')
        cout << "El volumen del cilindro es "<< calcular_Volumen(radio, altura) << endl;

    else if (letra == 'b')
        cout << " El area del cilindro es " << calcular_Area(radio, altura) << endl;

}
//Le pide al usuario los valores para area o volumen de esfera
//Despliega el resultado del calculo
void opcion_esfera() {
    char letra;
    cout << endl << endl;
    do {
        cout << "Escoga entre los siguientes opciones:"
          << "\n  a. Volumen"
          << "\n  b. Area de la superficie"
          << "\nSeleccion: ";

        cin >> letra;
    }while(letra != 'a' && letra != 'b');


    cout << endl << endl;
    double radio;
    do {
        cout << "Entre el radio de la esfera: ";
        cin >> radio;
    } while (radio < 0);
    cout << fixed << setprecision(2);

    if (letra == 'a')
        cout << "El volumen de la esfera es "<< calcular_Volumen(radio) << endl;

    else if (letra == 'b')
        cout << " El area de la esfera es " << calcular_Area(radio) << endl;

}
//Le pide al usuario los valores para area o volumen de prisma
//Despliega el resultado del calculo
void opcion_prisma() {
    char letra;
    cout << endl << endl;
   do {
       cout << "Escoga entre los siguientes opciones:"
         << "\n  a. Volumen"
         << "\n  b. Area de la superficie"
         << "\nSeleccion: ";

       cin >> letra;
   }while(letra != 'a' && letra != 'b');


    cout << endl << endl;
    double largo, ancho, altura;
    do {
        cout << "Entre el largo del prisma rectangular: ";
        cin >> largo;
    } while (largo < 0);
    cout << endl;
    do {
        cout << "Entre el ancho del prisma rectangular: ";
        cin >> ancho;
    } while (ancho < 0);
    cout << endl;
    do {
        cout << "Entre el altura del prisma rectangular: ";
        cin >> altura;
    } while (altura < 0);
    cout << fixed << setprecision(2);

    if (letra == 'a')
        cout << "El volumen del prisma rectangular es "<< calcular_Volumen(largo, ancho, altura) << endl;

    else if (letra == 'b')
        cout << " El area del prisma rectangular es " << calcular_Area(largo, ancho, altura)  << endl;

}
// Funcion void
// Le pide al usario que tome su seleccion de figura.
void inicio() {
    char letra;
    cout << "Este programa calcula el volumen y el area de la supercicie de tres figuras. ";
    cout << endl << endl;

    cout << "Escoge una figura:"
         << "\n  a. Cilindro"
         << "\n  b. Esfera"
         << "\n  c. Prisma rectagular";
    cout << endl;
    cout << "Seleccion: " << endl;
    cin>>letra;

    switch(letra) {
        
        case 'a':
            opcion_cilindro();
            break;
        
        case 'b':
            opcion_esfera();
            break;
        
        case 'c':
            opcion_prisma();
            break;
        default:
            cout << "¡Letra no valida!" << endl;
    }

}


//VOLUMEN
//volumen Cilindro
//input: radio, altura
//Devuelve el volumen de un cilindro
double calcular_Volumen(double radio, double altura) {
    return PI * pow(radio,2.0) * altura;
}
//Volumen Esfera
//input: radio
//Devuelve el volumen de un radio
double calcular_Volumen(double radio) {
    return (4.0 * PI * pow(radio, 3.0))/3;
}
//Volumen prisma rectangular
//input: largo, ancho, altura
//Devuelve el volumen de una prisma rectangular
double calcular_Volumen(double largo, double ancho, double altura) {
    return largo * ancho * altura;
}


 //Calculos para area

//Area prisma rectangular

//input: largo, ancho, altura
//Devuelve el area de la prisma rectangular
double calcular_Area(double largo, double ancho, double altura) {
    return 2.0 * ((largo * ancho) + (largo * altura) + (ancho * altura));
}
//esfera
//input: radio
//Devuelve el area de una esfera
double calcular_Area(double radio) {
    return 4.0 * PI * pow(radio, 2.0);
}
//Cilindro
//input: radio, altura
//Devuelve el area del cilindro
double calcular_Area(double radio, double altura) {
    return 2.0 * PI * radio * (radio + altura);
}
