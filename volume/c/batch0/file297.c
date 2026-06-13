// fichero 297 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro297;

Registro297 crear_registro297(int id) {
    Registro297 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro297(Registro297 r) {
    return r.valor + r.id;
}
