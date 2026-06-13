// fichero 26505 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26505;

Registro26505 crear_registro26505(int id) {
    Registro26505 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26505(Registro26505 r) {
    return r.valor + r.id;
}
