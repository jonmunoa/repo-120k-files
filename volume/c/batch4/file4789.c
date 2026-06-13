// fichero 4789 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4789;

Registro4789 crear_registro4789(int id) {
    Registro4789 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4789(Registro4789 r) {
    return r.valor + r.id;
}
