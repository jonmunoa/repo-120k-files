// fichero 4573 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4573;

Registro4573 crear_registro4573(int id) {
    Registro4573 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4573(Registro4573 r) {
    return r.valor + r.id;
}
