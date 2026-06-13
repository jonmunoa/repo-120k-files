// fichero 53297 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53297;

Registro53297 crear_registro53297(int id) {
    Registro53297 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53297(Registro53297 r) {
    return r.valor + r.id;
}
