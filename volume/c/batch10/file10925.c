// fichero 10925 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10925;

Registro10925 crear_registro10925(int id) {
    Registro10925 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10925(Registro10925 r) {
    return r.valor + r.id;
}
