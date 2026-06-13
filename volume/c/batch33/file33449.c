// fichero 33449 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33449;

Registro33449 crear_registro33449(int id) {
    Registro33449 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33449(Registro33449 r) {
    return r.valor + r.id;
}
