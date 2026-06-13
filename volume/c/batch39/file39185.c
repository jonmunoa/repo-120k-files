// fichero 39185 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39185;

Registro39185 crear_registro39185(int id) {
    Registro39185 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39185(Registro39185 r) {
    return r.valor + r.id;
}
