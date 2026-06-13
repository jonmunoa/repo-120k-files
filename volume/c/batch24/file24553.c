// fichero 24553 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24553;

Registro24553 crear_registro24553(int id) {
    Registro24553 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24553(Registro24553 r) {
    return r.valor + r.id;
}
