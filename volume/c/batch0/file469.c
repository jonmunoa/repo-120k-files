// fichero 469 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro469;

Registro469 crear_registro469(int id) {
    Registro469 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro469(Registro469 r) {
    return r.valor + r.id;
}
