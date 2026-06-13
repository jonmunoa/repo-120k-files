// fichero 26321 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26321;

Registro26321 crear_registro26321(int id) {
    Registro26321 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26321(Registro26321 r) {
    return r.valor + r.id;
}
