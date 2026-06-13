// fichero 585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro585;

Registro585 crear_registro585(int id) {
    Registro585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro585(Registro585 r) {
    return r.valor + r.id;
}
