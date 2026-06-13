// fichero 53889 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53889;

Registro53889 crear_registro53889(int id) {
    Registro53889 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53889(Registro53889 r) {
    return r.valor + r.id;
}
