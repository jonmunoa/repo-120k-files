// fichero 6357 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6357;

Registro6357 crear_registro6357(int id) {
    Registro6357 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6357(Registro6357 r) {
    return r.valor + r.id;
}
