// fichero 26337 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26337;

Registro26337 crear_registro26337(int id) {
    Registro26337 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26337(Registro26337 r) {
    return r.valor + r.id;
}
