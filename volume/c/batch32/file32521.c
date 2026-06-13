// fichero 32521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32521;

Registro32521 crear_registro32521(int id) {
    Registro32521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32521(Registro32521 r) {
    return r.valor + r.id;
}
