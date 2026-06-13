// fichero 45525 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45525;

Registro45525 crear_registro45525(int id) {
    Registro45525 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45525(Registro45525 r) {
    return r.valor + r.id;
}
