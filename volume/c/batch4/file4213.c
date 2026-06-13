// fichero 4213 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4213;

Registro4213 crear_registro4213(int id) {
    Registro4213 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4213(Registro4213 r) {
    return r.valor + r.id;
}
