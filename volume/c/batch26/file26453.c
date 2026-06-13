// fichero 26453 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26453;

Registro26453 crear_registro26453(int id) {
    Registro26453 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26453(Registro26453 r) {
    return r.valor + r.id;
}
