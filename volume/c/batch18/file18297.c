// fichero 18297 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18297;

Registro18297 crear_registro18297(int id) {
    Registro18297 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18297(Registro18297 r) {
    return r.valor + r.id;
}
