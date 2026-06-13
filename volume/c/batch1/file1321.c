// fichero 1321 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1321;

Registro1321 crear_registro1321(int id) {
    Registro1321 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1321(Registro1321 r) {
    return r.valor + r.id;
}
