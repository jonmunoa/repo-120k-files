// fichero 4585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4585;

Registro4585 crear_registro4585(int id) {
    Registro4585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4585(Registro4585 r) {
    return r.valor + r.id;
}
