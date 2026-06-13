// fichero 24421 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24421;

Registro24421 crear_registro24421(int id) {
    Registro24421 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24421(Registro24421 r) {
    return r.valor + r.id;
}
