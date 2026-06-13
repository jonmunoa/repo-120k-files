// fichero 25517 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25517;

Registro25517 crear_registro25517(int id) {
    Registro25517 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25517(Registro25517 r) {
    return r.valor + r.id;
}
