// fichero 5433 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5433;

Registro5433 crear_registro5433(int id) {
    Registro5433 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5433(Registro5433 r) {
    return r.valor + r.id;
}
