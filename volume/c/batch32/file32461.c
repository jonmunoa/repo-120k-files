// fichero 32461 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32461;

Registro32461 crear_registro32461(int id) {
    Registro32461 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32461(Registro32461 r) {
    return r.valor + r.id;
}
