// fichero 50525 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50525;

Registro50525 crear_registro50525(int id) {
    Registro50525 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50525(Registro50525 r) {
    return r.valor + r.id;
}
