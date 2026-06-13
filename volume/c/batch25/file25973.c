// fichero 25973 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25973;

Registro25973 crear_registro25973(int id) {
    Registro25973 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25973(Registro25973 r) {
    return r.valor + r.id;
}
