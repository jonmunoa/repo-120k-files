// fichero 4537 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4537;

Registro4537 crear_registro4537(int id) {
    Registro4537 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4537(Registro4537 r) {
    return r.valor + r.id;
}
