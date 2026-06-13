// fichero 36925 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36925;

Registro36925 crear_registro36925(int id) {
    Registro36925 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36925(Registro36925 r) {
    return r.valor + r.id;
}
