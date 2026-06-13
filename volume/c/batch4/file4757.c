// fichero 4757 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4757;

Registro4757 crear_registro4757(int id) {
    Registro4757 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4757(Registro4757 r) {
    return r.valor + r.id;
}
