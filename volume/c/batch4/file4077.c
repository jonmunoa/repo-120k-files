// fichero 4077 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4077;

Registro4077 crear_registro4077(int id) {
    Registro4077 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4077(Registro4077 r) {
    return r.valor + r.id;
}
