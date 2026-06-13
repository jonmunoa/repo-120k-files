// fichero 24141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24141;

Registro24141 crear_registro24141(int id) {
    Registro24141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24141(Registro24141 r) {
    return r.valor + r.id;
}
