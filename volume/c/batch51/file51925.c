// fichero 51925 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51925;

Registro51925 crear_registro51925(int id) {
    Registro51925 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51925(Registro51925 r) {
    return r.valor + r.id;
}
