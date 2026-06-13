// fichero 42925 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42925;

Registro42925 crear_registro42925(int id) {
    Registro42925 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42925(Registro42925 r) {
    return r.valor + r.id;
}
