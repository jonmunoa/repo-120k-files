// fichero 19297 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19297;

Registro19297 crear_registro19297(int id) {
    Registro19297 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19297(Registro19297 r) {
    return r.valor + r.id;
}
