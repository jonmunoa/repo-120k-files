// fichero 4601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4601;

Registro4601 crear_registro4601(int id) {
    Registro4601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4601(Registro4601 r) {
    return r.valor + r.id;
}
