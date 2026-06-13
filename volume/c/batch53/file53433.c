// fichero 53433 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53433;

Registro53433 crear_registro53433(int id) {
    Registro53433 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53433(Registro53433 r) {
    return r.valor + r.id;
}
