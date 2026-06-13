// fichero 14449 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14449;

Registro14449 crear_registro14449(int id) {
    Registro14449 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14449(Registro14449 r) {
    return r.valor + r.id;
}
