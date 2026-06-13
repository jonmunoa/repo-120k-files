// fichero 19925 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19925;

Registro19925 crear_registro19925(int id) {
    Registro19925 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19925(Registro19925 r) {
    return r.valor + r.id;
}
