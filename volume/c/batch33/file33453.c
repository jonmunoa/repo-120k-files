// fichero 33453 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33453;

Registro33453 crear_registro33453(int id) {
    Registro33453 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33453(Registro33453 r) {
    return r.valor + r.id;
}
