// fichero 45477 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45477;

Registro45477 crear_registro45477(int id) {
    Registro45477 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45477(Registro45477 r) {
    return r.valor + r.id;
}
