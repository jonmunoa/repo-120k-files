// fichero 477 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro477;

Registro477 crear_registro477(int id) {
    Registro477 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro477(Registro477 r) {
    return r.valor + r.id;
}
