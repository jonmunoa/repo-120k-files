// fichero 45453 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45453;

Registro45453 crear_registro45453(int id) {
    Registro45453 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45453(Registro45453 r) {
    return r.valor + r.id;
}
