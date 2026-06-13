// fichero 25309 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25309;

Registro25309 crear_registro25309(int id) {
    Registro25309 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25309(Registro25309 r) {
    return r.valor + r.id;
}
