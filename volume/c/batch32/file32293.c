// fichero 32293 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32293;

Registro32293 crear_registro32293(int id) {
    Registro32293 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32293(Registro32293 r) {
    return r.valor + r.id;
}
