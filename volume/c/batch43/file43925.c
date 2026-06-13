// fichero 43925 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43925;

Registro43925 crear_registro43925(int id) {
    Registro43925 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43925(Registro43925 r) {
    return r.valor + r.id;
}
