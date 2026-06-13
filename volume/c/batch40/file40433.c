// fichero 40433 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40433;

Registro40433 crear_registro40433(int id) {
    Registro40433 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40433(Registro40433 r) {
    return r.valor + r.id;
}
