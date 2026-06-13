// fichero 437 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro437;

Registro437 crear_registro437(int id) {
    Registro437 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro437(Registro437 r) {
    return r.valor + r.id;
}
