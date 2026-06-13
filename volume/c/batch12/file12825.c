// fichero 12825 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12825;

Registro12825 crear_registro12825(int id) {
    Registro12825 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12825(Registro12825 r) {
    return r.valor + r.id;
}
