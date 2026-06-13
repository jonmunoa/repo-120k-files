// fichero 6449 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6449;

Registro6449 crear_registro6449(int id) {
    Registro6449 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6449(Registro6449 r) {
    return r.valor + r.id;
}
