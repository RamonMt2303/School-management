//
//  main.cpp
//  School management
//
//  Created by Ramon Mtz on 12/05/21.
//

#include <iostream>
#include "Persona.h"
#include "Universidad.h"

using namespace std;
int main() {
    Universidad Universidad;
    Universidad.llenarDatosEscuela();
    Universidad.imprimirDatosEscuela();
    Universidad.llenarDatosRegistro();
    return 0;
}
