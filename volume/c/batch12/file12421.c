// fichero 12421 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12421;

Registro12421 crear_registro12421(int id) {
    Registro12421 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12421(Registro12421 r) {
    return r.valor + r.id;
}
