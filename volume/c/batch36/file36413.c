// fichero 36413 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36413;

Registro36413 crear_registro36413(int id) {
    Registro36413 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36413(Registro36413 r) {
    return r.valor + r.id;
}
