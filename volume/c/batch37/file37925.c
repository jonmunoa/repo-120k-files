// fichero 37925 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37925;

Registro37925 crear_registro37925(int id) {
    Registro37925 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37925(Registro37925 r) {
    return r.valor + r.id;
}
