// fichero 49925 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49925;

Registro49925 crear_registro49925(int id) {
    Registro49925 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49925(Registro49925 r) {
    return r.valor + r.id;
}
