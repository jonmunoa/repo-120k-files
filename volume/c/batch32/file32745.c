// fichero 32745 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32745;

Registro32745 crear_registro32745(int id) {
    Registro32745 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32745(Registro32745 r) {
    return r.valor + r.id;
}
