// fichero 4889 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4889;

Registro4889 crear_registro4889(int id) {
    Registro4889 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4889(Registro4889 r) {
    return r.valor + r.id;
}
