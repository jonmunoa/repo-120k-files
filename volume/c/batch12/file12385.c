// fichero 12385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12385;

Registro12385 crear_registro12385(int id) {
    Registro12385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12385(Registro12385 r) {
    return r.valor + r.id;
}
