// fichero 28889 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28889;

Registro28889 crear_registro28889(int id) {
    Registro28889 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28889(Registro28889 r) {
    return r.valor + r.id;
}
