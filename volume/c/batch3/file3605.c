// fichero 3605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3605;

Registro3605 crear_registro3605(int id) {
    Registro3605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3605(Registro3605 r) {
    return r.valor + r.id;
}
