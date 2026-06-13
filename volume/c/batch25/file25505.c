// fichero 25505 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25505;

Registro25505 crear_registro25505(int id) {
    Registro25505 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25505(Registro25505 r) {
    return r.valor + r.id;
}
