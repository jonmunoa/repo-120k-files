// fichero 12833 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12833;

Registro12833 crear_registro12833(int id) {
    Registro12833 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12833(Registro12833 r) {
    return r.valor + r.id;
}
