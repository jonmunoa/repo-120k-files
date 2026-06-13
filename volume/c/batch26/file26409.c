// fichero 26409 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26409;

Registro26409 crear_registro26409(int id) {
    Registro26409 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26409(Registro26409 r) {
    return r.valor + r.id;
}
