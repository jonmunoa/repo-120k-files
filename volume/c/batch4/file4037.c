// fichero 4037 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4037;

Registro4037 crear_registro4037(int id) {
    Registro4037 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4037(Registro4037 r) {
    return r.valor + r.id;
}
