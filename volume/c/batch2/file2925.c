// fichero 2925 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2925;

Registro2925 crear_registro2925(int id) {
    Registro2925 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2925(Registro2925 r) {
    return r.valor + r.id;
}
